
// MFCexample5View.cpp : CMFCexample5View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCexample5.h"
#endif

#include "MFCexample5Doc.h"
#include "MFCexample5View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCexample5View

IMPLEMENT_DYNCREATE(CMFCexample5View, CView)

BEGIN_MESSAGE_MAP(CMFCexample5View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCexample5View 构造/析构

CMFCexample5View::CMFCexample5View()
{
	// TODO: 在此处添加构造代码

}

CMFCexample5View::~CMFCexample5View()
{
}

BOOL CMFCexample5View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCexample5View 绘制

void CMFCexample5View::OnDraw(CDC* /*pDC*/)
{
	CMFCexample5Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMFCexample5View 诊断

#ifdef _DEBUG
void CMFCexample5View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexample5View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexample5Doc* CMFCexample5View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexample5Doc)));
	return (CMFCexample5Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCexample5View 消息处理程序


void CMFCexample5View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CString s;
	s.Format(_T("点的位置是（%d,%d）"),point.x,point.y);
	CClientDC dc(this);
	dc.TextOutW(100,200,s);
	CView::OnLButtonDown(nFlags, point);
}
