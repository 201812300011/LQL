
// 2020.03.16.example1View.cpp : CMy20200316example1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "2020.03.16.example1.h"
#endif

#include "2020.03.16.example1Doc.h"
#include "2020.03.16.example1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy20200316example1View

IMPLEMENT_DYNCREATE(CMy20200316example1View, CView)

BEGIN_MESSAGE_MAP(CMy20200316example1View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy20200316example1View 构造/析构

CMy20200316example1View::CMy20200316example1View()
{
	// TODO: 在此处添加构造代码

}

CMy20200316example1View::~CMy20200316example1View()
{
}

BOOL CMy20200316example1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy20200316example1View 绘制

void CMy20200316example1View::OnDraw(CDC* pDC)
{
	CMy20200316example1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码

	pDC->Rectangle(pDoc->m_tagRec);
}


// CMy20200316example1View 诊断

#ifdef _DEBUG
void CMy20200316example1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy20200316example1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy20200316example1Doc* CMy20200316example1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy20200316example1Doc)));
	return (CMy20200316example1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy20200316example1View 消息处理程序


void CMy20200316example1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CMy20200316example1Doc* pDoc = GetDocument();
	/*鼠标左键按下的同时，shift键是否被按下*/
	if (nFlags&MK_SHIFT)//为真，shift同时按下，矩形复位
	{
		pDoc->m_tagRec.left = 30;  pDoc->m_tagRec.top = 30;
		pDoc->m_tagRec.right = 350; pDoc->m_tagRec.bottom = 300;
	}
	else//为假，移动矩形
	{
		pDoc->m_tagRec.left = point.x;  pDoc->m_tagRec.top = point.y;
		pDoc->m_tagRec.right = point.x+320; pDoc->m_tagRec.bottom = point.y+270;
	}
	InvalidateRect(NULL, TRUE);//强制重绘矩形

	CView::OnLButtonDown(nFlags, point);
}
