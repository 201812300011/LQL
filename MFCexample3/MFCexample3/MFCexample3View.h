
// MFCexample3View.h : CMFCexample3View 类的接口
//

#pragma once


class CMFCexample3View : public CView
{
protected: // 仅从序列化创建
	CMFCexample3View();
	DECLARE_DYNCREATE(CMFCexample3View)

// 特性
public:
	CMFCexample3Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFCexample3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MFCexample3View.cpp 中的调试版本
inline CMFCexample3Doc* CMFCexample3View::GetDocument() const
   { return reinterpret_cast<CMFCexample3Doc*>(m_pDocument); }
#endif

