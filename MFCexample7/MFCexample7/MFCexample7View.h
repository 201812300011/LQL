
// MFCexample7View.h : CMFCexample7View ��Ľӿ�
//

#pragma once


class CMFCexample7View : public CView
{
protected: // �������л�����
	CMFCexample7View();
	DECLARE_DYNCREATE(CMFCexample7View)

// ����
public:
	CMFCexample7Doc* GetDocument() const;

// ����
public:
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCexample7View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnMButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFCexample7View.cpp �еĵ��԰汾
inline CMFCexample7Doc* CMFCexample7View::GetDocument() const
   { return reinterpret_cast<CMFCexample7Doc*>(m_pDocument); }
#endif

