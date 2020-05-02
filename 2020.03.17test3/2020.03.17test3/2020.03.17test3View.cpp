
// 2020.03.17test3View.cpp : CMy20200317test3View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "2020.03.17test3.h"
#endif

#include "2020.03.17test3Doc.h"
#include "2020.03.17test3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy20200317test3View

IMPLEMENT_DYNCREATE(CMy20200317test3View, CView)

BEGIN_MESSAGE_MAP(CMy20200317test3View, CView)
	ON_WM_KEYDOWN()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy20200317test3View 构造/析构

CMy20200317test3View::CMy20200317test3View()
{
	// TODO: 在此处添加构造代码

}

CMy20200317test3View::~CMy20200317test3View()
{
}

BOOL CMy20200317test3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy20200317test3View 绘制

void CMy20200317test3View::OnDraw(CDC* pDC)
{
	CMy20200317test3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	pDC->Rectangle(pDoc->m_crlcrect);


}


// CMy20200317test3View 诊断

#ifdef _DEBUG
void CMy20200317test3View::AssertValid() const
{
	CView::AssertValid();
}

void CMy20200317test3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy20200317test3Doc* CMy20200317test3View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy20200317test3Doc)));
	return (CMy20200317test3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy20200317test3View 消息处理程序


void CMy20200317test3View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CMy20200317test3Doc* pDoc = GetDocument();
	CRect clientRec;
	GetClientRect(&clientRec);
	switch (nChar)
	{
	case VK_LEFT:
		if (pDoc->m_crlcrect.left > 0)
		{
			pDoc->m_crlcrect.left -= 5;
			pDoc->m_crlcrect.right -= 5;
		}
		break;
	case VK_RIGHT:
		if (pDoc->m_crlcrect.left<=(clientRec.right-clientRec.left))
		{
			pDoc->m_crlcrect.left += 5;
			pDoc->m_crlcrect.right += 5;
		}
		break;
	case VK_UP:
		if (pDoc->m_crlcrect.top > 0)
		{
			pDoc->m_crlcrect.top -= 5;
			pDoc->m_crlcrect.bottom -= 5;
		}
		break;
	case VK_DOWN:
		if (pDoc->m_crlcrect.top <= (clientRec.bottom - clientRec.top))
		{
			pDoc->m_crlcrect.top += 5;
			pDoc->m_crlcrect.bottom += 5;
		}
		break;
	case VK_HOME:
		if (pDoc->m_crlcrect.left > 0 && pDoc->m_crlcrect.top > 0)
		{
			pDoc->m_crlcrect.left -= 5;
			pDoc->m_crlcrect.top -= 5;
		}
		break;
	case VK_END:
		if (pDoc->m_crlcrect.right <= (clientRec.right-clientRec.left) && pDoc->m_crlcrect.top<=(clientRec.bottom - clientRec.top))
		{
			pDoc->m_crlcrect.right += 5;
			pDoc->m_crlcrect.bottom += 5;
		}
		break;
	}
	InvalidateRect(NULL, TRUE);

	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}


void CMy20200317test3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值

	CMy20200317test3Doc* pDoc = GetDocument();
	CClientDC dc(this);
	pDoc->m_crlcrect.left = 30;	pDoc->m_crlcrect.top = 80;
	pDoc->m_crlcrect.right = 30; pDoc->m_crlcrect.bottom = 80;
	dc.Rectangle(pDoc->m_crlcrect);
	Invalidate();
	CView::OnLButtonDown(nFlags, point);
}
