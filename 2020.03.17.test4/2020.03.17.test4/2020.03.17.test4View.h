
// 2020.03.17.test4View.h : CMy20200317test4View 类的接口
//

#pragma once


class CMy20200317test4View : public CView
{
protected: // 仅从序列化创建
	CMy20200317test4View();
	DECLARE_DYNCREATE(CMy20200317test4View)

// 特性
public:
	CMy20200317test4Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMy20200317test4View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // 2020.03.17.test4View.cpp 中的调试版本
inline CMy20200317test4Doc* CMy20200317test4View::GetDocument() const
   { return reinterpret_cast<CMy20200317test4Doc*>(m_pDocument); }
#endif

