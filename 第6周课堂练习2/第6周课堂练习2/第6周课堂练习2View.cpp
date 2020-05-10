
// 第6周课堂练习2View.cpp : C第6周课堂练习2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第6周课堂练习2.h"
#endif

#include "第6周课堂练习2Doc.h"
#include "第6周课堂练习2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第6周课堂练习2View

IMPLEMENT_DYNCREATE(C第6周课堂练习2View, CView)

BEGIN_MESSAGE_MAP(C第6周课堂练习2View, CView)
	ON_COMMAND(ID_FILE_OPEN, &C第6周课堂练习2View::OnFileOpen)
END_MESSAGE_MAP()

// C第6周课堂练习2View 构造/析构

C第6周课堂练习2View::C第6周课堂练习2View()
{
	// TODO: 在此处添加构造代码

}

C第6周课堂练习2View::~C第6周课堂练习2View()
{
}

BOOL C第6周课堂练习2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C第6周课堂练习2View 绘制

void C第6周课堂练习2View::OnDraw(CDC* pDC)
{
	C第6周课堂练习2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CClientDC dc(this);
	CRect rect;
	GetClientRect(&rect);
	if (r == IDOK)
	{
		CImage img;
		img.Load(filename);
		x = (rect.Width() - img.GetWidth()) / 2;
		y = (rect.Height() - img.GetHeight()) / 2;
		img.Draw(dc.m_hDC, x, y, img.GetWidth(), img.GetHeight());
	}
}


// C第6周课堂练习2View 诊断

#ifdef _DEBUG
void C第6周课堂练习2View::AssertValid() const
{
	CView::AssertValid();
}

void C第6周课堂练习2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C第6周课堂练习2Doc* C第6周课堂练习2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第6周课堂练习2Doc)));
	return (C第6周课堂练习2Doc*)m_pDocument;
}
#endif //_DEBUG


// C第6周课堂练习2View 消息处理程序


void C第6周课堂练习2View::OnFileOpen()
{
	// TODO: 在此添加命令处理程序代码
	CFileDialog cfd(true);
	r = cfd.DoModal();
	filename = cfd.GetPathName();
	GetDC()->TextOutW(0, 100, filename);
	Invalidate();
}
