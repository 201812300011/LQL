
// ��13���ۺ�ʵ��3View.h : C��13���ۺ�ʵ��3View ��Ľӿ�
//

#pragma once

class C��13���ۺ�ʵ��3Set;

class C��13���ۺ�ʵ��3View : public CRecordView
{
protected: // �������л�����
	C��13���ۺ�ʵ��3View();
	DECLARE_DYNCREATE(C��13���ۺ�ʵ��3View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_MY133_FORM };
#endif
	C��13���ۺ�ʵ��3Set* m_pSet;

// ����
public:
	C��13���ۺ�ʵ��3Doc* GetDocument() const;

// ����
public:
	long a;

// ��д
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual void OnInitialUpdate(); // ������һ�ε���

// ʵ��
public:
	virtual ~C��13���ۺ�ʵ��3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	long number;
	afx_msg void OnBnClickedDelete();
	afx_msg void OnBnClickedAdd();
	afx_msg void OnBnClickedModify();
};

#ifndef _DEBUG  // ��13���ۺ�ʵ��3View.cpp �еĵ��԰汾
inline C��13���ۺ�ʵ��3Doc* C��13���ۺ�ʵ��3View::GetDocument() const
   { return reinterpret_cast<C��13���ۺ�ʵ��3Doc*>(m_pDocument); }
#endif

