
// 2020.03.16.example5View.h : CMy20200316example5View 类的接口
//

#pragma once


class CMy20200316example5View : public CView
{
protected: // 仅从序列化创建
	CMy20200316example5View();
	DECLARE_DYNCREATE(CMy20200316example5View)

// 特性
public:
	CMy20200316example5Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMy20200316example5View();
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
};

#ifndef _DEBUG  // 2020.03.16.example5View.cpp 中的调试版本
inline CMy20200316example5Doc* CMy20200316example5View::GetDocument() const
   { return reinterpret_cast<CMy20200316example5Doc*>(m_pDocument); }
#endif

