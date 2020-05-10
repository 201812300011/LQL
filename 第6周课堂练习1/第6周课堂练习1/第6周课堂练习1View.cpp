
// ��6�ܿ�����ϰ1View.cpp : C��6�ܿ�����ϰ1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��6�ܿ�����ϰ1.h"
#endif

#include "��6�ܿ�����ϰ1Doc.h"
#include "��6�ܿ�����ϰ1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��6�ܿ�����ϰ1View

IMPLEMENT_DYNCREATE(C��6�ܿ�����ϰ1View, CView)

BEGIN_MESSAGE_MAP(C��6�ܿ�����ϰ1View, CView)
	ON_COMMAND(ID_FILE_OPEN, &C��6�ܿ�����ϰ1View::OnFileOpen)
END_MESSAGE_MAP()

// C��6�ܿ�����ϰ1View ����/����

C��6�ܿ�����ϰ1View::C��6�ܿ�����ϰ1View()
{
	// TODO: �ڴ˴���ӹ������

}

C��6�ܿ�����ϰ1View::~C��6�ܿ�����ϰ1View()
{
}

BOOL C��6�ܿ�����ϰ1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��6�ܿ�����ϰ1View ����

void C��6�ܿ�����ϰ1View::OnDraw(CDC* pDC)
{
	C��6�ܿ�����ϰ1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CRect rect;
	GetClientRect(&rect);
	if (r == IDOK)
	{
		CImage img;
		img.Load(filename);
		x = (rect.Width() - img.GetWidth()) / 2;
		y = (rect.Height() - img.GetHeight()) / 2;
		img.Draw(pDC->m_hDC, x, y, img.GetWidth(), img.GetHeight());
	}
}


// C��6�ܿ�����ϰ1View ���

#ifdef _DEBUG
void C��6�ܿ�����ϰ1View::AssertValid() const
{
	CView::AssertValid();
}

void C��6�ܿ�����ϰ1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��6�ܿ�����ϰ1Doc* C��6�ܿ�����ϰ1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��6�ܿ�����ϰ1Doc)));
	return (C��6�ܿ�����ϰ1Doc*)m_pDocument;
}
#endif //_DEBUG


// C��6�ܿ�����ϰ1View ��Ϣ�������


void C��6�ܿ�����ϰ1View::OnFileOpen()
{
	// TODO: �ڴ���������������
	CFileDialog cfd(true);//true:�򿪶Ի���
	r = cfd.DoModal();//ȡ���ļ���
	if (r == IDOK)
	{
		filename = cfd.GetPathName();//��·����ֵ���ַ�������
		GetDC()->TextOutW(100,100,filename);
	}
	Invalidate();
}
