
// 第8周实验1.1View.cpp : C第8周实验11View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第8周实验1.1.h"
#endif

#include "第8周实验1.1Doc.h"
#include "第8周实验1.1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第8周实验11View

IMPLEMENT_DYNCREATE(C第8周实验11View, CView)

BEGIN_MESSAGE_MAP(C第8周实验11View, CView)
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// C第8周实验11View 构造/析构

C第8周实验11View::C第8周实验11View()
{
	// TODO: 在此处添加构造代码

}

C第8周实验11View::~C第8周实验11View()
{
}

BOOL C第8周实验11View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C第8周实验11View 绘制

void C第8周实验11View::OnDraw(CDC* /*pDC*/)
{
	C第8周实验11Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// C第8周实验11View 诊断

#ifdef _DEBUG
void C第8周实验11View::AssertValid() const
{
	CView::AssertValid();
}

void C第8周实验11View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C第8周实验11Doc* C第8周实验11View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第8周实验11Doc)));
	return (C第8周实验11Doc*)m_pDocument;
}
#endif //_DEBUG


// C第8周实验11View 消息处理程序


void C第8周实验11View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CFileDialog cfd(true);
	int t = cfd.DoModal();
	if (t == IDOK)
	{
		filename = cfd.GetFileName();
		GetDC()->TextOutW(50, 60, filename);
	}
	CView::OnLButtonDblClk(nFlags, point);
	CView::OnLButtonDblClk(nFlags, point);
}
