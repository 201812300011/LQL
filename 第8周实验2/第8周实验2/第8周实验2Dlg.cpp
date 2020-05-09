
// 第8周实验2Dlg.cpp : 实现文件
//

#include "stdafx.h"
#include "第8周实验2.h"
#include "第8周实验2Dlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// C第8周实验2Dlg 对话框



C第8周实验2Dlg::C第8周实验2Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_MY82_DIALOG, pParent)
	, x(0)
	, y(0)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void C第8周实验2Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, x);
	DDX_Text(pDX, IDC_EDIT2, y);
	DDX_Control(pDX, IDC_COMBO1, select);
	DDX_Control(pDX, IDC_LIST2, result);
}

BEGIN_MESSAGE_MAP(C第8周实验2Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &C第8周实验2Dlg::OnBnClickedButton1)
END_MESSAGE_MAP()


// C第8周实验2Dlg 消息处理程序

BOOL C第8周实验2Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	select.AddString(_T("+"));
	select.AddString(_T("-"));
	select.AddString(_T("*"));
	select.AddString(_T("÷"));
	select.AddString(_T("开平方"));
	select.AddString(_T("求倒数"));
	select.SetCurSel(0);
	x = 0; y = 0;

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void C第8周实验2Dlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void C第8周实验2Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR C第8周实验2Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void C第8周实验2Dlg::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	this->UpdateData(true);//前台数据存储在后台
	result.ResetContent();//在每次点击计算按钮时先重置listox中的消息
	int index = select.GetCurSel(); // 取得当前所选记录号	
	CString s, str;
	float r;
	select.GetLBText(index,str);  // 获取列表框A的第index项字符串，并存入缓存str中 
	if (str == _T("+"))
	{
		r = x + y;
	}
	if (str == _T("-"))
	{
		r = x - y;
	}
	if (str == _T("*"))
	{
		r = x * y;
	}
	if (str == _T("÷"))
	{
		if (y != 0)
			r = x / y;
		else
		{
			result.AddString(_T("被除数不可以为0！"));
			return;
		}
	}
	if (str == _T("开平方"))
	{
		y = 0;
		if (x > 0)
			r = sqrt(x);
		else
		{
			result.AddString(_T("被开方数不可以小于0！"));
			return;
		}
	}
	if (str == _T("求倒数"))
	{
		y=0;
		if (x != 0)
			r = 1 / x;
		else
		{
			result.AddString(_T("0没有倒数！"));
			return;
		}
	}
	s.Format(_T("%5.2f"),r);
	result.AddString(s);
	UpdateData(false);//后台数据推送到前台显示
}
