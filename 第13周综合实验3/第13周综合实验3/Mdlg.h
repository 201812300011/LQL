#pragma once


// Mdlg 对话框

class Mdlg : public CDialogEx
{
	DECLARE_DYNAMIC(Mdlg)

public:
	Mdlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~Mdlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_Modify };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	long j;
};
