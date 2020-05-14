
// 第11周实验1+2View.cpp : C第11周实验12View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第11周实验1+2.h"
#endif

#include "第11周实验1+2Set.h"
#include "第11周实验1+2Doc.h"
#include "第11周实验1+2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第11周实验12View

IMPLEMENT_DYNCREATE(C第11周实验12View, CRecordView)

BEGIN_MESSAGE_MAP(C第11周实验12View, CRecordView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CRecordView::OnFilePrintPreview)
	ON_BN_CLICKED(IDC_BUTTON1, &C第11周实验12View::OnBnClickedButton1)
END_MESSAGE_MAP()

// C第11周实验12View 构造/析构

C第11周实验12View::C第11周实验12View()
	: CRecordView(IDD_MY1112_FORM)
	, ID(0)
	, number(_T(""))
	, name(_T(""))
	, major(_T(""))
	, phone(_T(""))
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码

}

C第11周实验12View::~C第11周实验12View()
{
}

void C第11周实验12View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_ID);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->m_1);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->m_2);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->m_3);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->m_4);
}

BOOL C第11周实验12View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void C第11周实验12View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_第11周实验12Set;
	CRecordView::OnInitialUpdate();

}


// C第11周实验12View 打印

BOOL C第11周实验12View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void C第11周实验12View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void C第11周实验12View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// C第11周实验12View 诊断

#ifdef _DEBUG
void C第11周实验12View::AssertValid() const
{
	CRecordView::AssertValid();
}

void C第11周实验12View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

C第11周实验12Doc* C第11周实验12View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第11周实验12Doc)));
	return (C第11周实验12Doc*)m_pDocument;
}
#endif //_DEBUG


// C第11周实验12View 数据库支持
CRecordset* C第11周实验12View::OnGetRecordset()
{
	return m_pSet;
}



// C第11周实验12View 消息处理程序


void C第11周实验12View::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	CString s;
	CClientDC dc(this);
	m_pSet->GetFieldValue(short(5),s);////从记录集当前记录，读取第5个字段值，放入s中 
	CImage img;
	img.Load(s);
	CDC* pDC = GetDlgItem(IDC_STATIC)->GetDC();
	int sx, sy, w, h;
	CRect rect;
	GetDlgItem(IDC_STATIC)->GetClientRect(&rect);

	float rect_ratio = 1.0*rect.Width() / rect.Height();
	float img_ratio = 1.0*img.GetWidth() / img.GetHeight();
	if (rect_ratio > img_ratio)
	{
		h = rect.Height();
		w = img_ratio*h;
		sx = (rect.Width() - w) / 2;
		sy = 0;
	}
	else
	{
		w = rect.Width();
		h = w / img_ratio;
		sx = 0;
		sy = (rect.Height()-h)/2;
	}
	pDC->SetStretchBltMode(HALFTONE);
	img.Draw(dc.m_hDC,sx,sy,w,h);
	ReleaseDC(pDC);
	Invalidate();
}

/*
void C第11周实验12View::draw_pic(CString file)
{
	CImage img;
	img.Load(file);
	CDC* pDC = GetDlgItem(IDC_STATIC)->GetDC();
	int sx, sy, w, h;
	CRect rect;
	GetDlgItem(IDC_STATIC)->GetClientRect(&rect);

	float rect_ratio = 1.0*rect.Width() / rect.Height();
	float img_ratio = 1.0*img.GetWidth() / img.GetHeight();
}
*/