
// 第12周综合实验2.1View.cpp : C第12周综合实验21View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第12周综合实验2.1.h"
#endif

#include "第12周综合实验2.1Set.h"
#include "第12周综合实验2.1Doc.h"
#include "第12周综合实验2.1View.h"
#include "Bigger_dlg.h"//添加头文件

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第12周综合实验21View

IMPLEMENT_DYNCREATE(C第12周综合实验21View, CRecordView)

BEGIN_MESSAGE_MAP(C第12周综合实验21View, CRecordView)
	ON_COMMAND(ID_RECORD_FIRST, &C第12周综合实验21View::OnRecordFirst)
	ON_COMMAND(ID_RECORD_PREV, &C第12周综合实验21View::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &C第12周综合实验21View::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &C第12周综合实验21View::OnRecordLast)
	ON_WM_PAINT()
	ON_BN_CLICKED(IDC_BUTTON1, &C第12周综合实验21View::OnBnClickedButton1)
END_MESSAGE_MAP()

// C第12周综合实验21View 构造/析构

C第12周综合实验21View::C第12周综合实验21View()
	: CRecordView(IDD_MY1221_FORM)
	, filename(_T(""))
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码
	path = _T("D:\\011\\");
}

C第12周综合实验21View::~C第12周综合实验21View()
{
}

void C第12周综合实验21View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_1);
}

BOOL C第12周综合实验21View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void C第12周综合实验21View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_第12周综合实验21Set;
	CRecordView::OnInitialUpdate();

}


// C第12周综合实验21View 诊断

#ifdef _DEBUG
void C第12周综合实验21View::AssertValid() const
{
	CRecordView::AssertValid();
}

void C第12周综合实验21View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

C第12周综合实验21Doc* C第12周综合实验21View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第12周综合实验21Doc)));
	return (C第12周综合实验21Doc*)m_pDocument;
}
#endif //_DEBUG


// C第12周综合实验21View 数据库支持
CRecordset* C第12周综合实验21View::OnGetRecordset()
{
	return m_pSet;
}



// C第12周综合实验21View 消息处理程序


void C第12周综合实验21View::OnRecordFirst()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveFirst();
	UpdateData(false);
	GetDlgItem(IDC_STATIC)->ShowWindow(FALSE);
	GetDlgItem(IDC_STATIC)->ShowWindow(TRUE);
	CRect cr;
	GetDlgItem(IDC_STATIC)->GetClientRect(&cr);
	InvalidateRect(cr);
}


void C第12周综合实验21View::OnRecordPrev()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
		m_pSet->MoveFirst();
	UpdateData(false);
	GetDlgItem(IDC_STATIC)->ShowWindow(FALSE);
	GetDlgItem(IDC_STATIC)->ShowWindow(TRUE);
	CRect cr;
	GetDlgItem(IDC_STATIC)->GetClientRect(&cr);
	InvalidateRect(cr);
}


void C第12周综合实验21View::OnRecordNext()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveNext();
	if (m_pSet->IsEOF())
		m_pSet->MoveLast();
	UpdateData(false);
	GetDlgItem(IDC_STATIC)->ShowWindow(FALSE);
	GetDlgItem(IDC_STATIC)->ShowWindow(TRUE);
	CRect cr;
	GetDlgItem(IDC_STATIC)->GetClientRect(&cr);
	InvalidateRect(cr);
}


void C第12周综合实验21View::OnRecordLast()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveLast();
	UpdateData(false);
	GetDlgItem(IDC_STATIC)->ShowWindow(FALSE);
	GetDlgItem(IDC_STATIC)->ShowWindow(TRUE);
	CRect cr;
	GetDlgItem(IDC_STATIC)->GetClientRect(&cr);
	InvalidateRect(cr);
}


void C第12周综合实验21View::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: 在此处添加消息处理程序代码
					   // 不为绘图消息调用 CRecordView::OnPaint()
	GetDlgItemText(IDC_EDIT1, m_pSet->m_1);
	filename = path + m_pSet->m_1;
	CImage img;
	img.Load(filename);
	CDC* pDC = GetDlgItem(IDC_STATIC)->GetDC();
	int sx, sy, w, h;
	CRect rect;
	GetDlgItem(IDC_STATIC)->GetClientRect(&rect);

	float rect_ratio = 1.0*rect.Width() / rect.Height();
	float img_ratio = 1.0*img.GetWidth() / img.GetHeight();

	if (rect_ratio > img_ratio) {
		h = rect.Height();
		w = img_ratio*h;
		sx = (rect.Width() - w) / 2;
		sy = 0;
	}
	else {
		w = rect.Width();
		h = w / img_ratio;
		sx = 0;
		sy = (rect.Height() - h) / 2;
	}
	pDC->SetStretchBltMode(HALFTONE);
	img.Draw(pDC->m_hDC, sx, sy, w, h);
	//InvalidateRect(rect);
	ReleaseDC(pDC);
}


void C第12周综合实验21View::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	Bigger_dlg dlg;
	int t = dlg.DoModal();
}
