
// ��8��ʵ��3.4View.cpp : C��8��ʵ��34View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��8��ʵ��3.4.h"
#endif

#include "��8��ʵ��3.4Doc.h"
#include "��8��ʵ��3.4View.h"
#include "MyDialog.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��8��ʵ��34View

IMPLEMENT_DYNCREATE(C��8��ʵ��34View, CView)

BEGIN_MESSAGE_MAP(C��8��ʵ��34View, CView)
	ON_COMMAND(ID_COLOR, &C��8��ʵ��34View::OnColor)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C��8��ʵ��34View ����/����

C��8��ʵ��34View::C��8��ʵ��34View()
{
	// TODO: �ڴ˴���ӹ������
	rc.left = 100; rc.top = 200;
	rc.right = 100; rc.bottom = 200;
}

C��8��ʵ��34View::~C��8��ʵ��34View()
{
}

BOOL C��8��ʵ��34View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��8��ʵ��34View ����

void C��8��ʵ��34View::OnDraw(CDC* pDC)
{
	C��8��ʵ��34Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->Ellipse(rc);
}


// C��8��ʵ��34View ���

#ifdef _DEBUG
void C��8��ʵ��34View::AssertValid() const
{
	CView::AssertValid();
}

void C��8��ʵ��34View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��8��ʵ��34Doc* C��8��ʵ��34View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��8��ʵ��34Doc)));
	return (C��8��ʵ��34Doc*)m_pDocument;
}
#endif //_DEBUG


// C��8��ʵ��34View ��Ϣ�������


void C��8��ʵ��34View::OnColor()
{
	// TODO: �ڴ���������������
	MyDialog dlg;
	int t = dlg.DoModal();
	if (t == IDOK) {
		CDC* pDC = GetDC(); // �õ�DC
		CBrush brush(RGB(dlg.a, dlg.b, dlg.c));//�����Լ���Ҫ�����ɫ
		CBrush *oldbrush;
		oldbrush = pDC->SelectObject(&brush);//ѡ�µĻ�ˢ
		pDC->Ellipse(rc.left, rc.top, rc.right, rc.bottom);
		pDC->SelectObject(oldbrush);//��ԭ���Ļ�ˢѡ��ȥ
	}
}


void C��8��ʵ��34View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	if ((point.x < rc.right) && (point.x > rc.left) && (point.y > rc.top) && (point.y < rc.bottom)) {
		CRect m_rc;
		m_rc.left = rc.left;m_rc.top = rc.top;
		m_rc.right = rc.right;m_rc.bottom = rc.bottom;
		CDC * dc = GetDC();
		CPen * OldPen = NULL;
		CPen pen;
		pen.CreatePen(PS_DASH, 1, RGB(0, 0, 0));
		OldPen = dc->SelectObject(&pen);
		CBrush * OldBrush = NULL;
		CBrush * Brush = CBrush::FromHandle((HBRUSH)GetStockObject(NULL_BRUSH));//����͸��Ч��
		OldBrush = dc->SelectObject(Brush);
		dc->Rectangle(m_rc);

	}
	CView::OnLButtonDown(nFlags, point);
}
