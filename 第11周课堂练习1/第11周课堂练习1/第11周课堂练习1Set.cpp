
// ��11�ܿ�����ϰ1Set.cpp : C��11�ܿ�����ϰ1Set ���ʵ��
//

#include "stdafx.h"
#include "��11�ܿ�����ϰ1.h"
#include "��11�ܿ�����ϰ1Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��11�ܿ�����ϰ1Set ʵ��

// ���������� 2020��5��10��, 17:40

IMPLEMENT_DYNAMIC(C��11�ܿ�����ϰ1Set, CRecordset)

C��11�ܿ�����ϰ1Set::C��11�ܿ�����ϰ1Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	m_1 = L"";
	m_2 = L"";
	m_3 = L"";
	m_4 = L"";
	m_nFields = 5;
	m_nDefaultType = snapshot;
}
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString C��11�ܿ�����ϰ1Set::GetDefaultConnect()
{
	return _T("DSN=");
}

CString C��11�ܿ�����ϰ1Set::GetDefaultSQL()
{
	return _T("[ѧ����Ϣ��]");
}

void C��11�ܿ�����ϰ1Set::DoFieldExchange(CFieldExchange* pFX)
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

}
/////////////////////////////////////////////////////////////////////////////
// C��11�ܿ�����ϰ1Set ���

#ifdef _DEBUG
void C��11�ܿ�����ϰ1Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void C��11�ܿ�����ϰ1Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

