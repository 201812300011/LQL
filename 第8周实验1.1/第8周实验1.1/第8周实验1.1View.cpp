
// ��8��ʵ��1.1View.cpp : C��8��ʵ��11View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��8��ʵ��1.1.h"
#endif

#include "��8��ʵ��1.1Doc.h"
#include "��8��ʵ��1.1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��8��ʵ��11View

IMPLEMENT_DYNCREATE(C��8��ʵ��11View, CView)

BEGIN_MESSAGE_MAP(C��8��ʵ��11View, CView)
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// C��8��ʵ��11View ����/����

C��8��ʵ��11View::C��8��ʵ��11View()
{
	// TODO: �ڴ˴���ӹ������

}

C��8��ʵ��11View::~C��8��ʵ��11View()
{
}

BOOL C��8��ʵ��11View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��8��ʵ��11View ����

void C��8��ʵ��11View::OnDraw(CDC* /*pDC*/)
{
	C��8��ʵ��11Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C��8��ʵ��11View ���

#ifdef _DEBUG
void C��8��ʵ��11View::AssertValid() const
{
	CView::AssertValid();
}

void C��8��ʵ��11View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��8��ʵ��11Doc* C��8��ʵ��11View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��8��ʵ��11Doc)));
	return (C��8��ʵ��11Doc*)m_pDocument;
}
#endif //_DEBUG


// C��8��ʵ��11View ��Ϣ�������


void C��8��ʵ��11View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CFileDialog cfd(true);
	int t = cfd.DoModal();
	if (t == IDOK)
	{
		filename = cfd.GetFileName();
		GetDC()->TextOutW(50, 60, filename);
	}
	CView::OnLButtonDblClk(nFlags, point);
	CView::OnLButtonDblClk(nFlags, point);
}
