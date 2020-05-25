
// 第13周综合实验3View.cpp : C第13周综合实验3View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第13周综合实验3.h"
#endif

#include "第13周综合实验3Set.h"
#include "第13周综合实验3Doc.h"
#include "第13周综合实验3View.h"
#include "ADD_DLG.h"//添加头文件
#include "Mdlg.h"//添加头文件

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第13周综合实验3View

IMPLEMENT_DYNCREATE(C第13周综合实验3View, CRecordView)

BEGIN_MESSAGE_MAP(C第13周综合实验3View, CRecordView)
	ON_BN_CLICKED(IDC_BUTTON1, &C第13周综合实验3View::OnBnClickedDelete)
	ON_BN_CLICKED(IDC_BUTTON2, &C第13周综合实验3View::OnBnClickedAdd)
	ON_BN_CLICKED(IDC_BUTTON3, &C第13周综合实验3View::OnBnClickedModify)
END_MESSAGE_MAP()

// C第13周综合实验3View 构造/析构

C第13周综合实验3View::C第13周综合实验3View()
	: CRecordView(IDD_MY133_FORM)
	, number(0)
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码

}

C第13周综合实验3View::~C第13周综合实验3View()
{
}

void C第13周综合实验3View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例
	DDX_Text(pDX, IDC_EDIT1,m_pSet->m_1);
}

BOOL C第13周综合实验3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void C第13周综合实验3View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_第13周综合实验3Set;
	CRecordView::OnInitialUpdate();

}


// C第13周综合实验3View 诊断

#ifdef _DEBUG
void C第13周综合实验3View::AssertValid() const
{
	CRecordView::AssertValid();
}

void C第13周综合实验3View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

C第13周综合实验3Doc* C第13周综合实验3View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第13周综合实验3Doc)));
	return (C第13周综合实验3Doc*)m_pDocument;
}
#endif //_DEBUG


// C第13周综合实验3View 数据库支持
CRecordset* C第13周综合实验3View::OnGetRecordset()
{
	return m_pSet;
}



// C第13周综合实验3View 消息处理程序


void C第13周综合实验3View::OnBnClickedDelete()
{
	// TODO: 在此添加控件通知处理程序代码
	m_pSet->Delete();//删除
	m_pSet->MovePrev();//往前移动一位作为当前记录集
	if(m_pSet->IsBOF())//判断是不是溢出
		m_pSet->MoveFirst();
	UpdateData(false);
}


void C第13周综合实验3View::OnBnClickedAdd()
{
	// TODO: 在此添加控件通知处理程序代码
	ADD_DLG adddlg;
	int r = adddlg.DoModal();
	if (r == IDOK)
	{
		long ii = adddlg.i;//取得i的值
		m_pSet->AddNew();
		m_pSet->m_1 = ii;
		m_pSet->Update();//更新数据库
		UpdateData();
	}
}


void C第13周综合实验3View::OnBnClickedModify()
{
	// TODO: 在此添加控件通知处理程序代码
	Mdlg dlg;
	a = m_pSet->m_1;//取当前记录集的值
	int t = dlg.DoModal();
	if (t == IDOK)
	{
		long jj = dlg.j;//将修改后的值赋给记录集
		m_pSet->Edit();
		m_pSet->m_1 = jj;
		m_pSet->Update();//更新数据库（也叫记录集）
		UpdateData();
	}
}
