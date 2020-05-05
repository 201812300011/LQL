
// 第6周实验1View.cpp : C第6周实验1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第6周实验1.h"
#endif

#include "第6周实验1Doc.h"
#include "第6周实验1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第6周实验1View

IMPLEMENT_DYNCREATE(C第6周实验1View, CView)

BEGIN_MESSAGE_MAP(C第6周实验1View, CView)
	ON_WM_CHAR()
END_MESSAGE_MAP()

// C第6周实验1View 构造/析构

C第6周实验1View::C第6周实验1View()
{
	// TODO: 在此处添加构造代码
	s = "";
}

C第6周实验1View::~C第6周实验1View()
{
}

BOOL C第6周实验1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C第6周实验1View 绘制

void C第6周实验1View::OnDraw(CDC* pDC)
{
	C第6周实验1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	pDC->Rectangle(pDoc->rect);
}


// C第6周实验1View 诊断

#ifdef _DEBUG
void C第6周实验1View::AssertValid() const
{
	CView::AssertValid();
}

void C第6周实验1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C第6周实验1Doc* C第6周实验1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第6周实验1Doc)));
	return (C第6周实验1Doc*)m_pDocument;
}
#endif //_DEBUG


// C第6周实验1View 消息处理程序


void C第6周实验1View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	C第6周实验1Doc* pDoc = GetDocument();
	CClientDC dc(this);
	s = s + (char) nChar;
	dc.TextOutW(pDoc->rect.left+10, pDoc->rect.right + 10, s);
	CView::OnChar(nChar, nRepCnt, nFlags);
}
