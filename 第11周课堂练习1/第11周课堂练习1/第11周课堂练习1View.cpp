
// ��11�ܿ�����ϰ1View.cpp : C��11�ܿ�����ϰ1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��11�ܿ�����ϰ1.h"
#endif

#include "��11�ܿ�����ϰ1Set.h"
#include "��11�ܿ�����ϰ1Doc.h"
#include "��11�ܿ�����ϰ1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��11�ܿ�����ϰ1View

IMPLEMENT_DYNCREATE(C��11�ܿ�����ϰ1View, CRecordView)

BEGIN_MESSAGE_MAP(C��11�ܿ�����ϰ1View, CRecordView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CRecordView::OnFilePrintPreview)
END_MESSAGE_MAP()

// C��11�ܿ�����ϰ1View ����/����

C��11�ܿ�����ϰ1View::C��11�ܿ�����ϰ1View()
	: CRecordView(IDD_MY111_FORM)
	, ID(0)
	, name(_T(""))
	, age(_T(""))
	, number(_T(""))
	, phone(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

C��11�ܿ�����ϰ1View::~C��11�ܿ�����ϰ1View()
{
}

void C��11�ܿ�����ϰ1View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_ID);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->m_1);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->m_3);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->m_2);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->m_4);
}

BOOL C��11�ܿ�����ϰ1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void C��11�ܿ�����ϰ1View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_��11�ܿ�����ϰ1Set;
	CRecordView::OnInitialUpdate();

}


// C��11�ܿ�����ϰ1View ��ӡ

BOOL C��11�ܿ�����ϰ1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void C��11�ܿ�����ϰ1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void C��11�ܿ�����ϰ1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// C��11�ܿ�����ϰ1View ���

#ifdef _DEBUG
void C��11�ܿ�����ϰ1View::AssertValid() const
{
	CRecordView::AssertValid();
}

void C��11�ܿ�����ϰ1View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

C��11�ܿ�����ϰ1Doc* C��11�ܿ�����ϰ1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��11�ܿ�����ϰ1Doc)));
	return (C��11�ܿ�����ϰ1Doc*)m_pDocument;
}
#endif //_DEBUG


// C��11�ܿ�����ϰ1View ���ݿ�֧��
CRecordset* C��11�ܿ�����ϰ1View::OnGetRecordset()
{
	return m_pSet;
}



// C��11�ܿ�����ϰ1View ��Ϣ�������
