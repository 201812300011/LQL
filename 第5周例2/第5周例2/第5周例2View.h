
// 第5周例2View.h : C第5周例2View 类的接口
//

#pragma once


class C第5周例2View : public CView
{
protected: // 仅从序列化创建
	C第5周例2View();
	DECLARE_DYNCREATE(C第5周例2View)

// 特性
public:
	C第5周例2Doc* GetDocument() const;

// 操作
public:
	CBitmap m_Bitmap;//位图对象
	int m_nWidth;//存储位图宽的数据成员
	int m_nHeight;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C第5周例2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 第5周例2View.cpp 中的调试版本
inline C第5周例2Doc* C第5周例2View::GetDocument() const
   { return reinterpret_cast<C第5周例2Doc*>(m_pDocument); }
#endif

