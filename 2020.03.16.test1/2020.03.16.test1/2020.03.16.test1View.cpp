
// 2020.03.16.test1View.cpp : CMy20200316test1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "2020.03.16.test1.h"
#endif

#include "2020.03.16.test1Doc.h"
#include "2020.03.16.test1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy20200316test1View

IMPLEMENT_DYNCREATE(CMy20200316test1View, CView)

BEGIN_MESSAGE_MAP(CMy20200316test1View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CMy20200316test1View 构造/析构

CMy20200316test1View::CMy20200316test1View()
{
	// TODO: 在此处添加构造代码

}

CMy20200316test1View::~CMy20200316test1View()
{
}

BOOL CMy20200316test1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy20200316test1View 绘制

void CMy20200316test1View::OnDraw(CDC* pDC)
{
	CMy20200316test1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	pDC->Rectangle(pDoc->rect);
}


// CMy20200316test1View 诊断

#ifdef _DEBUG
void CMy20200316test1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy20200316test1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy20200316test1Doc* CMy20200316test1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy20200316test1Doc)));
	return (CMy20200316test1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy20200316test1View 消息处理程序


void CMy20200316test1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CMy20200316test1Doc* pDoc = GetDocument();
	SetCapture();
	pDoc->A = point.x; pDoc->B = point.y;

	CView::OnLButtonDown(nFlags, point);
}


void CMy20200316test1View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CMy20200316test1Doc* pDoc = GetDocument();
	CClientDC dc(this);
	ReleaseCapture();
	pDoc->C = point.x; pDoc->D = point.y;
	CRect rect(pDoc->A, pDoc->B, pDoc->C, pDoc->D);
	dc.Rectangle(&rect);

	CView::OnLButtonUp(nFlags, point);
}


void CMy20200316test1View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMy20200316test1Doc* pDoc = GetDocument();
	CClientDC dc(this);
	CString t;
	t.Format(_T("X=%d,Y=%d"), point.x, point.y);
	dc.TextOutW(300, 300, t);

	CView::OnMouseMove(nFlags, point);
}
