
// ��8��ʵ��1.2View.cpp : C��8��ʵ��12View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��8��ʵ��1.2.h"
#endif

#include "��8��ʵ��1.2Doc.h"
#include "��8��ʵ��1.2View.h"
#include "MyDialog.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��8��ʵ��12View

IMPLEMENT_DYNCREATE(C��8��ʵ��12View, CView)

BEGIN_MESSAGE_MAP(C��8��ʵ��12View, CView)
	ON_WM_LBUTTONDBLCLK()
	ON_COMMAND(ID_SHOWFILENAME, &C��8��ʵ��12View::OnShowfilename)
END_MESSAGE_MAP()

// C��8��ʵ��12View ����/����

C��8��ʵ��12View::C��8��ʵ��12View()
{
	// TODO: �ڴ˴���ӹ������

}

C��8��ʵ��12View::~C��8��ʵ��12View()
{
}

BOOL C��8��ʵ��12View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��8��ʵ��12View ����

void C��8��ʵ��12View::OnDraw(CDC* /*pDC*/)
{
	C��8��ʵ��12Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C��8��ʵ��12View ���

#ifdef _DEBUG
void C��8��ʵ��12View::AssertValid() const
{
	CView::AssertValid();
}

void C��8��ʵ��12View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��8��ʵ��12Doc* C��8��ʵ��12View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��8��ʵ��12Doc)));
	return (C��8��ʵ��12Doc*)m_pDocument;
}
#endif //_DEBUG


// C��8��ʵ��12View ��Ϣ�������


void C��8��ʵ��12View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CFileDialog cfd(true);
	t = cfd.DoModal();
	if (t == IDOK)
	{
		filename = cfd.GetFileName();
		GetDC()->TextOutW(50,40,filename);
	}
	CView::OnLButtonDblClk(nFlags, point);
}


void C��8��ʵ��12View::OnShowfilename()
{
	// TODO: �ڴ���������������
	MyDialog dlg;
	dlg.s = filename;
	int r = dlg.DoModal();
	if (r == IDOK)
	{
		
	}
}
