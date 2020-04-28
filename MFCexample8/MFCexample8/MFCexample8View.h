
// MFCexample8View.h : CMFCexample8View 类的接口
//

#pragma once


class CMFCexample8View : public CView
{
protected: // 仅从序列化创建
	CMFCexample8View();
	DECLARE_DYNCREATE(CMFCexample8View)

// 特性
public:
	CMFCexample8Doc* GetDocument() const;

// 操作
public:
	
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFCexample8View();
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

#ifndef _DEBUG  // MFCexample8View.cpp 中的调试版本
inline CMFCexample8Doc* CMFCexample8View::GetDocument() const
   { return reinterpret_cast<CMFCexample8Doc*>(m_pDocument); }
#endif

