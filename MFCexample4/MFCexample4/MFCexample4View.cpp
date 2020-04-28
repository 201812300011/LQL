
// MFCexample4View.cpp : CMFCexample4View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCexample4.h"
#endif

#include "MFCexample4Doc.h"
#include "MFCexample4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCexample4View

IMPLEMENT_DYNCREATE(CMFCexample4View, CView)

BEGIN_MESSAGE_MAP(CMFCexample4View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCexample4View 构造/析构

CMFCexample4View::CMFCexample4View()
{
	// TODO: 在此处添加构造代码

}

CMFCexample4View::~CMFCexample4View()
{
}

BOOL CMFCexample4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCexample4View 绘制

void CMFCexample4View::OnDraw(CDC* /*pDC*/)
{
	CMFCexample4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMFCexample4View 诊断

#ifdef _DEBUG
void CMFCexample4View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexample4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexample4Doc* CMFCexample4View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexample4Doc)));
	return (CMFCexample4Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCexample4View 消息处理程序


void CMFCexample4View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	CRect rc;
	GetClientRect(&rc);
	dc.MoveTo(0,(rc.bottom+rc.top)/2);
	dc.LineTo((rc.right+rc.left)/2,0);
	dc.LineTo(rc.right,(rc.bottom+rc.top)/2);
	dc.LineTo((rc.right+rc.left)/2,rc.bottom);
	dc.LineTo(0, (rc.bottom + rc.top) / 2);
	CView::OnLButtonDown(nFlags, point);
}
