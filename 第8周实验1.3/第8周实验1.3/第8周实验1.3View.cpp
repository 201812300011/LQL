
// ��8��ʵ��1.3View.cpp : C��8��ʵ��13View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��8��ʵ��1.3.h"
#endif

#include "��8��ʵ��1.3Doc.h"
#include "��8��ʵ��1.3View.h"
#include "MyDialog.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��8��ʵ��13View

IMPLEMENT_DYNCREATE(C��8��ʵ��13View, CView)

BEGIN_MESSAGE_MAP(C��8��ʵ��13View, CView)
	ON_COMMAND(ID_FILENAME, &C��8��ʵ��13View::OnFilename)
	ON_WM_LBUTTONDBLCLK()
END_MESSAGE_MAP()

// C��8��ʵ��13View ����/����

C��8��ʵ��13View::C��8��ʵ��13View()
{
	// TODO: �ڴ˴���ӹ������

}

C��8��ʵ��13View::~C��8��ʵ��13View()
{
}

BOOL C��8��ʵ��13View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��8��ʵ��13View ����

void C��8��ʵ��13View::OnDraw(CDC* /*pDC*/)
{
	C��8��ʵ��13Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C��8��ʵ��13View ���

#ifdef _DEBUG
void C��8��ʵ��13View::AssertValid() const
{
	CView::AssertValid();
}

void C��8��ʵ��13View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��8��ʵ��13Doc* C��8��ʵ��13View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��8��ʵ��13Doc)));
	return (C��8��ʵ��13Doc*)m_pDocument;
}
#endif //_DEBUG


// C��8��ʵ��13View ��Ϣ�������


void C��8��ʵ��13View::OnFilename()
{
	// TODO: �ڴ���������������
	MyDialog dlg;
	dlg.s = filename;
	int r = dlg.DoModal();
	if (r == IDOK)
	{

	}

}


void C��8��ʵ��13View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CFileDialog cfd(true);
	t = cfd.DoModal();
	if (t == IDOK)
	{
		filename = cfd.GetFileName();
		GetDC()->TextOutW(50, 40, filename);
	}

	CView::OnLButtonDblClk(nFlags, point);
}
