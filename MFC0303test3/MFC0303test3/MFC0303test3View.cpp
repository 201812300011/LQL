
// MFC0303test3View.cpp : CMFC0303test3View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC0303test3.h"
#endif

#include "MFC0303test3Doc.h"
#include "MFC0303test3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC0303test3View

IMPLEMENT_DYNCREATE(CMFC0303test3View, CView)

BEGIN_MESSAGE_MAP(CMFC0303test3View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CMFC0303test3View 构造/析构

CMFC0303test3View::CMFC0303test3View()
{
	// TODO: 在此处添加构造代码

}

CMFC0303test3View::~CMFC0303test3View()
{
}

BOOL CMFC0303test3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC0303test3View 绘制

void CMFC0303test3View::OnDraw(CDC* /*pDC*/)
{
	CMFC0303test3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMFC0303test3View 诊断

#ifdef _DEBUG
void CMFC0303test3View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC0303test3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC0303test3Doc* CMFC0303test3View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC0303test3Doc)));
	return (CMFC0303test3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC0303test3View 消息处理程序


void CMFC0303test3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CView::OnLButtonDown(nFlags, point);
	CMFC0303test3Doc*pDoc = GetDocument();
	pDoc->count++;
}


void CMFC0303test3View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMFC0303test3Doc*pDoc = GetDocument();
	CClientDC dc(this);
	CString S;
	S.Format(_T("count=%d"),pDoc->count);
	dc.TextOutW(300,300,S);

	CView::OnRButtonDown(nFlags, point);
}
