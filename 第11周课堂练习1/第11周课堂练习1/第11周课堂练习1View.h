
// ��11�ܿ�����ϰ1View.h : C��11�ܿ�����ϰ1View ��Ľӿ�
//

#pragma once

class C��11�ܿ�����ϰ1Set;

class C��11�ܿ�����ϰ1View : public CRecordView
{
protected: // �������л�����
	C��11�ܿ�����ϰ1View();
	DECLARE_DYNCREATE(C��11�ܿ�����ϰ1View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_MY111_FORM };
#endif
	C��11�ܿ�����ϰ1Set* m_pSet;//ָ���¼����ָ��

// ����
public:
	C��11�ܿ�����ϰ1Doc* GetDocument() const;

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
	virtual ~C��11�ܿ�����ϰ1View();
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
	CString age;
	CString number;
	CString phone;
};

#ifndef _DEBUG  // ��11�ܿ�����ϰ1View.cpp �еĵ��԰汾
inline C��11�ܿ�����ϰ1Doc* C��11�ܿ�����ϰ1View::GetDocument() const
   { return reinterpret_cast<C��11�ܿ�����ϰ1Doc*>(m_pDocument); }
#endif

