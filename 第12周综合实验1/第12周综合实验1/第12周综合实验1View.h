
// ��12���ۺ�ʵ��1View.h : C��12���ۺ�ʵ��1View ��Ľӿ�
//

#pragma once

class C��12���ۺ�ʵ��1Set;

class C��12���ۺ�ʵ��1View : public CRecordView
{
protected: // �������л�����
	C��12���ۺ�ʵ��1View();
	DECLARE_DYNCREATE(C��12���ۺ�ʵ��1View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_MY121_FORM };
#endif
	C��12���ۺ�ʵ��1Set* m_pSet;

// ����
public:
	C��12���ۺ�ʵ��1Doc* GetDocument() const;

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
	virtual ~C��12���ۺ�ʵ��1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
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

#ifndef _DEBUG  // ��12���ۺ�ʵ��1View.cpp �еĵ��԰汾
inline C��12���ۺ�ʵ��1Doc* C��12���ۺ�ʵ��1View::GetDocument() const
   { return reinterpret_cast<C��12���ۺ�ʵ��1Doc*>(m_pDocument); }
#endif

