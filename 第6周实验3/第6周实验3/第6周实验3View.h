
// ��6��ʵ��3View.h : C��6��ʵ��3View ��Ľӿ�
//

#pragma once


class C��6��ʵ��3View : public CView
{
protected: // �������л�����
	C��6��ʵ��3View();
	DECLARE_DYNCREATE(C��6��ʵ��3View)

// ����
public:
	C��6��ʵ��3Doc* GetDocument() const;

// ����
public:
	CString s,ss;
	CPoint cpoint;
	CArray<CString, CString>m;
	CRect cr;
	int x, flag, h;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C��6��ʵ��3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
};

#ifndef _DEBUG  // ��6��ʵ��3View.cpp �еĵ��԰汾
inline C��6��ʵ��3Doc* C��6��ʵ��3View::GetDocument() const
   { return reinterpret_cast<C��6��ʵ��3Doc*>(m_pDocument); }
#endif

