
// 2020.03.17.test4View.cpp : CMy20200317test4View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "2020.03.17.test4.h"
#endif

#include "2020.03.17.test4Doc.h"
#include "2020.03.17.test4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy20200317test4View

IMPLEMENT_DYNCREATE(CMy20200317test4View, CView)

BEGIN_MESSAGE_MAP(CMy20200317test4View, CView)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// CMy20200317test4View 构造/析构

CMy20200317test4View::CMy20200317test4View()
{
	// TODO: 在此处添加构造代码

}

CMy20200317test4View::~CMy20200317test4View()
{
}

BOOL CMy20200317test4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy20200317test4View 绘制

void CMy20200317test4View::OnDraw(CDC* pDC)
{
	CMy20200317test4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	pDC->Ellipse(pDoc->cr);
	if (pDoc->set)
	{
		
		SetTimer(1, rand() % 400 + 100, NULL);
		pDoc->set = false;
	}
}


// CMy20200317test4View 诊断

#ifdef _DEBUG
void CMy20200317test4View::AssertValid() const
{
	CView::AssertValid();
}

void CMy20200317test4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy20200317test4Doc* CMy20200317test4View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy20200317test4Doc)));
	return (CMy20200317test4Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy20200317test4View 消息处理程序


void CMy20200317test4View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMy20200317test4Doc* pDoc = GetDocument();
	int i = nIDEvent;
	CClientDC dc(this);
	CRect clientRect;
	int flag;
	GetClientRect(&clientRect);
	if (pDoc->cr.top > 0 && pDoc->cr.bottom<clientRect.bottom)
	{
		pDoc->cr.top += 10;
		pDoc->cr.bottom += 10;
	}
	else
	{
		pDoc->cr.top -= 10;
		pDoc->cr.bottom -= 10;
	}
	dc.Rectangle(pDoc->cr);
	Invalidate();
	CView::OnTimer(nIDEvent);
}
