
// MFCexample1View.cpp : CMFCexample1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCexample1.h"
#endif

#include "MFCexample1Doc.h"
#include "MFCexample1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCexample1View

IMPLEMENT_DYNCREATE(CMFCexample1View, CView)

BEGIN_MESSAGE_MAP(CMFCexample1View, CView)
END_MESSAGE_MAP()

// CMFCexample1View 构造/析构

CMFCexample1View::CMFCexample1View()
{
	// TODO: 在此处添加构造代码

}

CMFCexample1View::~CMFCexample1View()
{
}

BOOL CMFCexample1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCexample1View 绘制

void CMFCexample1View::OnDraw(CDC* pDC)
{
	CMFCexample1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	int b = pDoc->a;
	CString s;
	s.Format(_T("%d"), b);
	pDC->TextOutW(100,200,s);

}


// CMFCexample1View 诊断

#ifdef _DEBUG
void CMFCexample1View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexample1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexample1Doc* CMFCexample1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexample1Doc)));
	return (CMFCexample1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCexample1View 消息处理程序
