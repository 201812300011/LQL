
// 第8周实验3.2View.cpp : C第8周实验32View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第8周实验3.2.h"
#endif

#include "第8周实验3.2Doc.h"
#include "第8周实验3.2View.h"
#include "MyDialog.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第8周实验32View

IMPLEMENT_DYNCREATE(C第8周实验32View, CView)

BEGIN_MESSAGE_MAP(C第8周实验32View, CView)
	ON_COMMAND(ID_DRAWELLIPSE, &C第8周实验32View::OnDrawellipse)
END_MESSAGE_MAP()

// C第8周实验32View 构造/析构

C第8周实验32View::C第8周实验32View()
{
	// TODO: 在此处添加构造代码

}

C第8周实验32View::~C第8周实验32View()
{
}

BOOL C第8周实验32View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C第8周实验32View 绘制

void C第8周实验32View::OnDraw(CDC* /*pDC*/)
{
	C第8周实验32Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// C第8周实验32View 诊断

#ifdef _DEBUG
void C第8周实验32View::AssertValid() const
{
	CView::AssertValid();
}

void C第8周实验32View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C第8周实验32Doc* C第8周实验32View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第8周实验32Doc)));
	return (C第8周实验32Doc*)m_pDocument;
}
#endif //_DEBUG


// C第8周实验32View 消息处理程序


void C第8周实验32View::OnDrawellipse()
{
	// TODO: 在此添加命令处理程序代码
	MyDialog dlg;
	int t = dlg.DoModal();
	if (t == IDOK)
	{
		CRect rc;
		rc.left = dlg.left;
		rc.top = dlg.top;
		rc.right = dlg.right;
		rc.bottom = dlg.buttom;
		GetDC()->Ellipse(rc);
	}
}
