
// MFCexample2View.cpp : CMFCexample2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCexample2.h"
#endif

#include "MFCexample2Doc.h"
#include "MFCexample2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCexample2View

IMPLEMENT_DYNCREATE(CMFCexample2View, CView)

BEGIN_MESSAGE_MAP(CMFCexample2View, CView)
END_MESSAGE_MAP()

// CMFCexample2View 构造/析构

CMFCexample2View::CMFCexample2View()
{
	// TODO: 在此处添加构造代码

}

CMFCexample2View::~CMFCexample2View()
{
}

BOOL CMFCexample2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCexample2View 绘制

void CMFCexample2View::OnDraw(CDC* pDC)
{
	CMFCexample2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	int red = 0, green = 0, blue = 0;
	int width = 2;
	int row = 20;
	for (int s = 0; s < 8; s++)
	{
		int color = RGB(red,green,blue);
		CPen newPen(PS_SOLID,width,color);
		CPen* oldPen = pDC->SelectObject(&newPen);
		pDC->MoveTo(20,row);
		pDC->LineTo(300,row);
		pDC->SelectObject(oldPen);
		red += 20;
		green += 16;
		blue += 8;
		width += 2;
		row += 30;
	}
}


// CMFCexample2View 诊断

#ifdef _DEBUG
void CMFCexample2View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexample2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexample2Doc* CMFCexample2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexample2Doc)));
	return (CMFCexample2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCexample2View 消息处理程序
