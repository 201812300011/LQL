
// 第8周实验3.4View.cpp : C第8周实验34View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第8周实验3.4.h"
#endif

#include "第8周实验3.4Doc.h"
#include "第8周实验3.4View.h"
#include "MyDialog.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第8周实验34View

IMPLEMENT_DYNCREATE(C第8周实验34View, CView)

BEGIN_MESSAGE_MAP(C第8周实验34View, CView)
	ON_COMMAND(ID_COLOR, &C第8周实验34View::OnColor)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C第8周实验34View 构造/析构

C第8周实验34View::C第8周实验34View()
{
	// TODO: 在此处添加构造代码
	rc.left = 100; rc.top = 200;
	rc.right = 100; rc.bottom = 200;
}

C第8周实验34View::~C第8周实验34View()
{
}

BOOL C第8周实验34View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C第8周实验34View 绘制

void C第8周实验34View::OnDraw(CDC* pDC)
{
	C第8周实验34Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	pDC->Ellipse(rc);
}


// C第8周实验34View 诊断

#ifdef _DEBUG
void C第8周实验34View::AssertValid() const
{
	CView::AssertValid();
}

void C第8周实验34View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C第8周实验34Doc* C第8周实验34View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第8周实验34Doc)));
	return (C第8周实验34Doc*)m_pDocument;
}
#endif //_DEBUG


// C第8周实验34View 消息处理程序


void C第8周实验34View::OnColor()
{
	// TODO: 在此添加命令处理程序代码
	MyDialog dlg;
	int t = dlg.DoModal();
	if (t == IDOK) {
		CDC* pDC = GetDC(); // 得到DC
		CBrush brush(RGB(dlg.a, dlg.b, dlg.c));//根据自己需要填充颜色
		CBrush *oldbrush;
		oldbrush = pDC->SelectObject(&brush);//选新的画刷
		pDC->Ellipse(rc.left, rc.top, rc.right, rc.bottom);
		pDC->SelectObject(oldbrush);//将原来的画刷选回去
	}
}


void C第8周实验34View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	if ((point.x < rc.right) && (point.x > rc.left) && (point.y > rc.top) && (point.y < rc.bottom)) {
		CRect m_rc;
		m_rc.left = rc.left;m_rc.top = rc.top;
		m_rc.right = rc.right;m_rc.bottom = rc.bottom;
		CDC * dc = GetDC();
		CPen * OldPen = NULL;
		CPen pen;
		pen.CreatePen(PS_DASH, 1, RGB(0, 0, 0));
		OldPen = dc->SelectObject(&pen);
		CBrush * OldBrush = NULL;
		CBrush * Brush = CBrush::FromHandle((HBRUSH)GetStockObject(NULL_BRUSH));//背景透明效果
		OldBrush = dc->SelectObject(Brush);
		dc->Rectangle(m_rc);

	}
	CView::OnLButtonDown(nFlags, point);
}
