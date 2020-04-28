
// MFCexample6View.h : CMFCexample6View 类的接口
//

#pragma once


class CMFCexample6View : public CView
{
protected: // 仅从序列化创建
	CMFCexample6View();
	DECLARE_DYNCREATE(CMFCexample6View)

// 特性
public:
	CMFCexample6Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFCexample6View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFCexample6View.cpp 中的调试版本
inline CMFCexample6Doc* CMFCexample6View::GetDocument() const
   { return reinterpret_cast<CMFCexample6Doc*>(m_pDocument); }
#endif

