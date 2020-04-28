
// MFC2020.03.10.test2View.cpp : CMFC20200310test2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC2020.03.10.test2.h"
#endif

#include "MFC2020.03.10.test2Doc.h"
#include "MFC2020.03.10.test2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC20200310test2View

IMPLEMENT_DYNCREATE(CMFC20200310test2View, CView)

BEGIN_MESSAGE_MAP(CMFC20200310test2View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMFC20200310test2View ����/����

CMFC20200310test2View::CMFC20200310test2View()
{
	// TODO: �ڴ˴���ӹ������

}

CMFC20200310test2View::~CMFC20200310test2View()
{
}

BOOL CMFC20200310test2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFC20200310test2View ����

void CMFC20200310test2View::OnDraw(CDC* /*pDC*/)
{
	CMFC20200310test2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFC20200310test2View ���

#ifdef _DEBUG
void CMFC20200310test2View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC20200310test2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC20200310test2Doc* CMFC20200310test2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC20200310test2Doc)));
	return (CMFC20200310test2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC20200310test2View ��Ϣ�������


void CMFC20200310test2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CMFC20200310test2Doc* pDoc = GetDocument();//�˾��ͨ��˫��view�࣬˫��ondraw����������ճ��
	//��ͬ���Ա���ã���Ҫ����GetDocument()��ָ�����
	CClientDC dc(this);//����һ��CClientDC�����dc
	CString s;//�����ַ���s
	int a = pDoc->A;//ָ�����A��ֵ
	int b = pDoc->B;
	int c = a+b;
	s.Format(_T("A+B=%d"),c);//%d���������ͣ�
	dc.TextOutW(400, 400, s);//��ʾ

	CView::OnLButtonDown(nFlags, point);
}
