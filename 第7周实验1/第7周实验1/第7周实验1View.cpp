
// ��7��ʵ��1View.cpp : C��7��ʵ��1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��7��ʵ��1.h"
#endif

#include "��7��ʵ��1Doc.h"
#include "��7��ʵ��1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��7��ʵ��1View

IMPLEMENT_DYNCREATE(C��7��ʵ��1View, CView)

BEGIN_MESSAGE_MAP(C��7��ʵ��1View, CView)
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// C��7��ʵ��1View ����/����

C��7��ʵ��1View::C��7��ʵ��1View()
{
	// TODO: �ڴ˴���ӹ������
	cr.left = 30; cr.top = 80;
	cr.right = 80; cr.bottom = 130;
}

C��7��ʵ��1View::~C��7��ʵ��1View()
{
}

BOOL C��7��ʵ��1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��7��ʵ��1View ����

void C��7��ʵ��1View::OnDraw(CDC* pDC)
{
	C��7��ʵ��1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->Rectangle(cr);
}


// C��7��ʵ��1View ���

#ifdef _DEBUG
void C��7��ʵ��1View::AssertValid() const
{
	CView::AssertValid();
}

void C��7��ʵ��1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��7��ʵ��1Doc* C��7��ʵ��1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��7��ʵ��1Doc)));
	return (C��7��ʵ��1Doc*)m_pDocument;
}
#endif //_DEBUG


// C��7��ʵ��1View ��Ϣ�������


void C��7��ʵ��1View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	if (nFlags)
	{
		cr.left = point.x - 50;cr.top = point.y - 50;
		cr.right = point.x + 50; cr.bottom + 50;
	}
	Invalidate();
	CView::OnMouseMove(nFlags, point);
}
