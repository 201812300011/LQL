
// 第7周例1View.cpp : C第7周例1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第7周例1.h"
#endif

#include "第7周例1Doc.h"
#include "第7周例1View.h"

#include"MyDlg0.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第7周例1View

IMPLEMENT_DYNCREATE(C第7周例1View, CView)

BEGIN_MESSAGE_MAP(C第7周例1View, CView)
	ON_COMMAND(ID_POPOUT, &C第7周例1View::OnPopout)
END_MESSAGE_MAP()

// C第7周例1View 构造/析构

C第7周例1View::C第7周例1View()
{
	// TODO: 在此处添加构造代码

}

C第7周例1View::~C第7周例1View()
{
}

BOOL C第7周例1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C第7周例1View 绘制

void C第7周例1View::OnDraw(CDC* /*pDC*/)
{
	C第7周例1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// C第7周例1View 诊断

#ifdef _DEBUG
void C第7周例1View::AssertValid() const
{
	CView::AssertValid();
}

void C第7周例1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C第7周例1Doc* C第7周例1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第7周例1Doc)));
	return (C第7周例1Doc*)m_pDocument;
}
#endif //_DEBUG


// C第7周例1View 消息处理程序


void C第7周例1View::OnPopout()
{
	// TODO: 在此添加命令处理程序代码
	MyDlg0 dlg;
	int t = dlg.DoModal();
	if (t == IDOK)
	{
		int R, X, Y;//接受数值
		R = dlg.r;//对话框那头的数值
		X = dlg.x;
		Y = dlg.y;
		CRect re(X-R,Y-R,X+R,Y+R);
		GetDC()->Ellipse(re);
	}
}
