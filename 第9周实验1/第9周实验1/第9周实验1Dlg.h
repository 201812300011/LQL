
// ��9��ʵ��1Dlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"


// C��9��ʵ��1Dlg �Ի���
class C��9��ʵ��1Dlg : public CDialogEx
{
// ����
public:
	C��9��ʵ��1Dlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MY91_DIALOG };
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
	afx_msg void OnBnClickedButton1();
	CString s;
	CListBox LBox;
	afx_msg void OnLbnSelchangeList1();
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
};
