
// ��6��ʵ��3View.cpp : C��6��ʵ��3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��6��ʵ��3.h"
#endif

#include "��6��ʵ��3Doc.h"
#include "��6��ʵ��3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��6��ʵ��3View

IMPLEMENT_DYNCREATE(C��6��ʵ��3View, CView)

BEGIN_MESSAGE_MAP(C��6��ʵ��3View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_CHAR()
END_MESSAGE_MAP()

// C��6��ʵ��3View ����/����

C��6��ʵ��3View::C��6��ʵ��3View()
{
	// TODO: �ڴ˴���ӹ������
	s = "";
	ss = "";
	cpoint.x = 605; cpoint.y = 203;
	x = 605;
	flag = 0; h = 0;
	cr.left = 600; cr.top = 200;
	cr.right = 800; cr.bottom = 225;
}

C��6��ʵ��3View::~C��6��ʵ��3View()
{
}

BOOL C��6��ʵ��3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��6��ʵ��3View ����

void C��6��ʵ��3View::OnDraw(CDC* pDC)
{
	C��6��ʵ��3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->Rectangle(cr);
	if (flag)
	{
		for (int i = 0; i < flag; i++)
			pDC->TextOutW(605, 203 + (i*h), m[i]);
	}
}


// C��6��ʵ��3View ���

#ifdef _DEBUG
void C��6��ʵ��3View::AssertValid() const
{
	CView::AssertValid();
}

void C��6��ʵ��3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��6��ʵ��3Doc* C��6��ʵ��3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��6��ʵ��3Doc)));
	return (C��6��ʵ��3Doc*)m_pDocument;
}
#endif //_DEBUG


// C��6��ʵ��3View ��Ϣ�������


void C��6��ʵ��3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	SetCaretPos(point);
	s.Empty();
	cpoint = point;
	CView::OnLButtonDown(nFlags, point);
}


void C��6��ʵ��3View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	char c = nChar;
	TEXTMETRIC tm;
	dc.GetTextMetrics(&tm);
	h = tm.tmHeight;
	ss = s;
	s += c;
	CSize z = x += 9;
	if (x >= cr.right)
	{
		m.Add(ss);
		flag += 1;
		s.Empty();
		cpoint.y += tm.tmHeight;
		cr.bottom += tm.tmHeight;
		Invalidate();
		x = 605;
	}
	dc.TextOutW(cpoint.x,cpoint.y,s);
	CView::OnChar(nChar, nRepCnt, nFlags);
}
