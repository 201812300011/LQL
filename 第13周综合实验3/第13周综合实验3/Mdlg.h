#pragma once


// Mdlg �Ի���

class Mdlg : public CDialogEx
{
	DECLARE_DYNAMIC(Mdlg)

public:
	Mdlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Mdlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Modify };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	long j;
};
