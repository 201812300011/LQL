
// ��6��ʵ��1View.cpp : C��6��ʵ��1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��6��ʵ��1.h"
#endif

#include "��6��ʵ��1Doc.h"
#include "��6��ʵ��1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��6��ʵ��1View

IMPLEMENT_DYNCREATE(C��6��ʵ��1View, CView)

BEGIN_MESSAGE_MAP(C��6��ʵ��1View, CView)
	ON_WM_CHAR()
END_MESSAGE_MAP()

// C��6��ʵ��1View ����/����

C��6��ʵ��1View::C��6��ʵ��1View()
{
	// TODO: �ڴ˴���ӹ������
	s = "";
}

C��6��ʵ��1View::~C��6��ʵ��1View()
{
}

BOOL C��6��ʵ��1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��6��ʵ��1View ����

void C��6��ʵ��1View::OnDraw(CDC* pDC)
{
	C��6��ʵ��1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->Rectangle(pDoc->rect);
}


// C��6��ʵ��1View ���

#ifdef _DEBUG
void C��6��ʵ��1View::AssertValid() const
{
	CView::AssertValid();
}

void C��6��ʵ��1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��6��ʵ��1Doc* C��6��ʵ��1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��6��ʵ��1Doc)));
	return (C��6��ʵ��1Doc*)m_pDocument;
}
#endif //_DEBUG


// C��6��ʵ��1View ��Ϣ�������


void C��6��ʵ��1View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	C��6��ʵ��1Doc* pDoc = GetDocument();
	CClientDC dc(this);
	s = s + (char) nChar;
	dc.TextOutW(pDoc->rect.left+10, pDoc->rect.right + 10, s);
	CView::OnChar(nChar, nRepCnt, nFlags);
}
