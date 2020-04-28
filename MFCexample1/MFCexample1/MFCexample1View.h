
// MFCexample1View.h : CMFCexample1View 类的接口
//

#pragma once


class CMFCexample1View : public CView
{
protected: // 仅从序列化创建
	CMFCexample1View();
	DECLARE_DYNCREATE(CMFCexample1View)

// 特性
public:
	CMFCexample1Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFCexample1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MFCexample1View.cpp 中的调试版本
inline CMFCexample1Doc* CMFCexample1View::GetDocument() const
   { return reinterpret_cast<CMFCexample1Doc*>(m_pDocument); }
#endif

