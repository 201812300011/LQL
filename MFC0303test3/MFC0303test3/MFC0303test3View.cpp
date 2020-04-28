
// MFC0303test3View.cpp : CMFC0303test3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC0303test3.h"
#endif

#include "MFC0303test3Doc.h"
#include "MFC0303test3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC0303test3View

IMPLEMENT_DYNCREATE(CMFC0303test3View, CView)

BEGIN_MESSAGE_MAP(CMFC0303test3View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CMFC0303test3View ����/����

CMFC0303test3View::CMFC0303test3View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFC0303test3View::~CMFC0303test3View()
{
}

BOOL CMFC0303test3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC0303test3View ����

void CMFC0303test3View::OnDraw(CDC* /*pDC*/)
{
	CMFC0303test3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC0303test3View ���

#ifdef _DEBUG
void CMFC0303test3View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC0303test3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC0303test3Doc* CMFC0303test3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC0303test3Doc)));
	return (CMFC0303test3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC0303test3View ��Ϣ�������


void CMFC0303test3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CView::OnLButtonDown(nFlags, point);
	CMFC0303test3Doc*pDoc = GetDocument();
	pDoc->count++;
}


void CMFC0303test3View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFC0303test3Doc*pDoc = GetDocument();
	CClientDC dc(this);
	CString S;
	S.Format(_T("count=%d"),pDoc->count);
	dc.TextOutW(300,300,S);

	CView::OnRButtonDown(nFlags, point);
}
