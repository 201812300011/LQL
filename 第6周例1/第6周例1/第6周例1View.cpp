
// ��6����1View.cpp : C��6����1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��6����1.h"
#endif

#include "��6����1Doc.h"
#include "��6����1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��6����1View

IMPLEMENT_DYNCREATE(C��6����1View, CView)

BEGIN_MESSAGE_MAP(C��6����1View, CView)
	ON_COMMAND(ID_FILE_OPEN, &C��6����1View::OnFileOpen)
END_MESSAGE_MAP()

// C��6����1View ����/����

C��6����1View::C��6����1View()
{
	// TODO: �ڴ˴���ӹ������

}

C��6����1View::~C��6����1View()
{
}

BOOL C��6����1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��6����1View ����

void C��6����1View::OnDraw(CDC* /*pDC*/)
{
	C��6����1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C��6����1View ���

#ifdef _DEBUG
void C��6����1View::AssertValid() const
{
	CView::AssertValid();
}

void C��6����1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��6����1Doc* C��6����1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��6����1Doc)));
	return (C��6����1Doc*)m_pDocument;
}
#endif //_DEBUG


// C��6����1View ��Ϣ�������


void C��6����1View::OnFileOpen()
{
	// TODO: �ڴ���������������
	CFileDialog cfd(true);//true���򿪶Ի���false�����Ϊ
	CClientDC dc(this);
	int r = cfd.DoModal();//ȡ���ļ���
	if(r==IDOK);
	{
		CString filename = cfd.GetPathName();//��·����ֵ���ַ�������
		dc.TextOutW(200, 300, filename);//���
	}
}
