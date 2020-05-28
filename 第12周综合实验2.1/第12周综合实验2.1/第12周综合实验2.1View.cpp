
// ��12���ۺ�ʵ��2.1View.cpp : C��12���ۺ�ʵ��21View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��12���ۺ�ʵ��2.1.h"
#endif

#include "��12���ۺ�ʵ��2.1Set.h"
#include "��12���ۺ�ʵ��2.1Doc.h"
#include "��12���ۺ�ʵ��2.1View.h"
#include "Bigger_dlg.h"//���ͷ�ļ�

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��12���ۺ�ʵ��21View

IMPLEMENT_DYNCREATE(C��12���ۺ�ʵ��21View, CRecordView)

BEGIN_MESSAGE_MAP(C��12���ۺ�ʵ��21View, CRecordView)
	ON_COMMAND(ID_RECORD_FIRST, &C��12���ۺ�ʵ��21View::OnRecordFirst)
	ON_COMMAND(ID_RECORD_PREV, &C��12���ۺ�ʵ��21View::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &C��12���ۺ�ʵ��21View::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &C��12���ۺ�ʵ��21View::OnRecordLast)
	ON_WM_PAINT()
	ON_BN_CLICKED(IDC_BUTTON1, &C��12���ۺ�ʵ��21View::OnBnClickedButton1)
END_MESSAGE_MAP()

// C��12���ۺ�ʵ��21View ����/����

C��12���ۺ�ʵ��21View::C��12���ۺ�ʵ��21View()
	: CRecordView(IDD_MY1221_FORM)
	, filename(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������
	path = _T("D:\\011\\");
}

C��12���ۺ�ʵ��21View::~C��12���ۺ�ʵ��21View()
{
}

void C��12���ۺ�ʵ��21View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_1);
}

BOOL C��12���ۺ�ʵ��21View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void C��12���ۺ�ʵ��21View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_��12���ۺ�ʵ��21Set;
	CRecordView::OnInitialUpdate();

}


// C��12���ۺ�ʵ��21View ���

#ifdef _DEBUG
void C��12���ۺ�ʵ��21View::AssertValid() const
{
	CRecordView::AssertValid();
}

void C��12���ۺ�ʵ��21View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

C��12���ۺ�ʵ��21Doc* C��12���ۺ�ʵ��21View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��12���ۺ�ʵ��21Doc)));
	return (C��12���ۺ�ʵ��21Doc*)m_pDocument;
}
#endif //_DEBUG


// C��12���ۺ�ʵ��21View ���ݿ�֧��
CRecordset* C��12���ۺ�ʵ��21View::OnGetRecordset()
{
	return m_pSet;
}



// C��12���ۺ�ʵ��21View ��Ϣ�������


void C��12���ۺ�ʵ��21View::OnRecordFirst()
{
	// TODO: �ڴ���������������
	m_pSet->MoveFirst();
	UpdateData(false);
	GetDlgItem(IDC_STATIC)->ShowWindow(FALSE);
	GetDlgItem(IDC_STATIC)->ShowWindow(TRUE);
	CRect cr;
	GetDlgItem(IDC_STATIC)->GetClientRect(&cr);
	InvalidateRect(cr);
}


void C��12���ۺ�ʵ��21View::OnRecordPrev()
{
	// TODO: �ڴ���������������
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
		m_pSet->MoveFirst();
	UpdateData(false);
	GetDlgItem(IDC_STATIC)->ShowWindow(FALSE);
	GetDlgItem(IDC_STATIC)->ShowWindow(TRUE);
	CRect cr;
	GetDlgItem(IDC_STATIC)->GetClientRect(&cr);
	InvalidateRect(cr);
}


void C��12���ۺ�ʵ��21View::OnRecordNext()
{
	// TODO: �ڴ���������������
	m_pSet->MoveNext();
	if (m_pSet->IsEOF())
		m_pSet->MoveLast();
	UpdateData(false);
	GetDlgItem(IDC_STATIC)->ShowWindow(FALSE);
	GetDlgItem(IDC_STATIC)->ShowWindow(TRUE);
	CRect cr;
	GetDlgItem(IDC_STATIC)->GetClientRect(&cr);
	InvalidateRect(cr);
}


void C��12���ۺ�ʵ��21View::OnRecordLast()
{
	// TODO: �ڴ���������������
	m_pSet->MoveLast();
	UpdateData(false);
	GetDlgItem(IDC_STATIC)->ShowWindow(FALSE);
	GetDlgItem(IDC_STATIC)->ShowWindow(TRUE);
	CRect cr;
	GetDlgItem(IDC_STATIC)->GetClientRect(&cr);
	InvalidateRect(cr);
}


void C��12���ۺ�ʵ��21View::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: �ڴ˴������Ϣ����������
					   // ��Ϊ��ͼ��Ϣ���� CRecordView::OnPaint()
	GetDlgItemText(IDC_EDIT1, m_pSet->m_1);
	filename = path + m_pSet->m_1;
	CImage img;
	img.Load(filename);
	CDC* pDC = GetDlgItem(IDC_STATIC)->GetDC();
	int sx, sy, w, h;
	CRect rect;
	GetDlgItem(IDC_STATIC)->GetClientRect(&rect);

	float rect_ratio = 1.0*rect.Width() / rect.Height();
	float img_ratio = 1.0*img.GetWidth() / img.GetHeight();

	if (rect_ratio > img_ratio) {
		h = rect.Height();
		w = img_ratio*h;
		sx = (rect.Width() - w) / 2;
		sy = 0;
	}
	else {
		w = rect.Width();
		h = w / img_ratio;
		sx = 0;
		sy = (rect.Height() - h) / 2;
	}
	pDC->SetStretchBltMode(HALFTONE);
	img.Draw(pDC->m_hDC, sx, sy, w, h);
	//InvalidateRect(rect);
	ReleaseDC(pDC);
}


void C��12���ۺ�ʵ��21View::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	Bigger_dlg dlg;
	int t = dlg.DoModal();
}
