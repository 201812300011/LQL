
// ��14��ѧ����Ϣ����ϵͳSet.cpp : C��14��ѧ����Ϣ����ϵͳSet ���ʵ��
//

#include "stdafx.h"
#include "��14��ѧ����Ϣ����ϵͳ.h"
#include "��14��ѧ����Ϣ����ϵͳSet.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��14��ѧ����Ϣ����ϵͳSet ʵ��

// ���������� 2020��6��22��, 16:16

IMPLEMENT_DYNAMIC(C��14��ѧ����Ϣ����ϵͳSet, CRecordset)

C��14��ѧ����Ϣ����ϵͳSet::C��14��ѧ����Ϣ����ϵͳSet(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	m_1 = L"";
	m_2 = L"";
	m_3 = L"";
	m_4 = L"";
	m_5 = L"";
	m_6 = L"";
	m_7 = L"";
	m_8 = L"";
	m_nFields = 9;
	m_nDefaultType = snapshot;
}
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString C��14��ѧ����Ϣ����ϵͳSet::GetDefaultConnect()
{
	return _T("DSN=\x5b66\x751f\x4fe1\x606f\x7ba1\x7406\x7cfb\x7edf-\x6570\x636e\x6e90;DBQ=D:\\vs-\x6570\x636e\x5e93\\Database5.mdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString C��14��ѧ����Ϣ����ϵͳSet::GetDefaultSQL()
{
	return _T("[ѧ����Ϣ����ϵͳ]");
}

void C��14��ѧ����Ϣ����ϵͳSet::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[�ֶ�1]"), m_1);
	RFX_Text(pFX, _T("[�ֶ�2]"), m_2);
	RFX_Text(pFX, _T("[�ֶ�3]"), m_3);
	RFX_Text(pFX, _T("[�ֶ�4]"), m_4);
	RFX_Text(pFX, _T("[�ֶ�5]"), m_5);
	RFX_Text(pFX, _T("[�ֶ�6]"), m_6);
	RFX_Text(pFX, _T("[�ֶ�7]"), m_7);
	RFX_Text(pFX, _T("[�ֶ�8]"), m_8);

}
/////////////////////////////////////////////////////////////////////////////
// C��14��ѧ����Ϣ����ϵͳSet ���

#ifdef _DEBUG
void C��14��ѧ����Ϣ����ϵͳSet::AssertValid() const
{
	CRecordset::AssertValid();
}

void C��14��ѧ����Ϣ����ϵͳSet::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

