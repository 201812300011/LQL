
// MFCexample3View.cpp : CMFCexample3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCexample3.h"
#endif

#include "MFCexample3Doc.h"
#include "MFCexample3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCexample3View

IMPLEMENT_DYNCREATE(CMFCexample3View, CView)

BEGIN_MESSAGE_MAP(CMFCexample3View, CView)
END_MESSAGE_MAP()

// CMFCexample3View ����/����

CMFCexample3View::CMFCexample3View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCexample3View::~CMFCexample3View()
{
}

BOOL CMFCexample3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCexample3View ����

void CMFCexample3View::OnDraw(CDC* pDC)
{
	CMFCexample3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CRect rect(30,30,300,300);
	pDC->Rectangle(&rect);
}


// CMFCexample3View ���

#ifdef _DEBUG
void CMFCexample3View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexample3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexample3Doc* CMFCexample3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexample3Doc)));
	return (CMFCexample3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCexample3View ��Ϣ�������
