
// ��11��ʵ��1+2View.h : C��11��ʵ��12View ��Ľӿ�
//

#pragma once

class C��11��ʵ��12Set;

class C��11��ʵ��12View : public CRecordView
{
protected: // �������л�����
	C��11��ʵ��12View();
	DECLARE_DYNCREATE(C��11��ʵ��12View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_MY1112_FORM };
#endif
	C��11��ʵ��12Set* m_pSet;

// ����
public:
	C��11��ʵ��12Doc* GetDocument() const;
	

// ����
public:

// ��д
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual void OnInitialUpdate(); // ������һ�ε���
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~C��11��ʵ��12View();
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
	CString number;
	CString name;
	CString major;
	CString phone;
	afx_msg void OnBnClickedButton1();
};

#ifndef _DEBUG  // ��11��ʵ��1+2View.cpp �еĵ��԰汾
inline C��11��ʵ��12Doc* C��11��ʵ��12View::GetDocument() const
   { return reinterpret_cast<C��11��ʵ��12Doc*>(m_pDocument); }
#endif

