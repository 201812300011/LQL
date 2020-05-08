
// 第8周实验1.2View.h : C第8周实验12View 类的接口
//

#pragma once


class C第8周实验12View : public CView
{
protected: // 仅从序列化创建
	C第8周实验12View();
	DECLARE_DYNCREATE(C第8周实验12View)

// 特性
public:
	C第8周实验12Doc* GetDocument() const;

// 操作
public:
	CString filename;
	int t;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C第8周实验12View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnShowfilename();
};

#ifndef _DEBUG  // 第8周实验1.2View.cpp 中的调试版本
inline C第8周实验12Doc* C第8周实验12View::GetDocument() const
   { return reinterpret_cast<C第8周实验12Doc*>(m_pDocument); }
#endif

