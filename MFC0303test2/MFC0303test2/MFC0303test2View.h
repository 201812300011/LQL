
// MFC0303test2View.h : CMFC0303test2View 类的接口
//

#pragma once


class CMFC0303test2View : public CView
{
protected: // 仅从序列化创建
	CMFC0303test2View();
	DECLARE_DYNCREATE(CMFC0303test2View)

// 特性
public:
	CMFC0303test2Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFC0303test2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MFC0303test2View.cpp 中的调试版本
inline CMFC0303test2Doc* CMFC0303test2View::GetDocument() const
   { return reinterpret_cast<CMFC0303test2Doc*>(m_pDocument); }
#endif

