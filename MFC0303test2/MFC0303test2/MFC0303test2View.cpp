
// MFC0303test2View.cpp : CMFC0303test2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC0303test2.h"
#endif

#include "MFC0303test2Doc.h"
#include "MFC0303test2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC0303test2View

IMPLEMENT_DYNCREATE(CMFC0303test2View, CView)

BEGIN_MESSAGE_MAP(CMFC0303test2View, CView)
END_MESSAGE_MAP()

// CMFC0303test2View ����/����

CMFC0303test2View::CMFC0303test2View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFC0303test2View::~CMFC0303test2View()
{
}

BOOL CMFC0303test2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC0303test2View ����

void CMFC0303test2View::OnDraw(CDC* pDC)
{
	CMFC0303test2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CString a;
	a.Format(_T("A=%d"),pDoc->A);
	pDC->TextOutW(300,300, pDoc->S);
	pDC->TextOutW(400, 400,a);
}


// CMFC0303test2View ���

#ifdef _DEBUG
void CMFC0303test2View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC0303test2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC0303test2Doc* CMFC0303test2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC0303test2Doc)));
	return (CMFC0303test2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC0303test2View ��Ϣ�������
