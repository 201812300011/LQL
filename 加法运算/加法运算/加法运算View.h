
// 加法运算View.h : C加法运算View 类的接口
//

#pragma once


class C加法运算View : public CView
{
protected: // 仅从序列化创建
	C加法运算View();
	DECLARE_DYNCREATE(C加法运算View)

// 特性
public:
	C加法运算Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C加法运算View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnAdd();
};

#ifndef _DEBUG  // 加法运算View.cpp 中的调试版本
inline C加法运算Doc* C加法运算View::GetDocument() const
   { return reinterpret_cast<C加法运算Doc*>(m_pDocument); }
#endif

