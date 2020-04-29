
// 2020.03.16.example6View.cpp : CMy20200316example6View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "2020.03.16.example6.h"
#endif

#include "2020.03.16.example6Doc.h"
#include "2020.03.16.example6View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy20200316example6View

IMPLEMENT_DYNCREATE(CMy20200316example6View, CView)

BEGIN_MESSAGE_MAP(CMy20200316example6View, CView)
	ON_WM_CHAR()
END_MESSAGE_MAP()

// CMy20200316example6View ����/����

CMy20200316example6View::CMy20200316example6View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy20200316example6View::~CMy20200316example6View()
{
}

BOOL CMy20200316example6View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy20200316example6View ����

void CMy20200316example6View::OnDraw(CDC* pDC)
{
	CMy20200316example6Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->Ellipse(pDoc->m_crlRect);
}


// CMy20200316example6View ���

#ifdef _DEBUG
void CMy20200316example6View::AssertValid() const
{
	CView::AssertValid();
}

void CMy20200316example6View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy20200316example6Doc* CMy20200316example6View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy20200316example6Doc)));
	return (CMy20200316example6Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy20200316example6View ��Ϣ�������


void CMy20200316example6View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{    /*OnChar:�ַ���Ӧ����*/
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMy20200316example6Doc* pDoc = GetDocument();
	CRect clientRec;//����ͻ�������Ϊһ�����ο�
	GetClientRect(&clientRec);//��ȡ�ͻ�����Ϣ���ͻ����ߴ�
	switch (nChar)//nChar�������ִ�Сд
	{
	case 'L'://���̼�"->"
		if (pDoc->m_crlRect.left > 0)
		{
			pDoc->m_crlRect.left -= 5;//�����ƶ�5
			pDoc->m_crlRect.right -= 5;
		}
		break;
	case 'R'://���̼�"<-"
		if (pDoc->m_crlRect.right <= (clientRec.right - clientRec.left))//�жϾ����Ƿ��ڿͻ�����
		{
			pDoc->m_crlRect.left += 5;
			pDoc->m_crlRect.right += 5;
		}
		break;
	case 'D'://���̼�"����"
		if (pDoc->m_crlRect.top> 0)
		{
			pDoc->m_crlRect.top += 5;//�����ƶ�5
			pDoc->m_crlRect.bottom += 5;
		}
		break;
	case 'U'://���̼�"����"
		if (pDoc->m_crlRect.bottom <= (clientRec.bottom - clientRec.top))//�жϾ����Ƿ��ڿͻ�����
		{
			pDoc->m_crlRect.top -= 5;
			pDoc->m_crlRect.bottom -= 5;
		}
		break;
	}
	InvalidateRect(NULL, TRUE);//ǿ���ػ棬ondraw����˵������ػ棨ע����InvalidateRect������Invalidate��
	CView::OnChar(nChar, nRepCnt, nFlags);
}
