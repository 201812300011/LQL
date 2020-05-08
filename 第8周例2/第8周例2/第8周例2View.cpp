
// 第8周例2View.cpp : C第8周例2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第8周例2.h"
#endif

#include "第8周例2Doc.h"
#include "第8周例2View.h"
#include "MyDialog.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第8周例2View

IMPLEMENT_DYNCREATE(C第8周例2View, CView)

BEGIN_MESSAGE_MAP(C第8周例2View, CView)
	ON_WM_RBUTTONDBLCLK()
END_MESSAGE_MAP()

// C第8周例2View 构造/析构

C第8周例2View::C第8周例2View()
{
	// TODO: 在此处添加构造代码

}

C第8周例2View::~C第8周例2View()
{
}

BOOL C第8周例2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C第8周例2View 绘制

void C第8周例2View::OnDraw(CDC* /*pDC*/)
{
	C第8周例2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// C第8周例2View 诊断

#ifdef _DEBUG
void C第8周例2View::AssertValid() const
{
	CView::AssertValid();
}

void C第8周例2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C第8周例2Doc* C第8周例2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第8周例2Doc)));
	return (C第8周例2Doc*)m_pDocument;
}
#endif //_DEBUG


// C第8周例2View 消息处理程序


void C第8周例2View::OnRButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	MyDialog md;
	int r=md.DoModal();
	if (r == IDOK)
	{
		CString s1 = md.s;//将s的值返回客户区
		GetDC()->TextOutW(200,100,s1);//相当于CClientDC dc(this); dc.TextOutW(200,100,s1);
	}
	CView::OnRButtonDblClk(nFlags, point);
}
