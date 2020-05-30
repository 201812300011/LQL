
// 第9周实验2View.cpp : C第9周实验2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第9周实验2.h"
#endif

#include "第9周实验2Doc.h"
#include "第9周实验2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第9周实验2View

IMPLEMENT_DYNCREATE(C第9周实验2View, CView)

BEGIN_MESSAGE_MAP(C第9周实验2View, CView)
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// C第9周实验2View 构造/析构

C第9周实验2View::C第9周实验2View()
{
	// TODO: 在此处添加构造代码

}

C第9周实验2View::~C第9周实验2View()
{
}

BOOL C第9周实验2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C第9周实验2View 绘制

void C第9周实验2View::OnDraw(CDC* pDC )
{
	C第9周实验2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	for (int i = 0; i < pDoc->ca.GetSize(); i++) 
	{
		pDC->Ellipse(pDoc->ca[i]);
	}
}


// C第9周实验2View 诊断

#ifdef _DEBUG
void C第9周实验2View::AssertValid() const
{
	CView::AssertValid();
}

void C第9周实验2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C第9周实验2Doc* C第9周实验2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第9周实验2Doc)));
	return (C第9周实验2Doc*)m_pDocument;
}
#endif //_DEBUG


// C第9周实验2View 消息处理程序


void C第9周实验2View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	C第9周实验2Doc* pDoc = GetDocument();
	if (nFlags) {
		rect.left = point.x - 30;
		rect.right = point.x + 30;
		rect.top = point.y - 20;
		rect.bottom = point.y + 20;
		pDoc->ca.Add(rect);
	}
	this->Invalidate();
	CView::OnMouseMove(nFlags, point);
}
