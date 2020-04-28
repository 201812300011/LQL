
// MFCexample8View.cpp : CMFCexample8View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCexample8.h"
#endif

#include "MFCexample8Doc.h"
#include "MFCexample8View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCexample8View

IMPLEMENT_DYNCREATE(CMFCexample8View, CView)

BEGIN_MESSAGE_MAP(CMFCexample8View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCexample8View ����/����

CMFCexample8View::CMFCexample8View()
{
	// TODO: �ڴ˴���ӹ������
	

}

CMFCexample8View::~CMFCexample8View()
{
}

BOOL CMFCexample8View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCexample8View ����

void CMFCexample8View::OnDraw(CDC* pDC)
{
	CMFCexample8Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���

	for (int i = 0; i < pDoc->ca.GetSize(); i++)//ȡ�����С
		pDC->Rectangle(pDoc->ca.GetAt(i));//��ʾ�����Σ�GetAt(i)�൱��[]

}


// CMFCexample8View ���

#ifdef _DEBUG
void CMFCexample8View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexample8View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexample8Doc* CMFCexample8View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexample8Doc)));
	return (CMFCexample8Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCexample8View ��Ϣ�������


void CMFCexample8View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	int  r = rand() % 50 + 5;//rand���������
	CRect cr(point.x - r, point.y - r, point.x + r, point.y + r);//�����ĵ�����ϽǺ����½�����

	CMFCexample8Doc* pDoc = GetDocument();//����doc�ڵĳ�Ա
	pDoc->ca.Add(cr);//�������ľ��η���������
	this->Invalidate();//�ÿͻ������ڷǷ�״̬���ػ�

    //CClientDC dc(this);
	//����ͻ�����ͨ������dc��������������
	//dc.Rectangle(cr);//�������ڿͻ�����

	CView::OnLButtonDown(nFlags, point);
}
