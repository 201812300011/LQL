
// 加法运算View.cpp : C加法运算View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "加法运算.h"
#endif

#include "加法运算Doc.h"
#include "加法运算View.h"
#include "MyDialog.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C加法运算View

IMPLEMENT_DYNCREATE(C加法运算View, CView)

BEGIN_MESSAGE_MAP(C加法运算View, CView)
	ON_COMMAND(ID_ADD, &C加法运算View::OnAdd)
END_MESSAGE_MAP()

// C加法运算View 构造/析构

C加法运算View::C加法运算View()
{
	// TODO: 在此处添加构造代码

}

C加法运算View::~C加法运算View()
{
}

BOOL C加法运算View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C加法运算View 绘制

void C加法运算View::OnDraw(CDC* /*pDC*/)
{
	C加法运算Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// C加法运算View 诊断

#ifdef _DEBUG
void C加法运算View::AssertValid() const
{
	CView::AssertValid();
}

void C加法运算View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C加法运算Doc* C加法运算View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C加法运算Doc)));
	return (C加法运算Doc*)m_pDocument;
}
#endif //_DEBUG


// C加法运算View 消息处理程序


void C加法运算View::OnAdd()
{
	// TODO: 在此添加命令处理程序代码
	CClientDC dc(this);
	MyDialog dlg;
	int t = dlg.DoModal();
	if (t == IDOK)
	{

	}
}
