
// ��8��ʵ��3.2View.cpp : C��8��ʵ��32View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��8��ʵ��3.2.h"
#endif

#include "��8��ʵ��3.2Doc.h"
#include "��8��ʵ��3.2View.h"
#include "MyDialog.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��8��ʵ��32View

IMPLEMENT_DYNCREATE(C��8��ʵ��32View, CView)

BEGIN_MESSAGE_MAP(C��8��ʵ��32View, CView)
	ON_COMMAND(ID_DRAWELLIPSE, &C��8��ʵ��32View::OnDrawellipse)
END_MESSAGE_MAP()

// C��8��ʵ��32View ����/����

C��8��ʵ��32View::C��8��ʵ��32View()
{
	// TODO: �ڴ˴���ӹ������

}

C��8��ʵ��32View::~C��8��ʵ��32View()
{
}

BOOL C��8��ʵ��32View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��8��ʵ��32View ����

void C��8��ʵ��32View::OnDraw(CDC* /*pDC*/)
{
	C��8��ʵ��32Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C��8��ʵ��32View ���

#ifdef _DEBUG
void C��8��ʵ��32View::AssertValid() const
{
	CView::AssertValid();
}

void C��8��ʵ��32View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��8��ʵ��32Doc* C��8��ʵ��32View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��8��ʵ��32Doc)));
	return (C��8��ʵ��32Doc*)m_pDocument;
}
#endif //_DEBUG


// C��8��ʵ��32View ��Ϣ�������


void C��8��ʵ��32View::OnDrawellipse()
{
	// TODO: �ڴ���������������
	MyDialog dlg;
	int t = dlg.DoModal();
	if (t == IDOK)
	{
		CRect rc;
		rc.left = dlg.left;
		rc.top = dlg.top;
		rc.right = dlg.right;
		rc.bottom = dlg.buttom;
		GetDC()->Ellipse(rc);
	}
}
