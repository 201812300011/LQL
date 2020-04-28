
// MFCexample6View.cpp : CMFCexample6View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCexample6.h"
#endif

#include "MFCexample6Doc.h"
#include "MFCexample6View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCexample6View

IMPLEMENT_DYNCREATE(CMFCexample6View, CView)

BEGIN_MESSAGE_MAP(CMFCexample6View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCexample6View 构造/析构

CMFCexample6View::CMFCexample6View()
{
	// TODO: 在此处添加构造代码

}

CMFCexample6View::~CMFCexample6View()
{
}

BOOL CMFCexample6View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCexample6View 绘制

void CMFCexample6View::OnDraw(CDC* /*pDC*/)
{
	CMFCexample6Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMFCexample6View 诊断

#ifdef _DEBUG
void CMFCexample6View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexample6View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexample6Doc* CMFCexample6View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexample6Doc)));
	return (CMFCexample6Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCexample6View 消息处理程序


void CMFCexample6View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CRect cr;//定义一个矩形类对象
	this->GetClientRect(&cr);//this为指针，&cr为参数
	CClientDC dc(this);//构造客户区，通过调用它，调用椭圆类
	dc.Ellipse(cr);//将椭圆放在矩形客户区里面

	CView::OnLButtonDown(nFlags, point);
}
