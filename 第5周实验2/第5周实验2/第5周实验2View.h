
// 第5周实验2View.h : C第5周实验2View 类的接口
//

#pragma once


class C第5周实验2View : public CView
{
protected: // 仅从序列化创建
	C第5周实验2View();
	DECLARE_DYNCREATE(C第5周实验2View)

// 特性
public:
	C第5周实验2Doc* GetDocument() const;

// 操作
public:
	CRect r, clientrect;
	bool set;
	int flag;
	long centerx;
	long centery;
	POINT center;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C第5周实验2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnChangecircle();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // 第5周实验2View.cpp 中的调试版本
inline C第5周实验2Doc* C第5周实验2View::GetDocument() const
   { return reinterpret_cast<C第5周实验2Doc*>(m_pDocument); }
#endif

