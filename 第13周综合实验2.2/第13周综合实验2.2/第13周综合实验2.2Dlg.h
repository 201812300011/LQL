
// ��13���ۺ�ʵ��2.2Dlg.h : ͷ�ļ�
//

#pragma once


// C��13���ۺ�ʵ��22Dlg �Ի���
class C��13���ۺ�ʵ��22Dlg : public CDialogEx
{
// ����
public:
	C��13���ۺ�ʵ��22Dlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MY1322_DIALOG };
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
};
