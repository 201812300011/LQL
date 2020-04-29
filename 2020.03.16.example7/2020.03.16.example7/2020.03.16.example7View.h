
// 2020.03.16.example7View.h : CMy20200316example7View 类的接口
//

#pragma once


class CMy20200316example7View : public CView
{
protected: // 仅从序列化创建
	CMy20200316example7View();
	DECLARE_DYNCREATE(CMy20200316example7View)

// 特性
public:
	CMy20200316example7Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMy20200316example7View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnSetFocus(CWnd* pOldWnd);
	afx_msg void OnKillFocus(CWnd* pNewWnd);
};

#ifndef _DEBUG  // 2020.03.16.example7View.cpp 中的调试版本
inline CMy20200316example7Doc* CMy20200316example7View::GetDocument() const
   { return reinterpret_cast<CMy20200316example7Doc*>(m_pDocument); }
#endif

