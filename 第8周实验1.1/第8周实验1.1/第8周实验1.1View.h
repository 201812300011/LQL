
// ��8��ʵ��1.1View.h : C��8��ʵ��11View ��Ľӿ�
//

#pragma once


class C��8��ʵ��11View : public CView
{
protected: // �������л�����
	C��8��ʵ��11View();
	DECLARE_DYNCREATE(C��8��ʵ��11View)

// ����
public:
	C��8��ʵ��11Doc* GetDocument() const;

// ����
public:
	CString filename;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C��8��ʵ��11View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // ��8��ʵ��1.1View.cpp �еĵ��԰汾
inline C��8��ʵ��11Doc* C��8��ʵ��11View::GetDocument() const
   { return reinterpret_cast<C��8��ʵ��11Doc*>(m_pDocument); }
#endif

