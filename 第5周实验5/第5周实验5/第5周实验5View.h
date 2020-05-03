
// 第5周实验5View.h : C第5周实验5View 类的接口
//

#pragma once


class C第5周实验5View : public CView
{
protected: // 仅从序列化创建
	C第5周实验5View();
	DECLARE_DYNCREATE(C第5周实验5View)

// 特性
public:
	C第5周实验5Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C第5周实验5View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnDrawline();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnDrawrectangle();
	afx_msg void OnDrawellipse();
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 第5周实验5View.cpp 中的调试版本
inline C第5周实验5Doc* C第5周实验5View::GetDocument() const
   { return reinterpret_cast<C第5周实验5Doc*>(m_pDocument); }
#endif

