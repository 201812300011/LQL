
// �ӷ�����View.cpp : C�ӷ�����View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "�ӷ�����.h"
#endif

#include "�ӷ�����Doc.h"
#include "�ӷ�����View.h"
#include "MyDialog.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C�ӷ�����View

IMPLEMENT_DYNCREATE(C�ӷ�����View, CView)

BEGIN_MESSAGE_MAP(C�ӷ�����View, CView)
	ON_COMMAND(ID_ADD, &C�ӷ�����View::OnAdd)
END_MESSAGE_MAP()

// C�ӷ�����View ����/����

C�ӷ�����View::C�ӷ�����View()
{
	// TODO: �ڴ˴���ӹ������

}

C�ӷ�����View::~C�ӷ�����View()
{
}

BOOL C�ӷ�����View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C�ӷ�����View ����

void C�ӷ�����View::OnDraw(CDC* /*pDC*/)
{
	C�ӷ�����Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C�ӷ�����View ���

#ifdef _DEBUG
void C�ӷ�����View::AssertValid() const
{
	CView::AssertValid();
}

void C�ӷ�����View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C�ӷ�����Doc* C�ӷ�����View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C�ӷ�����Doc)));
	return (C�ӷ�����Doc*)m_pDocument;
}
#endif //_DEBUG


// C�ӷ�����View ��Ϣ�������


void C�ӷ�����View::OnAdd()
{
	// TODO: �ڴ���������������
	CClientDC dc(this);
	MyDialog dlg;
	int t = dlg.DoModal();
	if (t == IDOK)
	{

	}
}
