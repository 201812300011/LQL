
// 2020.03.17.example7View.cpp : CMy20200317example7View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "2020.03.17.example7.h"
#endif

#include "2020.03.17.example7Doc.h"
#include "2020.03.17.example7View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy20200317example7View

IMPLEMENT_DYNCREATE(CMy20200317example7View, CView)

BEGIN_MESSAGE_MAP(CMy20200317example7View, CView)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// CMy20200317example7View ����/����

CMy20200317example7View::CMy20200317example7View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy20200317example7View::~CMy20200317example7View()
{
}

BOOL CMy20200317example7View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy20200317example7View ����

void CMy20200317example7View::OnDraw(CDC* pDC)
{
	CMy20200317example7Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CArray<CRect,CRect> cr;
	if (set)
	{
		for (int i = 0; i < N; i++)
		{
			SetTimer(i, rand() % 400 + 100, NULL);//����ÿ��С�����ʱ�䲻һ��
			set = false;
		}
	}
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	for (int i = 0; i < N; i++)
	{
		pDC->Ellipse(cr[i]);
	}
}


// CMy20200317example7View ���

#ifdef _DEBUG
void CMy20200317example7View::AssertValid() const
{
	CView::AssertValid();
}

void CMy20200317example7View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy20200317example7Doc* CMy20200317example7View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy20200317example7Doc)));
	return (CMy20200317example7Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy20200317example7View ��Ϣ�������


void CMy20200317example7View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	
	CMy20200317example7Doc* pDoc = GetDocument();
	int i = nIDEvent;
	cr[i].top += 10; 
	cr[i].bottom += 10;
	Invalidate();

	CView::OnTimer(nIDEvent);
}
