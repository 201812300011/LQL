
// 第5周实验2View.cpp : C第5周实验2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第5周实验2.h"
#endif

#include "第5周实验2Doc.h"
#include "第5周实验2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第5周实验2View

IMPLEMENT_DYNCREATE(C第5周实验2View, CView)

BEGIN_MESSAGE_MAP(C第5周实验2View, CView)
	ON_COMMAND(ID_CHANGECIRCLE, &C第5周实验2View::OnChangecircle)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// C第5周实验2View 构造/析构

C第5周实验2View::C第5周实验2View()
{
	// TODO: 在此处添加构造代码
	set = true;
	flag = 0;
}

C第5周实验2View::~C第5周实验2View()
{
}

BOOL C第5周实验2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C第5周实验2View 绘制

void C第5周实验2View::OnDraw(CDC* pDC)
{
	C第5周实验2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	if (flag == 1) {
		if (set)
		{
			GetClientRect(&clientrect);//获取客户区尺寸
			center = clientrect.CenterPoint();//客户区中心
			r.SetRect((center.x - 100), (center.y - 100), (center.x + 100), (center.y + 100));//重新画矩形
			SetTimer(1, 50, NULL);//定时器
			set = false;
		}
		CPen pen(PS_SOLID, 5, RGB(rand() % 255, rand() % 255, rand() % 255));
		CPen *p;
		p = pDC->SelectObject(&pen);
		pDC->Ellipse(r);
	}
}


// C第5周实验2View 诊断

#ifdef _DEBUG
void C第5周实验2View::AssertValid() const
{
	CView::AssertValid();
}

void C第5周实验2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C第5周实验2Doc* C第5周实验2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第5周实验2Doc)));
	return (C第5周实验2Doc*)m_pDocument;
}
#endif //_DEBUG


// C第5周实验2View 消息处理程序


void C第5周实验2View::OnChangecircle()
{
	// TODO: 在此添加命令处理程序代码
	// 这个是菜单中渐变大小园的程序
	flag = 1;
	Invalidate();
	set = true;
}


void C第5周实验2View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	int i = nIDEvent;
	CClientDC dc(this);
	if (r.bottom <= clientrect.bottom&&r.left >= 0)
	{
		r.top -= 10;
		r.left -= 10;
		r.bottom += 10;
		r.right += 10;
		CPen pen(PS_SOLID, 5, RGB(rand() % 255, rand() % 255, rand() % 255));
		CPen *p;
		p = dc.SelectObject(&pen);
		dc.Ellipse(r);
		Invalidate();
	}
	else
	{
		flag = 0;
		KillTimer(i);
		r.SetRect((center.x - 100), (center.y - 100), (center.x + 100), (center.y + 100));
	}
	CView::OnTimer(nIDEvent);
}
