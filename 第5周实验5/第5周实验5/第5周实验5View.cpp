
// ��5��ʵ��5View.cpp : C��5��ʵ��5View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��5��ʵ��5.h"
#endif

#include "��5��ʵ��5Doc.h"
#include "��5��ʵ��5View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��5��ʵ��5View

IMPLEMENT_DYNCREATE(C��5��ʵ��5View, CView)

BEGIN_MESSAGE_MAP(C��5��ʵ��5View, CView)
	ON_COMMAND(ID_DRAWLINE, &C��5��ʵ��5View::OnDrawline)
	ON_WM_LBUTTONDOWN()
	ON_COMMAND(ID_DRAWRECTANGLE, &C��5��ʵ��5View::OnDrawrectangle)
	ON_COMMAND(ID_DRAWELLIPSE, &C��5��ʵ��5View::OnDrawellipse)
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// C��5��ʵ��5View ����/����

C��5��ʵ��5View::C��5��ʵ��5View()
{
	// TODO: �ڴ˴���ӹ������

}

C��5��ʵ��5View::~C��5��ʵ��5View()
{
}

BOOL C��5��ʵ��5View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��5��ʵ��5View ����

void C��5��ʵ��5View::OnDraw(CDC* /*pDC*/)
{
	C��5��ʵ��5Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C��5��ʵ��5View ���

#ifdef _DEBUG
void C��5��ʵ��5View::AssertValid() const
{
	CView::AssertValid();
}

void C��5��ʵ��5View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��5��ʵ��5Doc* C��5��ʵ��5View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��5��ʵ��5Doc)));
	return (C��5��ʵ��5Doc*)m_pDocument;
}
#endif //_DEBUG


// C��5��ʵ��5View ��Ϣ�������

int flag;
void C��5��ʵ��5View::OnDrawline()
{
	// TODO: �ڴ���������������
	CClientDC dc(this);
	flag = 1;
	CPen pen(PS_SOLID,5,RGB(0,0,0));
	CPen* oldPen = dc.SelectObject(&pen);
}

CRect cr;
CPoint point1, point2;

void C��5��ʵ��5View::OnDrawrectangle()
{
	// TODO: �ڴ���������������
	flag = 2;
}

void C��5��ʵ��5View::OnDrawellipse()
{
	// TODO: �ڴ���������������
	flag = 3;
}

void C��5��ʵ��5View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	point1.x = point.x;//������λ�ø���point1��
	point1.y = point.y;
	CView::OnLButtonDown(nFlags, point);
}

void C��5��ʵ��5View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	point2.x = point.x;
	point2.y = point.y;
	switch (flag)
	{
	case 1:
	{
		dc.MoveTo(point2.x, point2.y);
		dc.LineTo(point1.x, point1.y);
	}
	break;
	case 2:
	{
		cr.left = point1.x; cr.top = point1.y;
		cr.right = point2.x; cr.bottom = point2.y;
		dc.Rectangle(cr);
	}
	break;
	case 3:
	{
		cr.left = point1.x; cr.top = point1.y;
		cr.right = point2.x; cr.bottom = point2.y;
		dc.Ellipse(cr);
	}
	break;
	}
	CView::OnLButtonUp(nFlags, point);
}

