
// MFC2020.03.10.test2View.cpp : CMFC20200310test2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC2020.03.10.test2.h"
#endif

#include "MFC2020.03.10.test2Doc.h"
#include "MFC2020.03.10.test2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC20200310test2View

IMPLEMENT_DYNCREATE(CMFC20200310test2View, CView)

BEGIN_MESSAGE_MAP(CMFC20200310test2View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFC20200310test2View 构造/析构

CMFC20200310test2View::CMFC20200310test2View()
{
	// TODO: 在此处添加构造代码

}

CMFC20200310test2View::~CMFC20200310test2View()
{
}

BOOL CMFC20200310test2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC20200310test2View 绘制

void CMFC20200310test2View::OnDraw(CDC* /*pDC*/)
{
	CMFC20200310test2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMFC20200310test2View 诊断

#ifdef _DEBUG
void CMFC20200310test2View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC20200310test2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC20200310test2Doc* CMFC20200310test2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC20200310test2Doc)));
	return (CMFC20200310test2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC20200310test2View 消息处理程序


void CMFC20200310test2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CMFC20200310test2Doc* pDoc = GetDocument();//此句可通过双击view类，双击ondraw函数，复制粘贴
	//不同类成员调用，需要利用GetDocument()，指针访问
	CClientDC dc(this);//定义一个CClientDC类对象dc
	CString s;//定义字符串s
	int a = pDoc->A;//指针调用A的值
	int b = pDoc->B;
	int c = a+b;
	s.Format(_T("A+B=%d"),c);//%d：数据类型；
	dc.TextOutW(400, 400, s);//显示

	CView::OnLButtonDown(nFlags, point);
}
