
// ��13���ۺ�ʵ��3View.cpp : C��13���ۺ�ʵ��3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��13���ۺ�ʵ��3.h"
#endif

#include "��13���ۺ�ʵ��3Set.h"
#include "��13���ۺ�ʵ��3Doc.h"
#include "��13���ۺ�ʵ��3View.h"
#include "ADD_DLG.h"//���ͷ�ļ�
#include "Mdlg.h"//���ͷ�ļ�

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��13���ۺ�ʵ��3View

IMPLEMENT_DYNCREATE(C��13���ۺ�ʵ��3View, CRecordView)

BEGIN_MESSAGE_MAP(C��13���ۺ�ʵ��3View, CRecordView)
	ON_BN_CLICKED(IDC_BUTTON1, &C��13���ۺ�ʵ��3View::OnBnClickedDelete)
	ON_BN_CLICKED(IDC_BUTTON2, &C��13���ۺ�ʵ��3View::OnBnClickedAdd)
	ON_BN_CLICKED(IDC_BUTTON3, &C��13���ۺ�ʵ��3View::OnBnClickedModify)
END_MESSAGE_MAP()

// C��13���ۺ�ʵ��3View ����/����

C��13���ۺ�ʵ��3View::C��13���ۺ�ʵ��3View()
	: CRecordView(IDD_MY133_FORM)
	, number(0)
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

C��13���ۺ�ʵ��3View::~C��13���ۺ�ʵ��3View()
{
}

void C��13���ۺ�ʵ��3View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1,m_pSet->m_1);
}

BOOL C��13���ۺ�ʵ��3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void C��13���ۺ�ʵ��3View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_��13���ۺ�ʵ��3Set;
	CRecordView::OnInitialUpdate();

}


// C��13���ۺ�ʵ��3View ���

#ifdef _DEBUG
void C��13���ۺ�ʵ��3View::AssertValid() const
{
	CRecordView::AssertValid();
}

void C��13���ۺ�ʵ��3View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

C��13���ۺ�ʵ��3Doc* C��13���ۺ�ʵ��3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��13���ۺ�ʵ��3Doc)));
	return (C��13���ۺ�ʵ��3Doc*)m_pDocument;
}
#endif //_DEBUG


// C��13���ۺ�ʵ��3View ���ݿ�֧��
CRecordset* C��13���ۺ�ʵ��3View::OnGetRecordset()
{
	return m_pSet;
}



// C��13���ۺ�ʵ��3View ��Ϣ�������


void C��13���ۺ�ʵ��3View::OnBnClickedDelete()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	m_pSet->Delete();//ɾ��
	m_pSet->MovePrev();//��ǰ�ƶ�һλ��Ϊ��ǰ��¼��
	if(m_pSet->IsBOF())//�ж��ǲ������
		m_pSet->MoveFirst();
	UpdateData(false);
}


void C��13���ۺ�ʵ��3View::OnBnClickedAdd()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	ADD_DLG adddlg;
	int r = adddlg.DoModal();
	if (r == IDOK)
	{
		long ii = adddlg.i;//ȡ��i��ֵ
		m_pSet->AddNew();
		m_pSet->m_1 = ii;
		m_pSet->Update();//�������ݿ�
		UpdateData();
	}
}


void C��13���ۺ�ʵ��3View::OnBnClickedModify()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	Mdlg dlg;
	a = m_pSet->m_1;//ȡ��ǰ��¼����ֵ
	int t = dlg.DoModal();
	if (t == IDOK)
	{
		long jj = dlg.j;//���޸ĺ��ֵ������¼��
		m_pSet->Edit();
		m_pSet->m_1 = jj;
		m_pSet->Update();//�������ݿ⣨Ҳ�м�¼����
		UpdateData();
	}
}
