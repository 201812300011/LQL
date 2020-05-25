
// 第13周综合实验3View.h : C第13周综合实验3View 类的接口
//

#pragma once

class C第13周综合实验3Set;

class C第13周综合实验3View : public CRecordView
{
protected: // 仅从序列化创建
	C第13周综合实验3View();
	DECLARE_DYNCREATE(C第13周综合实验3View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_MY133_FORM };
#endif
	C第13周综合实验3Set* m_pSet;

// 特性
public:
	C第13周综合实验3Doc* GetDocument() const;

// 操作
public:
	long a;

// 重写
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual void OnInitialUpdate(); // 构造后第一次调用

// 实现
public:
	virtual ~C第13周综合实验3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	long number;
	afx_msg void OnBnClickedDelete();
	afx_msg void OnBnClickedAdd();
	afx_msg void OnBnClickedModify();
};

#ifndef _DEBUG  // 第13周综合实验3View.cpp 中的调试版本
inline C第13周综合实验3Doc* C第13周综合实验3View::GetDocument() const
   { return reinterpret_cast<C第13周综合实验3Doc*>(m_pDocument); }
#endif

