
// ��14��ѧ����Ϣ����ϵͳView.cpp : C��14��ѧ����Ϣ����ϵͳView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��14��ѧ����Ϣ����ϵͳ.h"
#endif

#include "��14��ѧ����Ϣ����ϵͳSet.h"
#include "��14��ѧ����Ϣ����ϵͳDoc.h"
#include "��14��ѧ����Ϣ����ϵͳView.h"
#include "Bigger_dlg.h"//����ͷ�ļ�
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��14��ѧ����Ϣ����ϵͳView

IMPLEMENT_DYNCREATE(C��14��ѧ����Ϣ����ϵͳView, CRecordView)

BEGIN_MESSAGE_MAP(C��14��ѧ����Ϣ����ϵͳView, CRecordView)
	ON_COMMAND(ID_RECORD_FIRST, &C��14��ѧ����Ϣ����ϵͳView::OnRecordFirst)
	ON_COMMAND(ID_RECORD_PREV, &C��14��ѧ����Ϣ����ϵͳView::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &C��14��ѧ����Ϣ����ϵͳView::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &C��14��ѧ����Ϣ����ϵͳView::OnRecordLast)
	ON_WM_PAINT()
	ON_BN_CLICKED(IDC_BUTTON1, &C��14��ѧ����Ϣ����ϵͳView::OnBnClickedButton1)
END_MESSAGE_MAP()

// C��14��ѧ����Ϣ����ϵͳView ����/����

C��14��ѧ����Ϣ����ϵͳView::C��14��ѧ����Ϣ����ϵͳView()
	: CRecordView(IDD_MY14_FORM)
	//, ID(0)
	, name(_T(""))
	, number(_T(""))
	, major(_T(""))
	, sex(_T(""))
	, birthday(_T(""))
	, phone(_T(""))
	, address(_T(""))
	, picture(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������
	path = _T("D:\\011\\");//ͼƬ�����ļ��е�λ��

}

C��14��ѧ����Ϣ����ϵͳView::~C��14��ѧ����Ϣ����ϵͳView()
{
}

void C��14��ѧ����Ϣ����ϵͳView::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	//DDX_Text(pDX, IDC_EDIT1, m_pSet->m_ID);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->m_1);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->m_2);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->m_3);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->m_4);
	DDX_Text(pDX, IDC_EDIT6, m_pSet->m_5);
	DDX_Text(pDX, IDC_EDIT7, m_pSet->m_6);
	DDX_Text(pDX, IDC_EDIT8, m_pSet->m_7);
	DDX_Text(pDX, IDC_EDIT9, m_pSet->m_8);
}

BOOL C��14��ѧ����Ϣ����ϵͳView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void C��14��ѧ����Ϣ����ϵͳView::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_��14��ѧ����Ϣ����ϵͳSet;
	CRecordView::OnInitialUpdate();

}


// C��14��ѧ����Ϣ����ϵͳView ���

#ifdef _DEBUG
void C��14��ѧ����Ϣ����ϵͳView::AssertValid() const
{
	CRecordView::AssertValid();
}

void C��14��ѧ����Ϣ����ϵͳView::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

C��14��ѧ����Ϣ����ϵͳDoc* C��14��ѧ����Ϣ����ϵͳView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��14��ѧ����Ϣ����ϵͳDoc)));
	return (C��14��ѧ����Ϣ����ϵͳDoc*)m_pDocument;
}
#endif //_DEBUG


// C��14��ѧ����Ϣ����ϵͳView ���ݿ�֧��
CRecordset* C��14��ѧ����Ϣ����ϵͳView::OnGetRecordset()
{
	return m_pSet;
}



// C��14��ѧ����Ϣ����ϵͳView ��Ϣ�������


void C��14��ѧ����Ϣ����ϵͳView::OnRecordFirst()
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


void C��14��ѧ����Ϣ����ϵͳView::OnRecordPrev()
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


void C��14��ѧ����Ϣ����ϵͳView::OnRecordNext()
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


void C��14��ѧ����Ϣ����ϵͳView::OnRecordLast()
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


void C��14��ѧ����Ϣ����ϵͳView::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: �ڴ˴������Ϣ����������
					   // ��Ϊ��ͼ��Ϣ���� CRecordView::OnPaint()
	CString picture, s;
	GetDlgItemText(IDC_EDIT9, m_pSet->m_8);
	picture = path + m_pSet->m_8;
	CImage img;
	img.Load(picture);
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
	ReleaseDC(pDC);
}


void C��14��ѧ����Ϣ����ϵͳView::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	Bigger_dlg dlg;
	int t = dlg.DoModal();
}
