
// ��5����1View.cpp : C��5����1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��5����1.h"
#endif

#include "��5����1Doc.h"
#include "��5����1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��5����1View

IMPLEMENT_DYNCREATE(C��5����1View, CView)

BEGIN_MESSAGE_MAP(C��5����1View, CView)
	ON_COMMAND(ID_SHOWNUMBER, &C��5����1View::OnShownumber)
END_MESSAGE_MAP()

// C��5����1View ����/����

C��5����1View::C��5����1View()
{
	// TODO: �ڴ˴���ӹ������

}

C��5����1View::~C��5����1View()
{
}

BOOL C��5����1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��5����1View ����

void C��5����1View::OnDraw(CDC* /*pDC*/)
{
	C��5����1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C��5����1View ���

#ifdef _DEBUG
void C��5����1View::AssertValid() const
{
	CView::AssertValid();
}

void C��5����1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��5����1Doc* C��5����1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��5����1Doc)));
	return (C��5����1Doc*)m_pDocument;
}
#endif //_DEBUG


// C��5����1View ��Ϣ�������


void C��5����1View::OnShownumber()
{
	// TODO: �ڴ���������������
	CString s;
	CClientDC dc(this);
	s.Format(_T("201812300011"));
	dc.TextOutW(200,300,s);
}
