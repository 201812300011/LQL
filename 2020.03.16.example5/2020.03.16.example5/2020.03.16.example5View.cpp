
// 2020.03.16.example5View.cpp : CMy20200316example5View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "2020.03.16.example5.h"
#endif

#include "2020.03.16.example5Doc.h"
#include "2020.03.16.example5View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy20200316example5View

IMPLEMENT_DYNCREATE(CMy20200316example5View, CView)

BEGIN_MESSAGE_MAP(CMy20200316example5View, CView)
	ON_WM_KEYDOWN()
END_MESSAGE_MAP()

// CMy20200316example5View 构造/析构

CMy20200316example5View::CMy20200316example5View()
{
	// TODO: 在此处添加构造代码

}

CMy20200316example5View::~CMy20200316example5View()
{
}

BOOL CMy20200316example5View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy20200316example5View 绘制

void CMy20200316example5View::OnDraw(CDC* pDC)
{
	CMy20200316example5Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	pDC->Ellipse(pDoc->m_crlRect);//重绘，将矩形转换为椭圆
}


// CMy20200316example5View 诊断

#ifdef _DEBUG
void CMy20200316example5View::AssertValid() const
{
	CView::AssertValid();
}

void CMy20200316example5View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy20200316example5Doc* CMy20200316example5View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy20200316example5Doc)));
	return (CMy20200316example5Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy20200316example5View 消息处理程序


void CMy20200316example5View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CMy20200316example5Doc* pDoc = GetDocument();
	CRect clientRec;//定义客户区变量为一个矩形框
	GetClientRect (&clientRec);//获取客户区消息：长度
	switch (nChar)//nChar：不区分大小写
	{
	 case VK_LEFT://键盘键"->"
		 if (pDoc->m_crlRect.left > 0)
		 {
			 pDoc->m_crlRect.left -= 5;//向左移动5
			 pDoc->m_crlRect.right -= 5;
		 }
		 break;
	 case VK_RIGHT://键盘键"<-"
		 if (pDoc->m_crlRect.right <= (clientRec.right - clientRec.left))//判断矩形是否在客户区内
		 {
			 pDoc->m_crlRect.left += 5;
			 pDoc->m_crlRect.right += 5;
		 }
		 break;
	 case VK_DOWN://键盘键"向下"
		 if (pDoc->m_crlRect.top> 0)
		 {
			 pDoc->m_crlRect.top += 5;//向下移动5
			 pDoc->m_crlRect.bottom += 5;
		 }
		 break;
	 case VK_UP://键盘键"向上"
		 if (pDoc->m_crlRect.bottom <= (clientRec.bottom - clientRec.top))//判断矩形是否在客户区内
		 {
			 pDoc->m_crlRect.top -= 5;
			 pDoc->m_crlRect.bottom -= 5;
		 }
		 break;
	}
	InvalidateRect(NULL, TRUE);//强制重绘，ondraw函数说明如何重绘（注意是InvalidateRect而不是Invalidate）

	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}
