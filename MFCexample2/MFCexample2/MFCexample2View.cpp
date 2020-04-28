
// MFCexample2View.cpp : CMFCexample2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCexample2.h"
#endif

#include "MFCexample2Doc.h"
#include "MFCexample2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCexample2View

IMPLEMENT_DYNCREATE(CMFCexample2View, CView)

BEGIN_MESSAGE_MAP(CMFCexample2View, CView)
END_MESSAGE_MAP()

// CMFCexample2View ����/����

CMFCexample2View::CMFCexample2View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCexample2View::~CMFCexample2View()
{
}

BOOL CMFCexample2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCexample2View ����

void CMFCexample2View::OnDraw(CDC* pDC)
{
	CMFCexample2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	int red = 0, green = 0, blue = 0;
	int width = 2;
	int row = 20;
	for (int s = 0; s < 8; s++)
	{
		int color = RGB(red,green,blue);
		CPen newPen(PS_SOLID,width,color);
		CPen* oldPen = pDC->SelectObject(&newPen);
		pDC->MoveTo(20,row);
		pDC->LineTo(300,row);
		pDC->SelectObject(oldPen);
		red += 20;
		green += 16;
		blue += 8;
		width += 2;
		row += 30;
	}
}


// CMFCexample2View ���

#ifdef _DEBUG
void CMFCexample2View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCexample2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCexample2Doc* CMFCexample2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCexample2Doc)));
	return (CMFCexample2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCexample2View ��Ϣ�������
