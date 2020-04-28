
// MFCexample7View.cpp : CMFCexample7View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCexample7.h"
#endif

#include "MFCexample7Doc.h"
#include "MFCexample7View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCexample7View

IMPLEMENT_DYNCREATE(CMFCexample7View, CView)

BEGIN_MESSAGE_MAP(CMFCexample7View, CView)
	ON_WM_MBUTTONDOWN()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCexample7View ����/����

CMFCexample7View::CMFCexample7View()
{
	// TODO: �ڴ˴���ӹ������
	
}

CMFCexample7View::~CMFCexample7View()
{
}

BOOL CMFCexample7View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCexample7View ����

void CMFCexample7View::OnDraw(CDC* /*pDC*/)
{
	CMFCexample7Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCexample7View ���

#ifdef _DEBUG
void CMFCexample7View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexample7View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexample7Doc* CMFCexample7View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexample7Doc)));
	return (CMFCexample7Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCexample7View ��Ϣ�������


void CMFCexample7View::OnMButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	int  r = rand() % 50 + 5;//rand���������
	CClientDC dc(this);//����ͻ�����ͨ������dc��������������
	CRect cr(point.x-r, point.y-r, point.x+r, point.y+r);//�����ĵ�����ϽǺ����½�����
	dc.Rectangle(cr);//�������ڿͻ�����

	CView::OnMButtonDown(nFlags, point);
}


void CMFCexample7View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	int  r = rand() % 50 + 5;//rand���������
	CClientDC dc(this);//����ͻ�����ͨ������dc��������������
	CRect cr(point.x - r, point.y - r, point.x + r, point.y + r);//�����ĵ�����ϽǺ����½�����
	dc.Rectangle(cr);//�������ڿͻ�����

	CView::OnLButtonDown(nFlags, point);
}
