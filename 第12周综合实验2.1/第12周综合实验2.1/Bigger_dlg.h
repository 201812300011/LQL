#pragma once


// Bigger_dlg 对话框

class Bigger_dlg : public CDialogEx
{
	DECLARE_DYNAMIC(Bigger_dlg)

public:
	Bigger_dlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~Bigger_dlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Bigger };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
};
