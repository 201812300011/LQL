
// 第5周实验5View.cpp : C第5周实验5View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第5周实验5.h"
#endif

#include "第5周实验5Doc.h"
#include "第5周实验5View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第5周实验5View

IMPLEMENT_DYNCREATE(C第5周实验5View, CView)

BEGIN_MESSAGE_MAP(C第5周实验5View, CView)
	ON_COMMAND(ID_DRAWLINE, &C第5周实验5View::OnDrawline)
	ON_WM_LBUTTONDOWN()
	ON_COMMAND(ID_DRAWRECTANGLE, &C第5周实验5View::OnDrawrectangle)
	ON_COMMAND(ID_DRAWELLIPSE, &C第5周实验5View::OnDrawellipse)
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// C第5周实验5View 构造/析构

C第5周实验5View::C第5周实验5View()
{
	// TODO: 在此处添加构造代码

}

C第5周实验5View::~C第5周实验5View()
{
}

BOOL C第5周实验5View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C第5周实验5View 绘制

void C第5周实验5View::OnDraw(CDC* /*pDC*/)
{
	C第5周实验5Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// C第5周实验5View 诊断

#ifdef _DEBUG
void C第5周实验5View::AssertValid() const
{
	CView::AssertValid();
}

void C第5周实验5View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C第5周实验5Doc* C第5周实验5View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第5周实验5Doc)));
	return (C第5周实验5Doc*)m_pDocument;
}
#endif //_DEBUG


// C第5周实验5View 消息处理程序

int flag;
void C第5周实验5View::OnDrawline()
{
	// TODO: 在此添加命令处理程序代码
	CClientDC dc(this);
	flag = 1;
	CPen pen(PS_SOLID,5,RGB(0,0,0));
	CPen* oldPen = dc.SelectObject(&pen);
}

CRect cr;
CPoint point1, point2;

void C第5周实验5View::OnDrawrectangle()
{
	// TODO: 在此添加命令处理程序代码
	flag = 2;
}

void C第5周实验5View::OnDrawellipse()
{
	// TODO: 在此添加命令处理程序代码
	flag = 3;
}

void C第5周实验5View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	point1.x = point.x;//将鼠标的位置赋给point1；
	point1.y = point.y;
	CView::OnLButtonDown(nFlags, point);
}

void C第5周实验5View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	point2.x = point.x;
	point2.y = point.y;
	switch (flag)
	{
	case 1:
	{
		dc.MoveTo(point2.x, point2.y);
		dc.LineTo(point1.x, point1.y);
	}
	break;
	case 2:
	{
		cr.left = point1.x; cr.top = point1.y;
		cr.right = point2.x; cr.bottom = point2.y;
		dc.Rectangle(cr);
	}
	break;
	case 3:
	{
		cr.left = point1.x; cr.top = point1.y;
		cr.right = point2.x; cr.bottom = point2.y;
		dc.Ellipse(cr);
	}
	break;
	}
	CView::OnLButtonUp(nFlags, point);
}

