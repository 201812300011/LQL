
// 2020.03.16.example7View.cpp : CMy20200316example7View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "2020.03.16.example7.h"
#endif

#include "2020.03.16.example7Doc.h"
#include "2020.03.16.example7View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy20200316example7View

IMPLEMENT_DYNCREATE(CMy20200316example7View, CView)

BEGIN_MESSAGE_MAP(CMy20200316example7View, CView)
	ON_WM_SETFOCUS()
	ON_WM_KILLFOCUS()
END_MESSAGE_MAP()

// CMy20200316example7View ����/����

CMy20200316example7View::CMy20200316example7View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy20200316example7View::~CMy20200316example7View()
{
}

BOOL CMy20200316example7View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy20200316example7View ����

void CMy20200316example7View::OnDraw(CDC* pDC)
{
	CMy20200316example7Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->TextOutW(200,200,pDoc->m_pStr);
}


// CMy20200316example7View ���

#ifdef _DEBUG
void CMy20200316example7View::AssertValid() const
{
	CView::AssertValid();
}

void CMy20200316example7View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy20200316example7Doc* CMy20200316example7View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy20200316example7Doc)));
	return (CMy20200316example7Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy20200316example7View ��Ϣ�������


void CMy20200316example7View::OnSetFocus(CWnd* pOldWnd)
{
	CView::OnSetFocus(pOldWnd);

	// TODO: �ڴ˴������Ϣ����������
	CMy20200316example7Doc* pDoc = GetDocument();
	pDoc->m_pStr ="��ý���";
	InvalidateRect(NULL,TRUE);

}


void CMy20200316example7View::OnKillFocus(CWnd* pNewWnd)
{
	CView::OnKillFocus(pNewWnd);

	// TODO: �ڴ˴������Ϣ����������
	CMy20200316example7Doc* pDoc = GetDocument();
	pDoc->m_pStr = "ʧȥ����";
	InvalidateRect(NULL, TRUE);
}
