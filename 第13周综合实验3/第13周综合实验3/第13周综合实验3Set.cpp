
// ��13���ۺ�ʵ��3Set.cpp : C��13���ۺ�ʵ��3Set ���ʵ��
//

#include "stdafx.h"
#include "��13���ۺ�ʵ��3.h"
#include "��13���ۺ�ʵ��3Set.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��13���ۺ�ʵ��3Set ʵ��

// ���������� 2020��5��19��, 16:12

IMPLEMENT_DYNAMIC(C��13���ۺ�ʵ��3Set, CRecordset)

C��13���ۺ�ʵ��3Set::C��13���ۺ�ʵ��3Set(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	m_1 = 0;
	m_nFields = 2;
	m_nDefaultType = dynaset;
}
  //#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ6
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString C��13���ۺ�ʵ��3Set::GetDefaultConnect()
{
	return _T("DBQ=D:\\vs-\x6570\x636e\x5e93\\Database3.mdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString C��13���ۺ�ʵ��3Set::GetDefaultSQL()
{
	return _T("[�ۺ�ʵ��3]");
}

void C��13���ۺ�ʵ��3Set::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Long(pFX, _T("[�ֶ�1]"), m_1);

}
/////////////////////////////////////////////////////////////////////////////
// C��13���ۺ�ʵ��3Set ���

#ifdef _DEBUG
void C��13���ۺ�ʵ��3Set::AssertValid() const
{
	CRecordset::AssertValid();
}

void C��13���ۺ�ʵ��3Set::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

