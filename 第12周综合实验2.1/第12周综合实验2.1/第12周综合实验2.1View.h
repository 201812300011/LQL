
// ��12���ۺ�ʵ��2.1View.h : C��12���ۺ�ʵ��21View ��Ľӿ�
//

#pragma once

class C��12���ۺ�ʵ��21Set;

class C��12���ۺ�ʵ��21View : public CRecordView
{
protected: // �������л�����
	C��12���ۺ�ʵ��21View();
	DECLARE_DYNCREATE(C��12���ۺ�ʵ��21View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_MY1221_FORM };
#endif
	C��12���ۺ�ʵ��21Set* m_pSet;

// ����
public:
	C��12���ۺ�ʵ��21Doc* GetDocument() const;

// ����
public:
	CString path;

// ��д
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual void OnInitialUpdate(); // ������һ�ε���

// ʵ��
public:
	virtual ~C��12���ۺ�ʵ��21View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
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

#ifndef _DEBUG  // ��12���ۺ�ʵ��2.1View.cpp �еĵ��԰汾
inline C��12���ۺ�ʵ��21Doc* C��12���ۺ�ʵ��21View::GetDocument() const
   { return reinterpret_cast<C��12���ۺ�ʵ��21Doc*>(m_pDocument); }
#endif

