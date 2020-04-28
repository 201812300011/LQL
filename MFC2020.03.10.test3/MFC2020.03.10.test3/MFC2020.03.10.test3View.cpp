
// MFC2020.03.10.test3View.cpp : CMFC20200310test3View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC2020.03.10.test3.h"
#endif

#include "MFC2020.03.10.test3Doc.h"
#include "MFC2020.03.10.test3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC20200310test3View

IMPLEMENT_DYNCREATE(CMFC20200310test3View, CView)

BEGIN_MESSAGE_MAP(CMFC20200310test3View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CMFC20200310test3View 构造/析构

CMFC20200310test3View::CMFC20200310test3View()
{
	// TODO: 在此处添加构造代码

}

CMFC20200310test3View::~CMFC20200310test3View()
{
}

BOOL CMFC20200310test3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC20200310test3View 绘制

void CMFC20200310test3View::OnDraw(CDC* pDC)
{
	CMFC20200310test3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	pDC->Rectangle(pDoc->rect1);//Rectangle：CDC类函数，表示矩形；括号里面放CRect类形参
	pDC->Rectangle(pDoc->rect2);
	pDC->Rectangle(pDoc->rect3);
}


// CMFC20200310test3View 诊断

#ifdef _DEBUG
void CMFC20200310test3View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC20200310test3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC20200310test3Doc* CMFC20200310test3View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC20200310test3Doc)));
	return (CMFC20200310test3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC20200310test3View 消息处理程序


void CMFC20200310test3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CMFC20200310test3Doc* pDoc = GetDocument();
	CClientDC dc(this);
	CString s1;
	CString s2;
	CString s4;
	s1.Format(_T("%d"), pDoc->a);
	s2.Format(_T("%d"), pDoc->b);
	s4.Format(_T("点击无效"));
	dc.TextOutW(55,80,s1);
	dc.TextOutW(105, 80, s2);
	dc.TextOutW(400, 390, s4);

	CView::OnLButtonDown(nFlags, point);
}


void CMFC20200310test3View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CMFC20200310test3Doc* pDoc = GetDocument();
	CClientDC dc(this);
	CString s3;
	s3.Format(_T("%d"), pDoc->a+ pDoc->b);
	dc.TextOutW(155,85, s3);

	CView::OnRButtonDown(nFlags, point);
}
