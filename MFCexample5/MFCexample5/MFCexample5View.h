
// MFCexample5View.h : CMFCexample5View ��Ľӿ�
//

#pragma once


class CMFCexample5View : public CView
{
protected: // �������л�����
	CMFCexample5View();
	DECLARE_DYNCREATE(CMFCexample5View)

// ����
public:
	CMFCexample5Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCexample5View();
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
};

#ifndef _DEBUG  // MFCexample5View.cpp �еĵ��԰汾
inline CMFCexample5Doc* CMFCexample5View::GetDocument() const
   { return reinterpret_cast<CMFCexample5Doc*>(m_pDocument); }
#endif

