
// ��5��ʵ��5View.h : C��5��ʵ��5View ��Ľӿ�
//

#pragma once


class C��5��ʵ��5View : public CView
{
protected: // �������л�����
	C��5��ʵ��5View();
	DECLARE_DYNCREATE(C��5��ʵ��5View)

// ����
public:
	C��5��ʵ��5Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C��5��ʵ��5View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnDrawline();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnDrawrectangle();
	afx_msg void OnDrawellipse();
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // ��5��ʵ��5View.cpp �еĵ��԰汾
inline C��5��ʵ��5Doc* C��5��ʵ��5View::GetDocument() const
   { return reinterpret_cast<C��5��ʵ��5Doc*>(m_pDocument); }
#endif

