
// MFCexample1View.cpp : CMFCexample1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCexample1.h"
#endif

#include "MFCexample1Doc.h"
#include "MFCexample1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCexample1View

IMPLEMENT_DYNCREATE(CMFCexample1View, CView)

BEGIN_MESSAGE_MAP(CMFCexample1View, CView)
END_MESSAGE_MAP()

// CMFCexample1View ����/����

CMFCexample1View::CMFCexample1View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCexample1View::~CMFCexample1View()
{
}

BOOL CMFCexample1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCexample1View ����

void CMFCexample1View::OnDraw(CDC* pDC)
{
	CMFCexample1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	int b = pDoc->a;
	CString s;
	s.Format(_T("%d"), b);
	pDC->TextOutW(100,200,s);

}


// CMFCexample1View ���

#ifdef _DEBUG
void CMFCexample1View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexample1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexample1Doc* CMFCexample1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexample1Doc)));
	return (CMFCexample1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCexample1View ��Ϣ�������
