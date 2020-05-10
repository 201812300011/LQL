
// 第5周实验1View.cpp : C第5周实验1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第5周实验1.h"
#endif

#include "第5周实验1Doc.h"
#include "第5周实验1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第5周实验1View

IMPLEMENT_DYNCREATE(C第5周实验1View, CView)

BEGIN_MESSAGE_MAP(C第5周实验1View, CView)
	ON_WM_LBUTTONDOWN()
	ON_COMMAND(ID_DRAWCIRCLE, &C第5周实验1View::OnDrawcircle)
END_MESSAGE_MAP()

// C第5周实验1View 构造/析构

C第5周实验1View::C第5周实验1View()
{
	// TODO: 在此处添加构造代码

}

C第5周实验1View::~C第5周实验1View()
{
}

BOOL C第5周实验1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C第5周实验1View 绘制

void C第5周实验1View::OnDraw(CDC* /*pDC*/)
{
	C第5周实验1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	

}


// C第5周实验1View 诊断

#ifdef _DEBUG
void C第5周实验1View::AssertValid() const
{
	CView::AssertValid();
}

void C第5周实验1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C第5周实验1Doc* C第5周实验1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第5周实验1Doc)));
	return (C第5周实验1Doc*)m_pDocument;
}
#endif //_DEBUG


// C第5周实验1View 消息处理程序


void C第5周实验1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	int r,x,y,R;
	GetClientRect(&rect);//获取客户区尺寸
	x = (rect.left + rect.right) / 2;
	y = (rect.top+rect.bottom) / 2;
	R= (rect.left + rect.right) / 2;
	for (r = 1; r <= R; r++)
	{
		CRect rc(x - r, y - r, x + r, y + r);
		GetDC()->Ellipse(rc);
	}
	CView::OnLButtonDown(nFlags, point);
}


void C第5周实验1View::OnDrawcircle()
{
	// TODO: 在此添加命令处理程序代码

}
