
// 第8周实验3.3View.cpp : C第8周实验33View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第8周实验3.3.h"
#endif

#include "第8周实验3.3Doc.h"
#include "第8周实验3.3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第8周实验33View

IMPLEMENT_DYNCREATE(C第8周实验33View, CView)

BEGIN_MESSAGE_MAP(C第8周实验33View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C第8周实验33View 构造/析构

C第8周实验33View::C第8周实验33View()
{
	// TODO: 在此处添加构造代码
	rc.left = 100; rc.top = 100;
	rc.right = 200; rc.bottom = 200;
}

C第8周实验33View::~C第8周实验33View()
{
}

BOOL C第8周实验33View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C第8周实验33View 绘制

void C第8周实验33View::OnDraw(CDC* pDC)
{
	C第8周实验33Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	pDC->Ellipse(rc);
}


// C第8周实验33View 诊断

#ifdef _DEBUG
void C第8周实验33View::AssertValid() const
{
	CView::AssertValid();
}

void C第8周实验33View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C第8周实验33Doc* C第8周实验33View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第8周实验33Doc)));
	return (C第8周实验33Doc*)m_pDocument;
}
#endif //_DEBUG


// C第8周实验33View 消息处理程序


void C第8周实验33View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	if ((rc.left < point.x) && (point.x < rc.right) && (rc.top < point.y) && (point.y < rc.bottom))
	{
		CRect m_rc;
		m_rc.left = rc.left;m_rc.top = rc.top;
		m_rc.right = rc.right; m_rc.bottom = rc.bottom;
		CDC* dc = GetDC();
		CPen* Oldpen = NULL;
		CPen pen;
		pen.CreatePen(PS_DASH,1,RGB(0,0,0));
		Oldpen = dc->SelectObject(&pen);
		CBrush* OldBrush = NULL;
		CBrush* Brush = CBrush::FromHandle((HBRUSH)GetStockObject(NULL_BRUSH));//设置透明背景
		OldBrush = dc->SelectObject(Brush);
		dc->Rectangle(m_rc);
	}
	CView::OnLButtonDown(nFlags, point);
}
