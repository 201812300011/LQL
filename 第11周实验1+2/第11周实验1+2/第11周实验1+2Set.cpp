
// ��11��ʵ��1+2Set.cpp : C��11��ʵ��12Set ���ʵ��
//

#include "stdafx.h"
#include "��11��ʵ��1+2.h"
#include "��11��ʵ��1+2Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��11��ʵ��12Set ʵ��

// ���������� 2020��5��12��, 21:49

IMPLEMENT_DYNAMIC(C��11��ʵ��12Set, CRecordset)

C��11��ʵ��12Set::C��11��ʵ��12Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	m_1 = L"";
	m_2 = L"";
	m_3 = L"";
	m_4 = L"";
	m_5 = L"";
	m_nFields = 6;
	m_nDefaultType = snapshot;
}
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString C��11��ʵ��12Set::GetDefaultConnect()
{
	return _T("DSN=\x6570\x636e\x6e90-\x5b66\x751f\x4fe1\x606f\x9884\x89c8\x8868;DBQ=D:\\vs\\Database2.mdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString C��11��ʵ��12Set::GetDefaultSQL()
{
	return _T("[����Դ_ѧ����Ϣһ����]");
}

void C��11��ʵ��12Set::DoFieldExchange(CFieldExchange* pFX)
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

}
/////////////////////////////////////////////////////////////////////////////
// C��11��ʵ��12Set ���

#ifdef _DEBUG
void C��11��ʵ��12Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void C��11��ʵ��12Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

