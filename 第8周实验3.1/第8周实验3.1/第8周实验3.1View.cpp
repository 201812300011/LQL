
// ��8��ʵ��3.1View.cpp : C��8��ʵ��31View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��8��ʵ��3.1.h"
#endif

#include "��8��ʵ��3.1Doc.h"
#include "��8��ʵ��3.1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��8��ʵ��31View

IMPLEMENT_DYNCREATE(C��8��ʵ��31View, CView)

BEGIN_MESSAGE_MAP(C��8��ʵ��31View, CView)
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// C��8��ʵ��31View ����/����

C��8��ʵ��31View::C��8��ʵ��31View()
{
	// TODO: �ڴ˴���ӹ������

}

C��8��ʵ��31View::~C��8��ʵ��31View()
{
}

BOOL C��8��ʵ��31View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��8��ʵ��31View ����

void C��8��ʵ��31View::OnDraw(CDC* pDC)
{
	C��8��ʵ��31Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->Ellipse(rect);
}


// C��8��ʵ��31View ���

#ifdef _DEBUG
void C��8��ʵ��31View::AssertValid() const
{
	CView::AssertValid();
}

void C��8��ʵ��31View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��8��ʵ��31Doc* C��8��ʵ��31View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��8��ʵ��31Doc)));
	return (C��8��ʵ��31Doc*)m_pDocument;
}
#endif //_DEBUG


// C��8��ʵ��31View ��Ϣ�������


void C��8��ʵ��31View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	rect.left = point.x - 50; rect.top = point.y - 50;
	rect.right = point.x + 100; rect.bottom = point.y + 100;
	Invalidate();
	CView::OnMouseMove(nFlags, point);
}
