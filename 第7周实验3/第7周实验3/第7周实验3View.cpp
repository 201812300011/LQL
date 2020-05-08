
// 第7周实验3View.cpp : C第7周实验3View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第7周实验3.h"
#endif

#include "第7周实验3Doc.h"
#include "第7周实验3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第7周实验3View

IMPLEMENT_DYNCREATE(C第7周实验3View, CView)

BEGIN_MESSAGE_MAP(C第7周实验3View, CView)
	ON_WM_TIMER()
	ON_WM_LBUTTONDBLCLK()
	ON_WM_LBUTTONDOWN()
	ON_COMMAND(ID_DRAWCIRCLE, &C第7周实验3View::OnDrawcircle)
END_MESSAGE_MAP()

// C第7周实验3View 构造/析构

C第7周实验3View::C第7周实验3View()
{
	// TODO: 在此处添加构造代码
	set = true;
	flag = 0;
}

C第7周实验3View::~C第7周实验3View()
{
}

BOOL C第7周实验3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C第7周实验3View 绘制

void C第7周实验3View::OnDraw(CDC* pDC)
{
	C第7周实验3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	if (set)
	{
		SetTimer(1,rand()%400+100,NULL);
		set = false;
		
	}
	pDC->Ellipse(rc);
}


// C第7周实验3View 诊断

#ifdef _DEBUG
void C第7周实验3View::AssertValid() const
{
	CView::AssertValid();
}

void C第7周实验3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C第7周实验3Doc* C第7周实验3View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第7周实验3Doc)));
	return (C第7周实验3Doc*)m_pDocument;
}
#endif //_DEBUG


// C第7周实验3View 消息处理程序


void C第7周实验3View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	int i = nIDEvent;
	if (n == 1)
	{
		if (rc.left < rect.left)
		{
			flag = 0;
		}
		if (rc.right > rect.right)
		{
			flag = 1;
		}
		if (flag == 1)
		{
			rc.left -= 20;
			rc.right -= 20;
		}
		if (flag == 0)
		{
			rc.left += 20;
			rc.right += 20;
		}
	}
	Invalidate();
	CView::OnTimer(nIDEvent);
}


void C第7周实验3View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	n = 1;
	Invalidate();
	CView::OnLButtonDblClk(nFlags, point);
}


void C第7周实验3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	n = 0;
	CView::OnLButtonDown(nFlags, point);
}


void C第7周实验3View::OnDrawcircle()
{
	// TODO: 在此添加命令处理程序代码
	CClientDC dc(this);
	GetClientRect(&rect);
	rc.left = (rect.left + rect.right) / 4 - 50;
	rc.top = (rect.bottom + rect.top) / 2 - 50;
	rc.right = (rect.left + rect.right) / 4 + 50;
	rc.bottom = (rect.bottom + rect.top) / 2 + 50;
}
