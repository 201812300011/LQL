
// MFC0303test1View.cpp : CMFC0303test1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC0303test1.h"
#endif

#include "MFC0303test1Doc.h"
#include "MFC0303test1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC0303test1View

IMPLEMENT_DYNCREATE(CMFC0303test1View, CView)

BEGIN_MESSAGE_MAP(CMFC0303test1View, CView)
END_MESSAGE_MAP()

// CMFC0303test1View ����/����

CMFC0303test1View::CMFC0303test1View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFC0303test1View::~CMFC0303test1View()
{
}

BOOL CMFC0303test1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC0303test1View ����

void CMFC0303test1View::OnDraw(CDC* pDC)
{
	CMFC0303test1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CString S;
	S = _T("����***");//�����ַ���S������ֵ
	int A = 100;
	CString a;
	a.Format(_T("A=%d"),A);//��intת��ΪUnicode�ַ���
	pDC->TextOutW(300,300,a);//�ڿͻ������a
	pDC->TextOutW(400, 400,S);
}


// CMFC0303test1View ���

#ifdef _DEBUG
void CMFC0303test1View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC0303test1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC0303test1Doc* CMFC0303test1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC0303test1Doc)));
	return (CMFC0303test1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC0303test1View ��Ϣ�������
