
// MFCexample5View.h : CMFCexample5View 类的接口
//

#pragma once


class CMFCexample5View : public CView
{
protected: // 仅从序列化创建
	CMFCexample5View();
	DECLARE_DYNCREATE(CMFCexample5View)

// 特性
public:
	CMFCexample5Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFCexample5View();
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

#ifndef _DEBUG  // MFCexample5View.cpp 中的调试版本
inline CMFCexample5Doc* CMFCexample5View::GetDocument() const
   { return reinterpret_cast<CMFCexample5Doc*>(m_pDocument); }
#endif

