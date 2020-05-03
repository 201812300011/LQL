
// 第5周实验3View.cpp : C第5周实验3View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第5周实验3.h"
#endif

#include "第5周实验3Doc.h"
#include "第5周实验3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第5周实验3View

IMPLEMENT_DYNCREATE(C第5周实验3View, CView)

BEGIN_MESSAGE_MAP(C第5周实验3View, CView)
	ON_COMMAND(ID_SHOWNAME, &C第5周实验3View::OnShowname)
END_MESSAGE_MAP()

// C第5周实验3View 构造/析构

C第5周实验3View::C第5周实验3View()
{
	// TODO: 在此处添加构造代码

}

C第5周实验3View::~C第5周实验3View()
{
}

BOOL C第5周实验3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C第5周实验3View 绘制

void C第5周实验3View::OnDraw(CDC* /*pDC*/)
{
	C第5周实验3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// C第5周实验3View 诊断

#ifdef _DEBUG
void C第5周实验3View::AssertValid() const
{
	CView::AssertValid();
}

void C第5周实验3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C第5周实验3Doc* C第5周实验3View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第5周实验3Doc)));
	return (C第5周实验3Doc*)m_pDocument;
}
#endif //_DEBUG


// C第5周实验3View 消息处理程序


void C第5周实验3View::OnShowname()
{
	// TODO: 在此添加命令处理程序代码
	CString s;
	CClientDC dc(this);
	s.Format(_T("陆凉风"));
	dc.TextOutW(200,300,s);

}
