
// ��5��ʵ��1View.cpp : C��5��ʵ��1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��5��ʵ��1.h"
#endif

#include "��5��ʵ��1Doc.h"
#include "��5��ʵ��1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��5��ʵ��1View

IMPLEMENT_DYNCREATE(C��5��ʵ��1View, CView)

BEGIN_MESSAGE_MAP(C��5��ʵ��1View, CView)
	ON_WM_LBUTTONDOWN()
	ON_COMMAND(ID_DRAWCIRCLE, &C��5��ʵ��1View::OnDrawcircle)
END_MESSAGE_MAP()

// C��5��ʵ��1View ����/����

C��5��ʵ��1View::C��5��ʵ��1View()
{
	// TODO: �ڴ˴���ӹ������

}

C��5��ʵ��1View::~C��5��ʵ��1View()
{
}

BOOL C��5��ʵ��1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��5��ʵ��1View ����

void C��5��ʵ��1View::OnDraw(CDC* /*pDC*/)
{
	C��5��ʵ��1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	

}


// C��5��ʵ��1View ���

#ifdef _DEBUG
void C��5��ʵ��1View::AssertValid() const
{
	CView::AssertValid();
}

void C��5��ʵ��1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��5��ʵ��1Doc* C��5��ʵ��1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��5��ʵ��1Doc)));
	return (C��5��ʵ��1Doc*)m_pDocument;
}
#endif //_DEBUG


// C��5��ʵ��1View ��Ϣ�������


void C��5��ʵ��1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	int r,x,y,R;
	GetClientRect(&rect);//��ȡ�ͻ����ߴ�
	x = (rect.left + rect.right) / 2;
	y = (rect.top+rect.bottom) / 2;
	R= (rect.left + rect.right) / 2;
	for (r = 1; r <= R; r++)
	{
		CRect rc(x - r, y - r, x + r, y + r);
		GetDC()->Ellipse(rc);
	}
	CView::OnLButtonDown(nFlags, point);
}


void C��5��ʵ��1View::OnDrawcircle()
{
	// TODO: �ڴ���������������

}
