
// ��5��ʵ��2View.cpp : C��5��ʵ��2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��5��ʵ��2.h"
#endif

#include "��5��ʵ��2Doc.h"
#include "��5��ʵ��2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��5��ʵ��2View

IMPLEMENT_DYNCREATE(C��5��ʵ��2View, CView)

BEGIN_MESSAGE_MAP(C��5��ʵ��2View, CView)
	ON_COMMAND(ID_CHANGECIRCLE, &C��5��ʵ��2View::OnChangecircle)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// C��5��ʵ��2View ����/����

C��5��ʵ��2View::C��5��ʵ��2View()
{
	// TODO: �ڴ˴���ӹ������
	set = true;
	flag = 0;
}

C��5��ʵ��2View::~C��5��ʵ��2View()
{
}

BOOL C��5��ʵ��2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��5��ʵ��2View ����

void C��5��ʵ��2View::OnDraw(CDC* pDC)
{
	C��5��ʵ��2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	if (flag == 1) {
		if (set)
		{
			GetClientRect(&clientrect);//��ȡ�ͻ����ߴ�
			center = clientrect.CenterPoint();//�ͻ�������
			r.SetRect((center.x - 100), (center.y - 100), (center.x + 100), (center.y + 100));//���»�����
			SetTimer(1, 50, NULL);//��ʱ��
			set = false;
		}
		CPen pen(PS_SOLID, 5, RGB(rand() % 255, rand() % 255, rand() % 255));
		CPen *p;
		p = pDC->SelectObject(&pen);
		pDC->Ellipse(r);
	}
}


// C��5��ʵ��2View ���

#ifdef _DEBUG
void C��5��ʵ��2View::AssertValid() const
{
	CView::AssertValid();
}

void C��5��ʵ��2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��5��ʵ��2Doc* C��5��ʵ��2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��5��ʵ��2Doc)));
	return (C��5��ʵ��2Doc*)m_pDocument;
}
#endif //_DEBUG


// C��5��ʵ��2View ��Ϣ�������


void C��5��ʵ��2View::OnChangecircle()
{
	// TODO: �ڴ���������������
	// ����ǲ˵��н����С԰�ĳ���
	flag = 1;
	Invalidate();
	set = true;
}


void C��5��ʵ��2View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	int i = nIDEvent;
	CClientDC dc(this);
	if (r.bottom <= clientrect.bottom&&r.left >= 0)
	{
		r.top -= 10;
		r.left -= 10;
		r.bottom += 10;
		r.right += 10;
		CPen pen(PS_SOLID, 5, RGB(rand() % 255, rand() % 255, rand() % 255));
		CPen *p;
		p = dc.SelectObject(&pen);
		dc.Ellipse(r);
		Invalidate();
	}
	else
	{
		flag = 0;
		KillTimer(i);
		r.SetRect((center.x - 100), (center.y - 100), (center.x + 100), (center.y + 100));
	}
	CView::OnTimer(nIDEvent);
}
