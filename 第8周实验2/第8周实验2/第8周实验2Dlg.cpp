
// ��8��ʵ��2Dlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "��8��ʵ��2.h"
#include "��8��ʵ��2Dlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// ����Ӧ�ó��򡰹��ڡ��˵���� CAboutDlg �Ի���

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

// ʵ��
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


// C��8��ʵ��2Dlg �Ի���



C��8��ʵ��2Dlg::C��8��ʵ��2Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_MY82_DIALOG, pParent)
	, x(0)
	, y(0)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void C��8��ʵ��2Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, x);
	DDX_Text(pDX, IDC_EDIT2, y);
	DDX_Control(pDX, IDC_COMBO1, select);
	DDX_Control(pDX, IDC_LIST2, result);
}

BEGIN_MESSAGE_MAP(C��8��ʵ��2Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &C��8��ʵ��2Dlg::OnBnClickedButton1)
END_MESSAGE_MAP()


// C��8��ʵ��2Dlg ��Ϣ�������

BOOL C��8��ʵ��2Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	select.AddString(_T("+"));
	select.AddString(_T("-"));
	select.AddString(_T("*"));
	select.AddString(_T("��"));
	select.AddString(_T("��ƽ��"));
	select.AddString(_T("����"));
	select.SetCurSel(0);
	x = 0; y = 0;

	// ��������...���˵�����ӵ�ϵͳ�˵��С�

	// IDM_ABOUTBOX ������ϵͳ���Χ�ڡ�
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

	// ���ô˶Ի����ͼ�ꡣ  ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	// TODO: �ڴ���Ӷ���ĳ�ʼ������

	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
}

void C��8��ʵ��2Dlg::OnSysCommand(UINT nID, LPARAM lParam)
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

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ  ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void C��8��ʵ��2Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // ���ڻ��Ƶ��豸������

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ʹͼ���ڹ����������о���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ����ͼ��
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
HCURSOR C��8��ʵ��2Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void C��8��ʵ��2Dlg::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	this->UpdateData(true);//ǰ̨���ݴ洢�ں�̨
	result.ResetContent();//��ÿ�ε�����㰴ťʱ������listox�е���Ϣ
	int index = select.GetCurSel(); // ȡ�õ�ǰ��ѡ��¼��	
	CString s, str;
	float r;
	select.GetLBText(index,str);  // ��ȡ�б��A�ĵ�index���ַ����������뻺��str�� 
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
	if (str == _T("��"))
	{
		if (y != 0)
			r = x / y;
		else
		{
			result.AddString(_T("������������Ϊ0��"));
			return;
		}
	}
	if (str == _T("��ƽ��"))
	{
		y = 0;
		if (x > 0)
			r = sqrt(x);
		else
		{
			result.AddString(_T("��������������С��0��"));
			return;
		}
	}
	if (str == _T("����"))
	{
		y=0;
		if (x != 0)
			r = 1 / x;
		else
		{
			result.AddString(_T("0û�е�����"));
			return;
		}
	}
	s.Format(_T("%5.2f"),r);
	result.AddString(s);
	UpdateData(false);//��̨�������͵�ǰ̨��ʾ
}
