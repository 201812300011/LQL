
// ��14��ѧ����Ϣ����ϵͳView.h : C��14��ѧ����Ϣ����ϵͳView ��Ľӿ�
//

#pragma once

class C��14��ѧ����Ϣ����ϵͳSet;

class C��14��ѧ����Ϣ����ϵͳView : public CRecordView
{
protected: // �������л�����
	C��14��ѧ����Ϣ����ϵͳView();
	DECLARE_DYNCREATE(C��14��ѧ����Ϣ����ϵͳView)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_MY14_FORM };
#endif
	C��14��ѧ����Ϣ����ϵͳSet* m_pSet;

// ����
public:
	C��14��ѧ����Ϣ����ϵͳDoc* GetDocument() const;

// ����
public:
	CString path;//view������path�����ڴ��ͼƬ���ļ��еı���

// ��д
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual void OnInitialUpdate(); // ������һ�ε���

// ʵ��
public:
	virtual ~C��14��ѧ����Ϣ����ϵͳView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
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

#ifndef _DEBUG  // ��14��ѧ����Ϣ����ϵͳView.cpp �еĵ��԰汾
inline C��14��ѧ����Ϣ����ϵͳDoc* C��14��ѧ����Ϣ����ϵͳView::GetDocument() const
   { return reinterpret_cast<C��14��ѧ����Ϣ����ϵͳDoc*>(m_pDocument); }
#endif

