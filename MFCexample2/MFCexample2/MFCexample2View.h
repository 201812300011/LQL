
// MFCexample2View.h : CMFCexample2View 类的接口
//

#pragma once


class CMFCexample2View : public CView
{
protected: // 仅从序列化创建
	CMFCexample2View();
	DECLARE_DYNCREATE(CMFCexample2View)

// 特性
public:
	CMFCexample2Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFCexample2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MFCexample2View.cpp 中的调试版本
inline CMFCexample2Doc* CMFCexample2View::GetDocument() const
   { return reinterpret_cast<CMFCexample2Doc*>(m_pDocument); }
#endif

