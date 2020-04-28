
// MFC0303test1View.cpp : CMFC0303test1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC0303test1.h"
#endif

#include "MFC0303test1Doc.h"
#include "MFC0303test1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC0303test1View

IMPLEMENT_DYNCREATE(CMFC0303test1View, CView)

BEGIN_MESSAGE_MAP(CMFC0303test1View, CView)
END_MESSAGE_MAP()

// CMFC0303test1View 构造/析构

CMFC0303test1View::CMFC0303test1View()
{
	// TODO: 在此处添加构造代码

}

CMFC0303test1View::~CMFC0303test1View()
{
}

BOOL CMFC0303test1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC0303test1View 绘制

void CMFC0303test1View::OnDraw(CDC* pDC)
{
	CMFC0303test1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CString S;
	S = _T("我是***");//定义字符串S并赋初值
	int A = 100;
	CString a;
	a.Format(_T("A=%d"),A);//将int转化为Unicode字符串
	pDC->TextOutW(300,300,a);//在客户端输出a
	pDC->TextOutW(400, 400,S);
}


// CMFC0303test1View 诊断

#ifdef _DEBUG
void CMFC0303test1View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC0303test1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC0303test1Doc* CMFC0303test1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC0303test1Doc)));
	return (CMFC0303test1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC0303test1View 消息处理程序
