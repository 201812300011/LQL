
// ��7��ʵ��4View.cpp : C��7��ʵ��4View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��7��ʵ��4.h"
#endif

#include "��7��ʵ��4Doc.h"
#include "��7��ʵ��4View.h"
#include "MyDialog.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��7��ʵ��4View

IMPLEMENT_DYNCREATE(C��7��ʵ��4View, CView)

BEGIN_MESSAGE_MAP(C��7��ʵ��4View, CView)
	ON_COMMAND(ID_POPOUT, &C��7��ʵ��4View::OnPopout)
END_MESSAGE_MAP()

// C��7��ʵ��4View ����/����

C��7��ʵ��4View::C��7��ʵ��4View()
{
	// TODO: �ڴ˴���ӹ������

}

C��7��ʵ��4View::~C��7��ʵ��4View()
{
}

BOOL C��7��ʵ��4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��7��ʵ��4View ����

void C��7��ʵ��4View::OnDraw(CDC* /*pDC*/)
{
	C��7��ʵ��4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C��7��ʵ��4View ���

#ifdef _DEBUG
void C��7��ʵ��4View::AssertValid() const
{
	CView::AssertValid();
}

void C��7��ʵ��4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��7��ʵ��4Doc* C��7��ʵ��4View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��7��ʵ��4Doc)));
	return (C��7��ʵ��4Doc*)m_pDocument;
}
#endif //_DEBUG


// C��7��ʵ��4View ��Ϣ�������


void C��7��ʵ��4View::OnPopout()
{
	// TODO: �ڴ���������������
	CClientDC dc(this);
	MyDialog dlg;
	int t = dlg.DoModal();
	if (t == IDOK)
	{

	}
}
