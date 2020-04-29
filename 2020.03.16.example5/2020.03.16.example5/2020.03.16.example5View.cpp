
// 2020.03.16.example5View.cpp : CMy20200316example5View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "2020.03.16.example5.h"
#endif

#include "2020.03.16.example5Doc.h"
#include "2020.03.16.example5View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy20200316example5View

IMPLEMENT_DYNCREATE(CMy20200316example5View, CView)

BEGIN_MESSAGE_MAP(CMy20200316example5View, CView)
	ON_WM_KEYDOWN()
END_MESSAGE_MAP()

// CMy20200316example5View ����/����

CMy20200316example5View::CMy20200316example5View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy20200316example5View::~CMy20200316example5View()
{
}

BOOL CMy20200316example5View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy20200316example5View ����

void CMy20200316example5View::OnDraw(CDC* pDC)
{
	CMy20200316example5Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->Ellipse(pDoc->m_crlRect);//�ػ棬������ת��Ϊ��Բ
}


// CMy20200316example5View ���

#ifdef _DEBUG
void CMy20200316example5View::AssertValid() const
{
	CView::AssertValid();
}

void CMy20200316example5View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy20200316example5Doc* CMy20200316example5View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy20200316example5Doc)));
	return (CMy20200316example5Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy20200316example5View ��Ϣ�������


void CMy20200316example5View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CMy20200316example5Doc* pDoc = GetDocument();
	CRect clientRec;//����ͻ�������Ϊһ�����ο�
	GetClientRect (&clientRec);//��ȡ�ͻ�����Ϣ������
	switch (nChar)//nChar�������ִ�Сд
	{
	 case VK_LEFT://���̼�"->"
		 if (pDoc->m_crlRect.left > 0)
		 {
			 pDoc->m_crlRect.left -= 5;//�����ƶ�5
			 pDoc->m_crlRect.right -= 5;
		 }
		 break;
	 case VK_RIGHT://���̼�"<-"
		 if (pDoc->m_crlRect.right <= (clientRec.right - clientRec.left))//�жϾ����Ƿ��ڿͻ�����
		 {
			 pDoc->m_crlRect.left += 5;
			 pDoc->m_crlRect.right += 5;
		 }
		 break;
	 case VK_DOWN://���̼�"����"
		 if (pDoc->m_crlRect.top> 0)
		 {
			 pDoc->m_crlRect.top += 5;//�����ƶ�5
			 pDoc->m_crlRect.bottom += 5;
		 }
		 break;
	 case VK_UP://���̼�"����"
		 if (pDoc->m_crlRect.bottom <= (clientRec.bottom - clientRec.top))//�жϾ����Ƿ��ڿͻ�����
		 {
			 pDoc->m_crlRect.top -= 5;
			 pDoc->m_crlRect.bottom -= 5;
		 }
		 break;
	}
	InvalidateRect(NULL, TRUE);//ǿ���ػ棬ondraw����˵������ػ棨ע����InvalidateRect������Invalidate��

	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}
