
// MFC2020.03.10.test3View.cpp : CMFC20200310test3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC2020.03.10.test3.h"
#endif

#include "MFC2020.03.10.test3Doc.h"
#include "MFC2020.03.10.test3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC20200310test3View

IMPLEMENT_DYNCREATE(CMFC20200310test3View, CView)

BEGIN_MESSAGE_MAP(CMFC20200310test3View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CMFC20200310test3View ����/����

CMFC20200310test3View::CMFC20200310test3View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFC20200310test3View::~CMFC20200310test3View()
{
}

BOOL CMFC20200310test3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC20200310test3View ����

void CMFC20200310test3View::OnDraw(CDC* pDC)
{
	CMFC20200310test3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->Rectangle(pDoc->rect1);//Rectangle��CDC�ຯ������ʾ���Σ����������CRect���β�
	pDC->Rectangle(pDoc->rect2);
	pDC->Rectangle(pDoc->rect3);
}


// CMFC20200310test3View ���

#ifdef _DEBUG
void CMFC20200310test3View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC20200310test3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC20200310test3Doc* CMFC20200310test3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC20200310test3Doc)));
	return (CMFC20200310test3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC20200310test3View ��Ϣ�������


void CMFC20200310test3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CMFC20200310test3Doc* pDoc = GetDocument();
	CClientDC dc(this);
	CString s1;
	CString s2;
	CString s4;
	s1.Format(_T("%d"), pDoc->a);
	s2.Format(_T("%d"), pDoc->b);
	s4.Format(_T("�����Ч"));
	dc.TextOutW(55,80,s1);
	dc.TextOutW(105, 80, s2);
	dc.TextOutW(400, 390, s4);

	CView::OnLButtonDown(nFlags, point);
}


void CMFC20200310test3View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CMFC20200310test3Doc* pDoc = GetDocument();
	CClientDC dc(this);
	CString s3;
	s3.Format(_T("%d"), pDoc->a+ pDoc->b);
	dc.TextOutW(155,85, s3);

	CView::OnRButtonDown(nFlags, point);
}
