
// ��7����1View.h : C��7����1View ��Ľӿ�
//

#pragma once


class C��7����1View : public CView
{
protected: // �������л�����
	C��7����1View();
	DECLARE_DYNCREATE(C��7����1View)

// ����
public:
	C��7����1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C��7����1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPopout();
};

#ifndef _DEBUG  // ��7����1View.cpp �еĵ��԰汾
inline C��7����1Doc* C��7����1View::GetDocument() const
   { return reinterpret_cast<C��7����1Doc*>(m_pDocument); }
#endif

