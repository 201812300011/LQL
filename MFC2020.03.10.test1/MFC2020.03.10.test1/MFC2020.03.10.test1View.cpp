
// MFC2020.03.10.test1View.cpp : CMFC20200310test1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC2020.03.10.test1.h"
#endif

#include "MFC2020.03.10.test1Doc.h"
#include "MFC2020.03.10.test1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC20200310test1View

IMPLEMENT_DYNCREATE(CMFC20200310test1View, CView)

BEGIN_MESSAGE_MAP(CMFC20200310test1View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CMFC20200310test1View ����/����

CMFC20200310test1View::CMFC20200310test1View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFC20200310test1View::~CMFC20200310test1View()
{
}

BOOL CMFC20200310test1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC20200310test1View ����

void CMFC20200310test1View::OnDraw(CDC* /*pDC*/)
{
	CMFC20200310test1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC20200310test1View ���

#ifdef _DEBUG
void CMFC20200310test1View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC20200310test1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC20200310test1Doc* CMFC20200310test1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC20200310test1Doc)));
	return (CMFC20200310test1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC20200310test1View ��Ϣ�������


void CMFC20200310test1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CClientDC dc(this);//����ͻ�����this��ָ�룬����������ĳ����
	CString  s;
	s = _T("������ڱ�����");
	dc.TextOutW(200, 200, s);//����ַ���s��λ��Ϊ��200��200��
	
	CView::OnLButtonDown(nFlags, point);
}


void CMFC20200310test1View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CClientDC dc(this);//����ͻ�����this��ָ�룬����������ĳ����
	CString  t;
	t = _T("�������̧��");
	dc.TextOutW(300,300,t); //����ַ���s��λ��Ϊ��300��300��

	CView::OnLButtonUp(nFlags, point);
}
