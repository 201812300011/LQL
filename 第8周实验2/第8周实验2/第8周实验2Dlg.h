
// ��8��ʵ��2Dlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"


// C��8��ʵ��2Dlg �Ի���
class C��8��ʵ��2Dlg : public CDialogEx
{
// ����
public:
	C��8��ʵ��2Dlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MY82_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	float x;
	float y;
	CComboBox select;
	CListBox result;
	afx_msg void OnBnClickedButton1();
};
