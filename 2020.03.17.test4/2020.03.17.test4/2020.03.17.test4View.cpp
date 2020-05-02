
// 2020.03.17.test4View.cpp : CMy20200317test4View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "2020.03.17.test4.h"
#endif

#include "2020.03.17.test4Doc.h"
#include "2020.03.17.test4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy20200317test4View

IMPLEMENT_DYNCREATE(CMy20200317test4View, CView)

BEGIN_MESSAGE_MAP(CMy20200317test4View, CView)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// CMy20200317test4View ����/����

CMy20200317test4View::CMy20200317test4View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy20200317test4View::~CMy20200317test4View()
{
}

BOOL CMy20200317test4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy20200317test4View ����

void CMy20200317test4View::OnDraw(CDC* pDC)
{
	CMy20200317test4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->Ellipse(pDoc->cr);
	if (pDoc->set)
	{
		
		SetTimer(1, rand() % 400 + 100, NULL);
		pDoc->set = false;
	}
}


// CMy20200317test4View ���

#ifdef _DEBUG
void CMy20200317test4View::AssertValid() const
{
	CView::AssertValid();
}

void CMy20200317test4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy20200317test4Doc* CMy20200317test4View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy20200317test4Doc)));
	return (CMy20200317test4Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy20200317test4View ��Ϣ�������


void CMy20200317test4View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMy20200317test4Doc* pDoc = GetDocument();
	int i = nIDEvent;
	CClientDC dc(this);
	CRect clientRect;
	int flag;
	GetClientRect(&clientRect);
	if (pDoc->cr.top > 0 && pDoc->cr.bottom<clientRect.bottom)
	{
		pDoc->cr.top += 10;
		pDoc->cr.bottom += 10;
	}
	else
	{
		pDoc->cr.top -= 10;
		pDoc->cr.bottom -= 10;
	}
	dc.Rectangle(pDoc->cr);
	Invalidate();
	CView::OnTimer(nIDEvent);
}
