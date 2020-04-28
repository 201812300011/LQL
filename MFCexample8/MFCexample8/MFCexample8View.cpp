
// MFCexample8View.cpp : CMFCexample8View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCexample8.h"
#endif

#include "MFCexample8Doc.h"
#include "MFCexample8View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCexample8View

IMPLEMENT_DYNCREATE(CMFCexample8View, CView)

BEGIN_MESSAGE_MAP(CMFCexample8View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCexample8View 构造/析构

CMFCexample8View::CMFCexample8View()
{
	// TODO: 在此处添加构造代码
	

}

CMFCexample8View::~CMFCexample8View()
{
}

BOOL CMFCexample8View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCexample8View 绘制

void CMFCexample8View::OnDraw(CDC* pDC)
{
	CMFCexample8Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码

	for (int i = 0; i < pDoc->ca.GetSize(); i++)//取数组大小
		pDC->Rectangle(pDoc->ca.GetAt(i));//显示出矩形，GetAt(i)相当于[]

}


// CMFCexample8View 诊断

#ifdef _DEBUG
void CMFCexample8View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexample8View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexample8Doc* CMFCexample8View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexample8Doc)));
	return (CMFCexample8Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCexample8View 消息处理程序


void CMFCexample8View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	int  r = rand() % 50 + 5;//rand（）随机数
	CRect cr(point.x - r, point.y - r, point.x + r, point.y + r);//由中心点得左上角和右下角坐标

	CMFCexample8Doc* pDoc = GetDocument();//调用doc内的成员
	pDoc->ca.Add(cr);//将产生的矩形放数组里面
	this->Invalidate();//让客户区处于非法状态，重绘

    //CClientDC dc(this);
	//构造客户区，通过调用dc，调用正方形类
	//dc.Rectangle(cr);//正方形在客户区内

	CView::OnLButtonDown(nFlags, point);
}
