
// MFCexample6View.h : CMFCexample6View ��Ľӿ�
//

#pragma once


class CMFCexample6View : public CView
{
protected: // �������л�����
	CMFCexample6View();
	DECLARE_DYNCREATE(CMFCexample6View)

// ����
public:
	CMFCexample6Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCexample6View();
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

#ifndef _DEBUG  // MFCexample6View.cpp �еĵ��԰汾
inline CMFCexample6Doc* CMFCexample6View::GetDocument() const
   { return reinterpret_cast<CMFCexample6Doc*>(m_pDocument); }
#endif

