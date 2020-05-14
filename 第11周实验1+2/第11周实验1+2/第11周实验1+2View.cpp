
// ��11��ʵ��1+2View.cpp : C��11��ʵ��12View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��11��ʵ��1+2.h"
#endif

#include "��11��ʵ��1+2Set.h"
#include "��11��ʵ��1+2Doc.h"
#include "��11��ʵ��1+2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��11��ʵ��12View

IMPLEMENT_DYNCREATE(C��11��ʵ��12View, CRecordView)

BEGIN_MESSAGE_MAP(C��11��ʵ��12View, CRecordView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CRecordView::OnFilePrintPreview)
	ON_BN_CLICKED(IDC_BUTTON1, &C��11��ʵ��12View::OnBnClickedButton1)
END_MESSAGE_MAP()

// C��11��ʵ��12View ����/����

C��11��ʵ��12View::C��11��ʵ��12View()
	: CRecordView(IDD_MY1112_FORM)
	, ID(0)
	, number(_T(""))
	, name(_T(""))
	, major(_T(""))
	, phone(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

C��11��ʵ��12View::~C��11��ʵ��12View()
{
}

void C��11��ʵ��12View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_ID);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->m_1);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->m_2);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->m_3);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->m_4);
}

BOOL C��11��ʵ��12View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void C��11��ʵ��12View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_��11��ʵ��12Set;
	CRecordView::OnInitialUpdate();

}


// C��11��ʵ��12View ��ӡ

BOOL C��11��ʵ��12View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void C��11��ʵ��12View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void C��11��ʵ��12View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// C��11��ʵ��12View ���

#ifdef _DEBUG
void C��11��ʵ��12View::AssertValid() const
{
	CRecordView::AssertValid();
}

void C��11��ʵ��12View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

C��11��ʵ��12Doc* C��11��ʵ��12View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��11��ʵ��12Doc)));
	return (C��11��ʵ��12Doc*)m_pDocument;
}
#endif //_DEBUG


// C��11��ʵ��12View ���ݿ�֧��
CRecordset* C��11��ʵ��12View::OnGetRecordset()
{
	return m_pSet;
}



// C��11��ʵ��12View ��Ϣ�������


void C��11��ʵ��12View::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CString s;
	CClientDC dc(this);
	m_pSet->GetFieldValue(short(5),s);////�Ӽ�¼����ǰ��¼����ȡ��5���ֶ�ֵ������s�� 
	CImage img;
	img.Load(s);
	CDC* pDC = GetDlgItem(IDC_STATIC)->GetDC();
	int sx, sy, w, h;
	CRect rect;
	GetDlgItem(IDC_STATIC)->GetClientRect(&rect);

	float rect_ratio = 1.0*rect.Width() / rect.Height();
	float img_ratio = 1.0*img.GetWidth() / img.GetHeight();
	if (rect_ratio > img_ratio)
	{
		h = rect.Height();
		w = img_ratio*h;
		sx = (rect.Width() - w) / 2;
		sy = 0;
	}
	else
	{
		w = rect.Width();
		h = w / img_ratio;
		sx = 0;
		sy = (rect.Height()-h)/2;
	}
	pDC->SetStretchBltMode(HALFTONE);
	img.Draw(dc.m_hDC,sx,sy,w,h);
	ReleaseDC(pDC);
	Invalidate();
}

/*
void C��11��ʵ��12View::draw_pic(CString file)
{
	CImage img;
	img.Load(file);
	CDC* pDC = GetDlgItem(IDC_STATIC)->GetDC();
	int sx, sy, w, h;
	CRect rect;
	GetDlgItem(IDC_STATIC)->GetClientRect(&rect);

	float rect_ratio = 1.0*rect.Width() / rect.Height();
	float img_ratio = 1.0*img.GetWidth() / img.GetHeight();
}
*/