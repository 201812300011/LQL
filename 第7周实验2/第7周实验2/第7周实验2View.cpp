
// 第7周实验2View.cpp : C第7周实验2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第7周实验2.h"
#endif

#include "第7周实验2Doc.h"
#include "第7周实验2View.h"

#include "MyDialog.h"//添加头文件

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第7周实验2View

IMPLEMENT_DYNCREATE(C第7周实验2View, CView)

BEGIN_MESSAGE_MAP(C第7周实验2View, CView)
	ON_COMMAND(ID_ADD, &C第7周实验2View::OnAdd)
END_MESSAGE_MAP()

// C第7周实验2View 构造/析构

C第7周实验2View::C第7周实验2View()
{
	// TODO: 在此处添加构造代码

}

C第7周实验2View::~C第7周实验2View()
{
}

BOOL C第7周实验2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C第7周实验2View 绘制

void C第7周实验2View::OnDraw(CDC* /*pDC*/)
{
	C第7周实验2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// C第7周实验2View 诊断

#ifdef _DEBUG
void C第7周实验2View::AssertValid() const
{
	CView::AssertValid();
}

void C第7周实验2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C第7周实验2Doc* C第7周实验2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第7周实验2Doc)));
	return (C第7周实验2Doc*)m_pDocument;
}
#endif //_DEBUG


// C第7周实验2View 消息处理程序


void C第7周实验2View::OnAdd()
{
	// TODO: 在此添加命令处理程序代码
	CClientDC dc(this);
	MyDialog dlg;
	int t = dlg.DoModal();
	if (t == IDOK)
	{
		CString s;
		dlg.z = dlg.x + dlg.y;
		s.Format(_T("%d+%d=%d"),dlg.x,dlg.y,dlg.z);
		dc.TextOutW(100,100,s);
	}
}
