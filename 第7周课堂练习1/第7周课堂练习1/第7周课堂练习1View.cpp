
// ��7�ܿ�����ϰ1View.cpp : C��7�ܿ�����ϰ1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��7�ܿ�����ϰ1.h"
#endif

#include "��7�ܿ�����ϰ1Doc.h"
#include "��7�ܿ�����ϰ1View.h"

#include "MyDialog.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��7�ܿ�����ϰ1View

IMPLEMENT_DYNCREATE(C��7�ܿ�����ϰ1View, CView)

BEGIN_MESSAGE_MAP(C��7�ܿ�����ϰ1View, CView)
	ON_COMMAND(ID_SIGNOUT, &C��7�ܿ�����ϰ1View::OnSignout)
END_MESSAGE_MAP()

// C��7�ܿ�����ϰ1View ����/����

C��7�ܿ�����ϰ1View::C��7�ܿ�����ϰ1View()
{
	// TODO: �ڴ˴���ӹ������

}

C��7�ܿ�����ϰ1View::~C��7�ܿ�����ϰ1View()
{
}

BOOL C��7�ܿ�����ϰ1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��7�ܿ�����ϰ1View ����

void C��7�ܿ�����ϰ1View::OnDraw(CDC* /*pDC*/)
{
	C��7�ܿ�����ϰ1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C��7�ܿ�����ϰ1View ���

#ifdef _DEBUG
void C��7�ܿ�����ϰ1View::AssertValid() const
{
	CView::AssertValid();
}

void C��7�ܿ�����ϰ1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��7�ܿ�����ϰ1Doc* C��7�ܿ�����ϰ1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��7�ܿ�����ϰ1Doc)));
	return (C��7�ܿ�����ϰ1Doc*)m_pDocument;
}
#endif //_DEBUG


// C��7�ܿ�����ϰ1View ��Ϣ�������


void C��7�ܿ�����ϰ1View::OnSignout()
{
	// TODO: �ڴ���������������
	CString s;
	CClientDC dc(this);
	MyDialog dlg;
	int t = dlg.DoModal();
	if (t == IDOK)
	{
		s.Format(_T("�����˳��Ի���"));
		dc.TextOutW(200,300,s);
	}
}
