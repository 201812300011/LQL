
// MFCexample3View.cpp : CMFCexample3View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCexample3.h"
#endif

#include "MFCexample3Doc.h"
#include "MFCexample3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCexample3View

IMPLEMENT_DYNCREATE(CMFCexample3View, CView)

BEGIN_MESSAGE_MAP(CMFCexample3View, CView)
END_MESSAGE_MAP()

// CMFCexample3View 构造/析构

CMFCexample3View::CMFCexample3View()
{
	// TODO: 在此处添加构造代码

}

CMFCexample3View::~CMFCexample3View()
{
}

BOOL CMFCexample3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCexample3View 绘制

void CMFCexample3View::OnDraw(CDC* pDC)
{
	CMFCexample3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CRect rect(30,30,300,300);
	pDC->Rectangle(&rect);
}


// CMFCexample3View 诊断

#ifdef _DEBUG
void CMFCexample3View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexample3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexample3Doc* CMFCexample3View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexample3Doc)));
	return (CMFCexample3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCexample3View 消息处理程序
