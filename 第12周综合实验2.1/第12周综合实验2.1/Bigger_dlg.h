#pragma once


// Bigger_dlg �Ի���

class Bigger_dlg : public CDialogEx
{
	DECLARE_DYNAMIC(Bigger_dlg)

public:
	Bigger_dlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Bigger_dlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Bigger };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
};
