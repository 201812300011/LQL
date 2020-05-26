
// 第12周综合实验1View.h : C第12周综合实验1View 类的接口
//

#pragma once

class C第12周综合实验1Set;

class C第12周综合实验1View : public CRecordView
{
protected: // 仅从序列化创建
	C第12周综合实验1View();
	DECLARE_DYNCREATE(C第12周综合实验1View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_MY121_FORM };
#endif
	C第12周综合实验1Set* m_pSet;

// 特性
public:
	C第12周综合实验1Doc* GetDocument() const;

// 操作
public:
	CString path;//view中声明path，用于存放图片的文件夹的变量

// 重写
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual void OnInitialUpdate(); // 构造后第一次调用

// 实现
public:
	virtual ~C第12周综合实验1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
	afx_msg void OnPaint();
	CString filename;
};

#ifndef _DEBUG  // 第12周综合实验1View.cpp 中的调试版本
inline C第12周综合实验1Doc* C第12周综合实验1View::GetDocument() const
   { return reinterpret_cast<C第12周综合实验1Doc*>(m_pDocument); }
#endif

