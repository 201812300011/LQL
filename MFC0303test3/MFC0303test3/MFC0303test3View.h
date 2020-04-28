
// MFC0303test3View.h : CMFC0303test3View 类的接口
//

#pragma once


class CMFC0303test3View : public CView
{
protected: // 仅从序列化创建
	CMFC0303test3View();
	DECLARE_DYNCREATE(CMFC0303test3View)

// 特性
public:
	CMFC0303test3Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFC0303test3View();
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
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFC0303test3View.cpp 中的调试版本
inline CMFC0303test3Doc* CMFC0303test3View::GetDocument() const
   { return reinterpret_cast<CMFC0303test3Doc*>(m_pDocument); }
#endif

