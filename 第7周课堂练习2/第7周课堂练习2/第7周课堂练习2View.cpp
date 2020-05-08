
// 第7周课堂练习2View.cpp : C第7周课堂练习2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第7周课堂练习2.h"
#endif

#include "第7周课堂练习2Doc.h"
#include "第7周课堂练习2View.h"
#include "mydialog.h"//新添

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第7周课堂练习2View

IMPLEMENT_DYNCREATE(C第7周课堂练习2View, CView)

BEGIN_MESSAGE_MAP(C第7周课堂练习2View, CView)
	ON_COMMAND(ID_EXCHANGE, &C第7周课堂练习2View::OnExchange)
END_MESSAGE_MAP()

// C第7周课堂练习2View 构造/析构

C第7周课堂练习2View::C第7周课堂练习2View()
{
	// TODO: 在此处添加构造代码

}

C第7周课堂练习2View::~C第7周课堂练习2View()
{
}

BOOL C第7周课堂练习2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C第7周课堂练习2View 绘制

void C第7周课堂练习2View::OnDraw(CDC* /*pDC*/)
{
	C第7周课堂练习2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// C第7周课堂练习2View 诊断

#ifdef _DEBUG
void C第7周课堂练习2View::AssertValid() const
{
	CView::AssertValid();
}

void C第7周课堂练习2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C第7周课堂练习2Doc* C第7周课堂练习2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第7周课堂练习2Doc)));
	return (C第7周课堂练习2Doc*)m_pDocument;
}
#endif //_DEBUG


// C第7周课堂练习2View 消息处理程序


void C第7周课堂练习2View::OnExchange()
{
	// TODO: 在此添加命令处理程序代码
	CClientDC dc(this);
	mydialog dlg;
	int t = dlg.DoModal();
	if (t == IDOK)
	{
		CString s3, s4, x;
		s3 = dlg.s2;
		s4 = dlg.s1;//交换
		x.Format(_T("交换之后的第一个为%s,第二个为%s"), s3, s4);
		dc.TextOutW(200, 300, x);
	}
}
