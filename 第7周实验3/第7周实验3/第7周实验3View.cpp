
// ��7��ʵ��3View.cpp : C��7��ʵ��3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��7��ʵ��3.h"
#endif

#include "��7��ʵ��3Doc.h"
#include "��7��ʵ��3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��7��ʵ��3View

IMPLEMENT_DYNCREATE(C��7��ʵ��3View, CView)

BEGIN_MESSAGE_MAP(C��7��ʵ��3View, CView)
	ON_WM_TIMER()
	ON_WM_LBUTTONDBLCLK()
	ON_WM_LBUTTONDOWN()
	ON_COMMAND(ID_DRAWCIRCLE, &C��7��ʵ��3View::OnDrawcircle)
END_MESSAGE_MAP()

// C��7��ʵ��3View ����/����

C��7��ʵ��3View::C��7��ʵ��3View()
{
	// TODO: �ڴ˴���ӹ������
	set = true;
	flag = 0;
}

C��7��ʵ��3View::~C��7��ʵ��3View()
{
}

BOOL C��7��ʵ��3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��7��ʵ��3View ����

void C��7��ʵ��3View::OnDraw(CDC* pDC)
{
	C��7��ʵ��3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	if (set)
	{
		SetTimer(1,rand()%400+100,NULL);
		set = false;
		
	}
	pDC->Ellipse(rc);
}


// C��7��ʵ��3View ���

#ifdef _DEBUG
void C��7��ʵ��3View::AssertValid() const
{
	CView::AssertValid();
}

void C��7��ʵ��3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��7��ʵ��3Doc* C��7��ʵ��3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��7��ʵ��3Doc)));
	return (C��7��ʵ��3Doc*)m_pDocument;
}
#endif //_DEBUG


// C��7��ʵ��3View ��Ϣ�������


void C��7��ʵ��3View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	int i = nIDEvent;
	if (n == 1)
	{
		if (rc.left < rect.left)
		{
			flag = 0;
		}
		if (rc.right > rect.right)
		{
			flag = 1;
		}
		if (flag == 1)
		{
			rc.left -= 20;
			rc.right -= 20;
		}
		if (flag == 0)
		{
			rc.left += 20;
			rc.right += 20;
		}
	}
	Invalidate();
	CView::OnTimer(nIDEvent);
}


void C��7��ʵ��3View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	n = 1;
	Invalidate();
	CView::OnLButtonDblClk(nFlags, point);
}


void C��7��ʵ��3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	n = 0;
	CView::OnLButtonDown(nFlags, point);
}


void C��7��ʵ��3View::OnDrawcircle()
{
	// TODO: �ڴ���������������
	CClientDC dc(this);
	GetClientRect(&rect);
	rc.left = (rect.left + rect.right) / 4 - 50;
	rc.top = (rect.bottom + rect.top) / 2 - 50;
	rc.right = (rect.left + rect.right) / 4 + 50;
	rc.bottom = (rect.bottom + rect.top) / 2 + 50;
}
