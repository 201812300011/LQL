
// 第11周实验1+2View.h : C第11周实验12View 类的接口
//

#pragma once

class C第11周实验12Set;

class C第11周实验12View : public CRecordView
{
protected: // 仅从序列化创建
	C第11周实验12View();
	DECLARE_DYNCREATE(C第11周实验12View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_MY1112_FORM };
#endif
	C第11周实验12Set* m_pSet;

// 特性
public:
	C第11周实验12Doc* GetDocument() const;
	

// 操作
public:

// 重写
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual void OnInitialUpdate(); // 构造后第一次调用
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 实现
public:
	virtual ~C第11周实验12View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	long ID;
	CString number;
	CString name;
	CString major;
	CString phone;
	afx_msg void OnBnClickedButton1();
};

#ifndef _DEBUG  // 第11周实验1+2View.cpp 中的调试版本
inline C第11周实验12Doc* C第11周实验12View::GetDocument() const
   { return reinterpret_cast<C第11周实验12Doc*>(m_pDocument); }
#endif

