
// 2020.03.16.example1View.cpp : CMy20200316example1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "2020.03.16.example1.h"
#endif

#include "2020.03.16.example1Doc.h"
#include "2020.03.16.example1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy20200316example1View

IMPLEMENT_DYNCREATE(CMy20200316example1View, CView)

BEGIN_MESSAGE_MAP(CMy20200316example1View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy20200316example1View ����/����

CMy20200316example1View::CMy20200316example1View()
{
	// TODO: �ڴ˴���ӹ������

}

CMy20200316example1View::~CMy20200316example1View()
{
}

BOOL CMy20200316example1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy20200316example1View ����

void CMy20200316example1View::OnDraw(CDC* pDC)
{
	CMy20200316example1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���

	pDC->Rectangle(pDoc->m_tagRec);
}


// CMy20200316example1View ���

#ifdef _DEBUG
void CMy20200316example1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy20200316example1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy20200316example1Doc* CMy20200316example1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy20200316example1Doc)));
	return (CMy20200316example1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy20200316example1View ��Ϣ�������


void CMy20200316example1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CMy20200316example1Doc* pDoc = GetDocument();
	/*���������µ�ͬʱ��shift���Ƿ񱻰���*/
	if (nFlags&MK_SHIFT)//Ϊ�棬shiftͬʱ���£����θ�λ
	{
		pDoc->m_tagRec.left = 30;  pDoc->m_tagRec.top = 30;
		pDoc->m_tagRec.right = 350; pDoc->m_tagRec.bottom = 300;
	}
	else//Ϊ�٣��ƶ�����
	{
		pDoc->m_tagRec.left = point.x;  pDoc->m_tagRec.top = point.y;
		pDoc->m_tagRec.right = point.x+320; pDoc->m_tagRec.bottom = point.y+270;
	}
	InvalidateRect(NULL, TRUE);//ǿ���ػ����

	CView::OnLButtonDown(nFlags, point);
}
