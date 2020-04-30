
// 2020.03.17.test2View.cpp : CMy20200317test2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "2020.03.17.test2.h"
#endif

#include "2020.03.17.test2Doc.h"
#include "2020.03.17.test2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy20200317test2View

IMPLEMENT_DYNCREATE(CMy20200317test2View, CView)

BEGIN_MESSAGE_MAP(CMy20200317test2View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CMy20200317test2View 构造/析构

CMy20200317test2View::CMy20200317test2View()
{
	// TODO: 在此处添加构造代码

}

CMy20200317test2View::~CMy20200317test2View()
{
}

BOOL CMy20200317test2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy20200317test2View 绘制

void CMy20200317test2View::OnDraw(CDC* /*pDC*/)
{
	CMy20200317test2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMy20200317test2View 诊断

#ifdef _DEBUG
void CMy20200317test2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy20200317test2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy20200317test2Doc* CMy20200317test2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy20200317test2Doc)));
	return (CMy20200317test2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy20200317test2View 消息处理程序


void CMy20200317test2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CMy20200317test2Doc* pDoc = GetDocument();
	pDoc->A = point.x;

	CView::OnLButtonDown(nFlags, point);
}


void CMy20200317test2View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CMy20200317test2Doc* pDoc = GetDocument();
	pDoc->B = point.x;

	CView::OnLButtonUp(nFlags, point);
}


void CMy20200317test2View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CMy20200317test2Doc* pDoc = GetDocument();
	CClientDC dc(this);
	CString s;
	int a = abs(pDoc->A-pDoc->B);
	if(nFlags)
	{
		pDoc->count = pDoc->count++;
	}
	s.Format(_T("MouseMove发生了%d次，横向移动%d像素算发生一次"), pDoc->count, a);
	dc.TextOutW(300,300,s);

	CView::OnMouseMove(nFlags, point);
}
