
// 第12周综合实验2.1View.h : C第12周综合实验21View 类的接口
//

#pragma once

class C第12周综合实验21Set;

class C第12周综合实验21View : public CRecordView
{
protected: // 仅从序列化创建
	C第12周综合实验21View();
	DECLARE_DYNCREATE(C第12周综合实验21View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_MY1221_FORM };
#endif
	C第12周综合实验21Set* m_pSet;

// 特性
public:
	C第12周综合实验21Doc* GetDocument() const;

// 操作
public:
	CString path;

// 重写
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual void OnInitialUpdate(); // 构造后第一次调用

// 实现
public:
	virtual ~C第12周综合实验21View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	CString filename;
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
	afx_msg void OnPaint();
	afx_msg void OnBnClickedButton1();
};

#ifndef _DEBUG  // 第12周综合实验2.1View.cpp 中的调试版本
inline C第12周综合实验21Doc* C第12周综合实验21View::GetDocument() const
   { return reinterpret_cast<C第12周综合实验21Doc*>(m_pDocument); }
#endif

