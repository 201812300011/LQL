
// MFCexample6View.cpp : CMFCexample6View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCexample6.h"
#endif

#include "MFCexample6Doc.h"
#include "MFCexample6View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCexample6View

IMPLEMENT_DYNCREATE(CMFCexample6View, CView)

BEGIN_MESSAGE_MAP(CMFCexample6View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCexample6View ����/����

CMFCexample6View::CMFCexample6View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCexample6View::~CMFCexample6View()
{
}

BOOL CMFCexample6View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCexample6View ����

void CMFCexample6View::OnDraw(CDC* /*pDC*/)
{
	CMFCexample6Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCexample6View ���

#ifdef _DEBUG
void CMFCexample6View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexample6View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexample6Doc* CMFCexample6View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexample6Doc)));
	return (CMFCexample6Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCexample6View ��Ϣ�������


void CMFCexample6View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CRect cr;//����һ�����������
	this->GetClientRect(&cr);//thisΪָ�룬&crΪ����
	CClientDC dc(this);//����ͻ�����ͨ����������������Բ��
	dc.Ellipse(cr);//����Բ���ھ��οͻ�������

	CView::OnLButtonDown(nFlags, point);
}
