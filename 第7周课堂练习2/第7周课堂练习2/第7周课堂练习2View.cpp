
// ��7�ܿ�����ϰ2View.cpp : C��7�ܿ�����ϰ2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��7�ܿ�����ϰ2.h"
#endif

#include "��7�ܿ�����ϰ2Doc.h"
#include "��7�ܿ�����ϰ2View.h"
#include "mydialog.h"//����

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��7�ܿ�����ϰ2View

IMPLEMENT_DYNCREATE(C��7�ܿ�����ϰ2View, CView)

BEGIN_MESSAGE_MAP(C��7�ܿ�����ϰ2View, CView)
	ON_COMMAND(ID_EXCHANGE, &C��7�ܿ�����ϰ2View::OnExchange)
END_MESSAGE_MAP()

// C��7�ܿ�����ϰ2View ����/����

C��7�ܿ�����ϰ2View::C��7�ܿ�����ϰ2View()
{
	// TODO: �ڴ˴���ӹ������

}

C��7�ܿ�����ϰ2View::~C��7�ܿ�����ϰ2View()
{
}

BOOL C��7�ܿ�����ϰ2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��7�ܿ�����ϰ2View ����

void C��7�ܿ�����ϰ2View::OnDraw(CDC* /*pDC*/)
{
	C��7�ܿ�����ϰ2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C��7�ܿ�����ϰ2View ���

#ifdef _DEBUG
void C��7�ܿ�����ϰ2View::AssertValid() const
{
	CView::AssertValid();
}

void C��7�ܿ�����ϰ2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��7�ܿ�����ϰ2Doc* C��7�ܿ�����ϰ2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��7�ܿ�����ϰ2Doc)));
	return (C��7�ܿ�����ϰ2Doc*)m_pDocument;
}
#endif //_DEBUG


// C��7�ܿ�����ϰ2View ��Ϣ�������


void C��7�ܿ�����ϰ2View::OnExchange()
{
	// TODO: �ڴ���������������
	CClientDC dc(this);
	mydialog dlg;
	int t = dlg.DoModal();
	if (t == IDOK)
	{
		CString s3, s4, x;
		s3 = dlg.s2;
		s4 = dlg.s1;//����
		x.Format(_T("����֮��ĵ�һ��Ϊ%s,�ڶ���Ϊ%s"), s3, s4);
		dc.TextOutW(200, 300, x);
	}
}
