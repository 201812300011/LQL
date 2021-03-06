
// 第6周课堂练习1View.cpp : C第6周课堂练习1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第6周课堂练习1.h"
#endif

#include "第6周课堂练习1Doc.h"
#include "第6周课堂练习1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第6周课堂练习1View

IMPLEMENT_DYNCREATE(C第6周课堂练习1View, CView)

BEGIN_MESSAGE_MAP(C第6周课堂练习1View, CView)
	ON_COMMAND(ID_FILE_OPEN, &C第6周课堂练习1View::OnFileOpen)
END_MESSAGE_MAP()

// C第6周课堂练习1View 构造/析构

C第6周课堂练习1View::C第6周课堂练习1View()
{
	// TODO: 在此处添加构造代码

}

C第6周课堂练习1View::~C第6周课堂练习1View()
{
}

BOOL C第6周课堂练习1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C第6周课堂练习1View 绘制

void C第6周课堂练习1View::OnDraw(CDC* pDC)
{
	C第6周课堂练习1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CRect rect;
	GetClientRect(&rect);
	if (r == IDOK)
	{
		CImage img;
		img.Load(filename);
		x = (rect.Width() - img.GetWidth()) / 2;
		y = (rect.Height() - img.GetHeight()) / 2;
		img.Draw(pDC->m_hDC, x, y, img.GetWidth(), img.GetHeight());
	}
}


// C第6周课堂练习1View 诊断

#ifdef _DEBUG
void C第6周课堂练习1View::AssertValid() const
{
	CView::AssertValid();
}

void C第6周课堂练习1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C第6周课堂练习1Doc* C第6周课堂练习1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第6周课堂练习1Doc)));
	return (C第6周课堂练习1Doc*)m_pDocument;
}
#endif //_DEBUG


// C第6周课堂练习1View 消息处理程序


void C第6周课堂练习1View::OnFileOpen()
{
	// TODO: 在此添加命令处理程序代码
	CFileDialog cfd(true);//true:打开对话框
	r = cfd.DoModal();//取得文件名
	if (r == IDOK)
	{
		filename = cfd.GetPathName();//将路径赋值给字符串变量
		GetDC()->TextOutW(100,100,filename);
	}
	Invalidate();
}
