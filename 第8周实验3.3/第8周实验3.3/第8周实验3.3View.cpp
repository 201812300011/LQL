
// ��8��ʵ��3.3View.cpp : C��8��ʵ��33View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��8��ʵ��3.3.h"
#endif

#include "��8��ʵ��3.3Doc.h"
#include "��8��ʵ��3.3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��8��ʵ��33View

IMPLEMENT_DYNCREATE(C��8��ʵ��33View, CView)

BEGIN_MESSAGE_MAP(C��8��ʵ��33View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C��8��ʵ��33View ����/����

C��8��ʵ��33View::C��8��ʵ��33View()
{
	// TODO: �ڴ˴���ӹ������
	rc.left = 100; rc.top = 100;
	rc.right = 200; rc.bottom = 200;
}

C��8��ʵ��33View::~C��8��ʵ��33View()
{
}

BOOL C��8��ʵ��33View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��8��ʵ��33View ����

void C��8��ʵ��33View::OnDraw(CDC* pDC)
{
	C��8��ʵ��33Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->Ellipse(rc);
}


// C��8��ʵ��33View ���

#ifdef _DEBUG
void C��8��ʵ��33View::AssertValid() const
{
	CView::AssertValid();
}

void C��8��ʵ��33View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��8��ʵ��33Doc* C��8��ʵ��33View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��8��ʵ��33Doc)));
	return (C��8��ʵ��33Doc*)m_pDocument;
}
#endif //_DEBUG


// C��8��ʵ��33View ��Ϣ�������


void C��8��ʵ��33View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	if ((rc.left < point.x) && (point.x < rc.right) && (rc.top < point.y) && (point.y < rc.bottom))
	{
		CRect m_rc;
		m_rc.left = rc.left;m_rc.top = rc.top;
		m_rc.right = rc.right; m_rc.bottom = rc.bottom;
		CDC* dc = GetDC();
		CPen* Oldpen = NULL;
		CPen pen;
		pen.CreatePen(PS_DASH,1,RGB(0,0,0));
		Oldpen = dc->SelectObject(&pen);
		CBrush* OldBrush = NULL;
		CBrush* Brush = CBrush::FromHandle((HBRUSH)GetStockObject(NULL_BRUSH));//����͸������
		OldBrush = dc->SelectObject(Brush);
		dc->Rectangle(m_rc);
	}
	CView::OnLButtonDown(nFlags, point);
}
