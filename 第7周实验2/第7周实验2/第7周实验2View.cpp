
// ��7��ʵ��2View.cpp : C��7��ʵ��2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��7��ʵ��2.h"
#endif

#include "��7��ʵ��2Doc.h"
#include "��7��ʵ��2View.h"

#include "MyDialog.h"//���ͷ�ļ�

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��7��ʵ��2View

IMPLEMENT_DYNCREATE(C��7��ʵ��2View, CView)

BEGIN_MESSAGE_MAP(C��7��ʵ��2View, CView)
	ON_COMMAND(ID_ADD, &C��7��ʵ��2View::OnAdd)
END_MESSAGE_MAP()

// C��7��ʵ��2View ����/����

C��7��ʵ��2View::C��7��ʵ��2View()
{
	// TODO: �ڴ˴���ӹ������

}

C��7��ʵ��2View::~C��7��ʵ��2View()
{
}

BOOL C��7��ʵ��2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��7��ʵ��2View ����

void C��7��ʵ��2View::OnDraw(CDC* /*pDC*/)
{
	C��7��ʵ��2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C��7��ʵ��2View ���

#ifdef _DEBUG
void C��7��ʵ��2View::AssertValid() const
{
	CView::AssertValid();
}

void C��7��ʵ��2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��7��ʵ��2Doc* C��7��ʵ��2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��7��ʵ��2Doc)));
	return (C��7��ʵ��2Doc*)m_pDocument;
}
#endif //_DEBUG


// C��7��ʵ��2View ��Ϣ�������


void C��7��ʵ��2View::OnAdd()
{
	// TODO: �ڴ���������������
	CClientDC dc(this);
	MyDialog dlg;
	int t = dlg.DoModal();
	if (t == IDOK)
	{
		CString s;
		dlg.z = dlg.x + dlg.y;
		s.Format(_T("%d+%d=%d"),dlg.x,dlg.y,dlg.z);
		dc.TextOutW(100,100,s);
	}
}
