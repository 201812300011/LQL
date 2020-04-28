
// MFCexample7View.cpp : CMFCexample7View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCexample7.h"
#endif

#include "MFCexample7Doc.h"
#include "MFCexample7View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCexample7View

IMPLEMENT_DYNCREATE(CMFCexample7View, CView)

BEGIN_MESSAGE_MAP(CMFCexample7View, CView)
	ON_WM_MBUTTONDOWN()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCexample7View 构造/析构

CMFCexample7View::CMFCexample7View()
{
	// TODO: 在此处添加构造代码
	
}

CMFCexample7View::~CMFCexample7View()
{
}

BOOL CMFCexample7View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCexample7View 绘制

void CMFCexample7View::OnDraw(CDC* /*pDC*/)
{
	CMFCexample7Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMFCexample7View 诊断

#ifdef _DEBUG
void CMFCexample7View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexample7View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexample7Doc* CMFCexample7View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexample7Doc)));
	return (CMFCexample7Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCexample7View 消息处理程序


void CMFCexample7View::OnMButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	int  r = rand() % 50 + 5;//rand（）随机数
	CClientDC dc(this);//构造客户区，通过调用dc，调用正方形类
	CRect cr(point.x-r, point.y-r, point.x+r, point.y+r);//由中心点得左上角和右下角坐标
	dc.Rectangle(cr);//正方形在客户区内

	CView::OnMButtonDown(nFlags, point);
}


void CMFCexample7View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	int  r = rand() % 50 + 5;//rand（）随机数
	CClientDC dc(this);//构造客户区，通过调用dc，调用正方形类
	CRect cr(point.x - r, point.y - r, point.x + r, point.y + r);//由中心点得左上角和右下角坐标
	dc.Rectangle(cr);//正方形在客户区内

	CView::OnLButtonDown(nFlags, point);
}
