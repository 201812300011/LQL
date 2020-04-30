
// 2020.03.17.example7View.cpp : CMy20200317example7View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "2020.03.17.example7.h"
#endif

#include "2020.03.17.example7Doc.h"
#include "2020.03.17.example7View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy20200317example7View

IMPLEMENT_DYNCREATE(CMy20200317example7View, CView)

BEGIN_MESSAGE_MAP(CMy20200317example7View, CView)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// CMy20200317example7View 构造/析构

CMy20200317example7View::CMy20200317example7View()
{
	// TODO: 在此处添加构造代码

}

CMy20200317example7View::~CMy20200317example7View()
{
}

BOOL CMy20200317example7View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy20200317example7View 绘制

void CMy20200317example7View::OnDraw(CDC* pDC)
{
	CMy20200317example7Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CArray<CRect,CRect> cr;
	if (set)
	{
		for (int i = 0; i < N; i++)
		{
			SetTimer(i, rand() % 400 + 100, NULL);//设置每个小球掉落时间不一样
			set = false;
		}
	}
	// TODO: 在此处为本机数据添加绘制代码
	for (int i = 0; i < N; i++)
	{
		pDC->Ellipse(cr[i]);
	}
}


// CMy20200317example7View 诊断

#ifdef _DEBUG
void CMy20200317example7View::AssertValid() const
{
	CView::AssertValid();
}

void CMy20200317example7View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy20200317example7Doc* CMy20200317example7View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy20200317example7Doc)));
	return (CMy20200317example7Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy20200317example7View 消息处理程序


void CMy20200317example7View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	
	CMy20200317example7Doc* pDoc = GetDocument();
	int i = nIDEvent;
	cr[i].top += 10; 
	cr[i].bottom += 10;
	Invalidate();

	CView::OnTimer(nIDEvent);
}
