
// ��8����2View.cpp : C��8����2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��8����2.h"
#endif

#include "��8����2Doc.h"
#include "��8����2View.h"
#include "MyDialog.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��8����2View

IMPLEMENT_DYNCREATE(C��8����2View, CView)

BEGIN_MESSAGE_MAP(C��8����2View, CView)
	ON_WM_RBUTTONDBLCLK()
END_MESSAGE_MAP()

// C��8����2View ����/����

C��8����2View::C��8����2View()
{
	// TODO: �ڴ˴���ӹ������

}

C��8����2View::~C��8����2View()
{
}

BOOL C��8����2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��8����2View ����

void C��8����2View::OnDraw(CDC* /*pDC*/)
{
	C��8����2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C��8����2View ���

#ifdef _DEBUG
void C��8����2View::AssertValid() const
{
	CView::AssertValid();
}

void C��8����2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��8����2Doc* C��8����2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��8����2Doc)));
	return (C��8����2Doc*)m_pDocument;
}
#endif //_DEBUG


// C��8����2View ��Ϣ�������


void C��8����2View::OnRButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	MyDialog md;
	int r=md.DoModal();
	if (r == IDOK)
	{
		CString s1 = md.s;//��s��ֵ���ؿͻ���
		GetDC()->TextOutW(200,100,s1);//�൱��CClientDC dc(this); dc.TextOutW(200,100,s1);
	}
	CView::OnRButtonDblClk(nFlags, point);
}
