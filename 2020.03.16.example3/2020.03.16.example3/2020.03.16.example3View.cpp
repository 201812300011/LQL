
// 2020.03.16.example3View.cpp : CMy20200316example3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "2020.03.16.example3.h"
#endif

#include "2020.03.16.example3Doc.h"
#include "2020.03.16.example3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy20200316example3View

IMPLEMENT_DYNCREATE(CMy20200316example3View, CView)

BEGIN_MESSAGE_MAP(CMy20200316example3View, CView)
END_MESSAGE_MAP()

// CMy20200316example3View ����/����

CMy20200316example3View::CMy20200316example3View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy20200316example3View::~CMy20200316example3View()
{
}

BOOL CMy20200316example3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy20200316example3View ����

void CMy20200316example3View::OnDraw(CDC* /*pDC*/)
{
	CMy20200316example3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy20200316example3View ���

#ifdef _DEBUG
void CMy20200316example3View::AssertValid() const
{
	CView::AssertValid();
}

void CMy20200316example3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy20200316example3Doc* CMy20200316example3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy20200316example3Doc)));
	return (CMy20200316example3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy20200316example3View ��Ϣ�������
