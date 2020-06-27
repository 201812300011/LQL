
// 第14周学生信息管理系统View.h : C第14周学生信息管理系统View 类的接口
//

#pragma once

class C第14周学生信息管理系统Set;

class C第14周学生信息管理系统View : public CRecordView
{
protected: // 仅从序列化创建
	C第14周学生信息管理系统View();
	DECLARE_DYNCREATE(C第14周学生信息管理系统View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_MY14_FORM };
#endif
	C第14周学生信息管理系统Set* m_pSet;

// 特性
public:
	C第14周学生信息管理系统Doc* GetDocument() const;

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
	virtual ~C第14周学生信息管理系统View();
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
	CString name;
	CString number;
	CString major;
	CString sex;
	CString birthday;
	CString phone;
	CString address;
	CString picture;
	afx_msg void OnRecordFirst();
	afx_msg void OnRecordPrev();
	afx_msg void OnRecordNext();
	afx_msg void OnRecordLast();
	afx_msg void OnPaint();
	afx_msg void OnBnClickedButton1();
};

#ifndef _DEBUG  // 第14周学生信息管理系统View.cpp 中的调试版本
inline C第14周学生信息管理系统Doc* C第14周学生信息管理系统View::GetDocument() const
   { return reinterpret_cast<C第14周学生信息管理系统Doc*>(m_pDocument); }
#endif

