
// ��7����1View.cpp : C��7����1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��7����1.h"
#endif

#include "��7����1Doc.h"
#include "��7����1View.h"

#include"MyDlg0.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��7����1View

IMPLEMENT_DYNCREATE(C��7����1View, CView)

BEGIN_MESSAGE_MAP(C��7����1View, CView)
	ON_COMMAND(ID_POPOUT, &C��7����1View::OnPopout)
END_MESSAGE_MAP()

// C��7����1View ����/����

C��7����1View::C��7����1View()
{
	// TODO: �ڴ˴���ӹ������

}

C��7����1View::~C��7����1View()
{
}

BOOL C��7����1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��7����1View ����

void C��7����1View::OnDraw(CDC* /*pDC*/)
{
	C��7����1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C��7����1View ���

#ifdef _DEBUG
void C��7����1View::AssertValid() const
{
	CView::AssertValid();
}

void C��7����1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��7����1Doc* C��7����1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��7����1Doc)));
	return (C��7����1Doc*)m_pDocument;
}
#endif //_DEBUG


// C��7����1View ��Ϣ�������


void C��7����1View::OnPopout()
{
	// TODO: �ڴ���������������
	MyDlg0 dlg;
	int t = dlg.DoModal();
	if (t == IDOK)
	{
		int R, X, Y;//������ֵ
		R = dlg.r;//�Ի�����ͷ����ֵ
		X = dlg.x;
		Y = dlg.y;
		CRect re(X-R,Y-R,X+R,Y+R);
		GetDC()->Ellipse(re);
	}
}
