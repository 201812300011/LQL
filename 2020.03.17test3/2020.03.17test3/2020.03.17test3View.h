
// 2020.03.17test3View.h : CMy20200317test3View 类的接口
//

#pragma once


class CMy20200317test3View : public CView
{
protected: // 仅从序列化创建
	CMy20200317test3View();
	DECLARE_DYNCREATE(CMy20200317test3View)

// 特性
public:
	CMy20200317test3Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMy20200317test3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 2020.03.17test3View.cpp 中的调试版本
inline CMy20200317test3Doc* CMy20200317test3View::GetDocument() const
   { return reinterpret_cast<CMy20200317test3Doc*>(m_pDocument); }
#endif

