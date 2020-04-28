
// MFC2020.03.10.test1View.cpp : CMFC20200310test1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC2020.03.10.test1.h"
#endif

#include "MFC2020.03.10.test1Doc.h"
#include "MFC2020.03.10.test1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC20200310test1View

IMPLEMENT_DYNCREATE(CMFC20200310test1View, CView)

BEGIN_MESSAGE_MAP(CMFC20200310test1View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CMFC20200310test1View 构造/析构

CMFC20200310test1View::CMFC20200310test1View()
{
	// TODO: 在此处添加构造代码

}

CMFC20200310test1View::~CMFC20200310test1View()
{
}

BOOL CMFC20200310test1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC20200310test1View 绘制

void CMFC20200310test1View::OnDraw(CDC* /*pDC*/)
{
	CMFC20200310test1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMFC20200310test1View 诊断

#ifdef _DEBUG
void CMFC20200310test1View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC20200310test1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC20200310test1Doc* CMFC20200310test1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC20200310test1Doc)));
	return (CMFC20200310test1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC20200310test1View 消息处理程序


void CMFC20200310test1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CClientDC dc(this);//构造客户区，this是指针，调用它调用某个类
	CString  s;
	s = _T("左键正在被按下");
	dc.TextOutW(200, 200, s);//输出字符串s，位置为（200，200）
	
	CView::OnLButtonDown(nFlags, point);
}


void CMFC20200310test1View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CClientDC dc(this);//构造客户区，this是指针，调用它调用某个类
	CString  t;
	t = _T("左键正在抬起");
	dc.TextOutW(300,300,t); //输出字符串s，位置为（300，300）

	CView::OnLButtonUp(nFlags, point);
}
