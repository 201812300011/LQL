
// 2020.03.16.example2View.cpp : CMy20200316example2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "2020.03.16.example2.h"
#endif

#include "2020.03.16.example2Doc.h"
#include "2020.03.16.example2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy20200316example2View

IMPLEMENT_DYNCREATE(CMy20200316example2View, CView)

BEGIN_MESSAGE_MAP(CMy20200316example2View, CView)
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CMy20200316example2View 构造/析构

CMy20200316example2View::CMy20200316example2View()
{
	// TODO: 在此处添加构造代码

}

CMy20200316example2View::~CMy20200316example2View()
{
}

BOOL CMy20200316example2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy20200316example2View 绘制

void CMy20200316example2View::OnDraw(CDC* pDC)
{
	CMy20200316example2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码

	CPoint point(30,30);
	pDC->MoveTo(point);
	pDC->LineTo(pDoc->m_point);
}


// CMy20200316example2View 诊断

#ifdef _DEBUG
void CMy20200316example2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy20200316example2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy20200316example2Doc* CMy20200316example2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy20200316example2Doc)));
	return (CMy20200316example2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy20200316example2View 消息处理程序


void CMy20200316example2View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CMy20200316example2Doc* pDoc = GetDocument();
	pDoc->m_point = point;
	InvalidateRect(NULL,FALSE);

	CView::OnMouseMove(nFlags, point);
}
