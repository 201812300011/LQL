
// ��9��ʵ��2View.cpp : C��9��ʵ��2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��9��ʵ��2.h"
#endif

#include "��9��ʵ��2Doc.h"
#include "��9��ʵ��2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��9��ʵ��2View

IMPLEMENT_DYNCREATE(C��9��ʵ��2View, CView)

BEGIN_MESSAGE_MAP(C��9��ʵ��2View, CView)
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// C��9��ʵ��2View ����/����

C��9��ʵ��2View::C��9��ʵ��2View()
{
	// TODO: �ڴ˴���ӹ������

}

C��9��ʵ��2View::~C��9��ʵ��2View()
{
}

BOOL C��9��ʵ��2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��9��ʵ��2View ����

void C��9��ʵ��2View::OnDraw(CDC* pDC )
{
	C��9��ʵ��2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	for (int i = 0; i < pDoc->ca.GetSize(); i++) 
	{
		pDC->Ellipse(pDoc->ca[i]);
	}
}


// C��9��ʵ��2View ���

#ifdef _DEBUG
void C��9��ʵ��2View::AssertValid() const
{
	CView::AssertValid();
}

void C��9��ʵ��2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��9��ʵ��2Doc* C��9��ʵ��2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��9��ʵ��2Doc)));
	return (C��9��ʵ��2Doc*)m_pDocument;
}
#endif //_DEBUG


// C��9��ʵ��2View ��Ϣ�������


void C��9��ʵ��2View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	C��9��ʵ��2Doc* pDoc = GetDocument();
	if (nFlags) {
		rect.left = point.x - 30;
		rect.right = point.x + 30;
		rect.top = point.y - 20;
		rect.bottom = point.y + 20;
		pDoc->ca.Add(rect);
	}
	this->Invalidate();
	CView::OnMouseMove(nFlags, point);
}
