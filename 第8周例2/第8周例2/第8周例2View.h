
// 第8周例2View.h : C第8周例2View 类的接口
//

#pragma once


class C第8周例2View : public CView
{
protected: // 仅从序列化创建
	C第8周例2View();
	DECLARE_DYNCREATE(C第8周例2View)

// 特性
public:
	C第8周例2Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C第8周例2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnRButtonDblClk(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 第8周例2View.cpp 中的调试版本
inline C第8周例2Doc* C第8周例2View::GetDocument() const
   { return reinterpret_cast<C第8周例2Doc*>(m_pDocument); }
#endif

