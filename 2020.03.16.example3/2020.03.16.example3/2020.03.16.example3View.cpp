
// 2020.03.16.example3View.cpp : CMy20200316example3View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "2020.03.16.example3.h"
#endif

#include "2020.03.16.example3Doc.h"
#include "2020.03.16.example3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy20200316example3View

IMPLEMENT_DYNCREATE(CMy20200316example3View, CView)

BEGIN_MESSAGE_MAP(CMy20200316example3View, CView)
END_MESSAGE_MAP()

// CMy20200316example3View 构造/析构

CMy20200316example3View::CMy20200316example3View()
{
	// TODO: 在此处添加构造代码

}

CMy20200316example3View::~CMy20200316example3View()
{
}

BOOL CMy20200316example3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy20200316example3View 绘制

void CMy20200316example3View::OnDraw(CDC* /*pDC*/)
{
	CMy20200316example3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMy20200316example3View 诊断

#ifdef _DEBUG
void CMy20200316example3View::AssertValid() const
{
	CView::AssertValid();
}

void CMy20200316example3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy20200316example3Doc* CMy20200316example3View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy20200316example3Doc)));
	return (CMy20200316example3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy20200316example3View 消息处理程序
