
// ��5����2View.cpp : C��5����2View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��5����2.h"
#endif

#include "��5����2Doc.h"
#include "��5����2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��5����2View

IMPLEMENT_DYNCREATE(C��5����2View, CView)

BEGIN_MESSAGE_MAP(C��5����2View, CView)
END_MESSAGE_MAP()

// C��5����2View ����/����

C��5����2View::C��5����2View()
{
	// TODO: �ڴ˴���ӹ������
	BITMAP BM;
	m_Bitmap.LoadBitmap(IDB_BITMAP1);
	m_Bitmap.GetBitmap(&BM);
	m_nWidth = BM.bmWidth;
	m_nHeight = BM.bmHeight;
}

C��5����2View::~C��5����2View()
{
}

BOOL C��5����2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��5����2View ����

void C��5����2View::OnDraw(CDC* pDC)
{
	C��5����2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CDC MemDC;
	MemDC.CreateCompatibleDC(NULL);
	MemDC.SelectObject(m_Bitmap);
	pDC->BitBlt(0,0,m_nWidth,m_nHeight,&MemDC,0,0,SRCCOPY);

}


// C��5����2View ���

#ifdef _DEBUG
void C��5����2View::AssertValid() const
{
	CView::AssertValid();
}

void C��5����2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��5����2Doc* C��5����2View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��5����2Doc)));
	return (C��5����2Doc*)m_pDocument;
}
#endif //_DEBUG


// C��5����2View ��Ϣ�������
