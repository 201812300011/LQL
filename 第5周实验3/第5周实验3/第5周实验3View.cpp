
// ��5��ʵ��3View.cpp : C��5��ʵ��3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��5��ʵ��3.h"
#endif

#include "��5��ʵ��3Doc.h"
#include "��5��ʵ��3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��5��ʵ��3View

IMPLEMENT_DYNCREATE(C��5��ʵ��3View, CView)

BEGIN_MESSAGE_MAP(C��5��ʵ��3View, CView)
	ON_COMMAND(ID_SHOWNAME, &C��5��ʵ��3View::OnShowname)
END_MESSAGE_MAP()

// C��5��ʵ��3View ����/����

C��5��ʵ��3View::C��5��ʵ��3View()
{
	// TODO: �ڴ˴���ӹ������

}

C��5��ʵ��3View::~C��5��ʵ��3View()
{
}

BOOL C��5��ʵ��3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��5��ʵ��3View ����

void C��5��ʵ��3View::OnDraw(CDC* /*pDC*/)
{
	C��5��ʵ��3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C��5��ʵ��3View ���

#ifdef _DEBUG
void C��5��ʵ��3View::AssertValid() const
{
	CView::AssertValid();
}

void C��5��ʵ��3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��5��ʵ��3Doc* C��5��ʵ��3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��5��ʵ��3Doc)));
	return (C��5��ʵ��3Doc*)m_pDocument;
}
#endif //_DEBUG


// C��5��ʵ��3View ��Ϣ�������


void C��5��ʵ��3View::OnShowname()
{
	// TODO: �ڴ���������������
	CString s;
	CClientDC dc(this);
	s.Format(_T("½����"));
	dc.TextOutW(200,300,s);

}
