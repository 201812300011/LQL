
// 2020.03.16.example6View.cpp : CMy20200316example6View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "2020.03.16.example6.h"
#endif

#include "2020.03.16.example6Doc.h"
#include "2020.03.16.example6View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy20200316example6View

IMPLEMENT_DYNCREATE(CMy20200316example6View, CView)

BEGIN_MESSAGE_MAP(CMy20200316example6View, CView)
	ON_WM_CHAR()
END_MESSAGE_MAP()

// CMy20200316example6View 构造/析构

CMy20200316example6View::CMy20200316example6View()
{
	// TODO: 在此处添加构造代码

}

CMy20200316example6View::~CMy20200316example6View()
{
}

BOOL CMy20200316example6View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy20200316example6View 绘制

void CMy20200316example6View::OnDraw(CDC* pDC)
{
	CMy20200316example6Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	pDC->Ellipse(pDoc->m_crlRect);
}


// CMy20200316example6View 诊断

#ifdef _DEBUG
void CMy20200316example6View::AssertValid() const
{
	CView::AssertValid();
}

void CMy20200316example6View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy20200316example6Doc* CMy20200316example6View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy20200316example6Doc)));
	return (CMy20200316example6Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy20200316example6View 消息处理程序


void CMy20200316example6View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{    /*OnChar:字符响应函数*/
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMy20200316example6Doc* pDoc = GetDocument();
	CRect clientRec;//定义客户区变量为一个矩形框
	GetClientRect(&clientRec);//获取客户区消息：客户区尺寸
	switch (nChar)//nChar：不区分大小写
	{
	case 'L'://键盘键"->"
		if (pDoc->m_crlRect.left > 0)
		{
			pDoc->m_crlRect.left -= 5;//向左移动5
			pDoc->m_crlRect.right -= 5;
		}
		break;
	case 'R'://键盘键"<-"
		if (pDoc->m_crlRect.right <= (clientRec.right - clientRec.left))//判断矩形是否在客户区内
		{
			pDoc->m_crlRect.left += 5;
			pDoc->m_crlRect.right += 5;
		}
		break;
	case 'D'://键盘键"向下"
		if (pDoc->m_crlRect.top> 0)
		{
			pDoc->m_crlRect.top += 5;//向下移动5
			pDoc->m_crlRect.bottom += 5;
		}
		break;
	case 'U'://键盘键"向上"
		if (pDoc->m_crlRect.bottom <= (clientRec.bottom - clientRec.top))//判断矩形是否在客户区内
		{
			pDoc->m_crlRect.top -= 5;
			pDoc->m_crlRect.bottom -= 5;
		}
		break;
	}
	InvalidateRect(NULL, TRUE);//强制重绘，ondraw函数说明如何重绘（注意是InvalidateRect而不是Invalidate）
	CView::OnChar(nChar, nRepCnt, nFlags);
}
