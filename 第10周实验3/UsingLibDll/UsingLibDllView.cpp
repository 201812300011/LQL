
// UsingLibDllView.cpp : CUsingLibDllView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "UsingLibDll.h"
#endif

#include "UsingLibDllDoc.h"
#include "UsingLibDllView.h"
#include "W32D.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CUsingLibDllView

IMPLEMENT_DYNCREATE(CUsingLibDllView, CView)

BEGIN_MESSAGE_MAP(CUsingLibDllView, CView)
END_MESSAGE_MAP()

// CUsingLibDllView ����/����

CUsingLibDllView::CUsingLibDllView()
{
	// TODO: �ڴ˴���ӹ������

}

CUsingLibDllView::~CUsingLibDllView()
{
}

BOOL CUsingLibDllView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CUsingLibDllView ����

void CUsingLibDllView::OnDraw(CDC* /*pDC*/)
{
	CUsingLibDllDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CString s;
	int n = 5;
	int a = factorial(n);
	if (a>0)
		s.Format(_T("%d�Ľ׳�Ϊ��%d"), n, a);
	else
		s.Format(_T("%d��ֵ���ڱ��㷨���巶Χ"), n);
	GetDC()->TextOutW(50, 100, s);


	CString ss;
	float edg = 30.0;
	FAC a1;
	float ans = a1.convert(edg);
	ss.Format(_T("convert(30.0) ��ֵ:%f"), a1.convert(edg));
	GetDC()->TextOutW(100, 300, ss);
}


// CUsingLibDllView ���

#ifdef _DEBUG
void CUsingLibDllView::AssertValid() const
{
	CView::AssertValid();
}

void CUsingLibDllView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CUsingLibDllDoc* CUsingLibDllView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CUsingLibDllDoc)));
	return (CUsingLibDllDoc*)m_pDocument;
}
#endif //_DEBUG


// CUsingLibDllView ��Ϣ�������
