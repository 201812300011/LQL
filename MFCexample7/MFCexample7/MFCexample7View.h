
// MFCexample7View.h : CMFCexample7View 类的接口
//

#pragma once


class CMFCexample7View : public CView
{
protected: // 仅从序列化创建
	CMFCexample7View();
	DECLARE_DYNCREATE(CMFCexample7View)

// 特性
public:
	CMFCexample7Doc* GetDocument() const;

// 操作
public:
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFCexample7View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnMButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFCexample7View.cpp 中的调试版本
inline CMFCexample7Doc* CMFCexample7View::GetDocument() const
   { return reinterpret_cast<CMFCexample7Doc*>(m_pDocument); }
#endif

