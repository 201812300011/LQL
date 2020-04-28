
// MFC0303test1View.h : CMFC0303test1View 类的接口
//

#pragma once


class CMFC0303test1View : public CView
{
protected: // 仅从序列化创建
	CMFC0303test1View();
	DECLARE_DYNCREATE(CMFC0303test1View)

// 特性
public:
	CMFC0303test1Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFC0303test1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MFC0303test1View.cpp 中的调试版本
inline CMFC0303test1Doc* CMFC0303test1View::GetDocument() const
   { return reinterpret_cast<CMFC0303test1Doc*>(m_pDocument); }
#endif

