
// MFC0303test3View.h : CMFC0303test3View ��Ľӿ�
//

#pragma once


class CMFC0303test3View : public CView
{
protected: // �������л�����
	CMFC0303test3View();
	DECLARE_DYNCREATE(CMFC0303test3View)

// ����
public:
	CMFC0303test3Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFC0303test3View();
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
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFC0303test3View.cpp �еĵ��԰汾
inline CMFC0303test3Doc* CMFC0303test3View::GetDocument() const
   { return reinterpret_cast<CMFC0303test3Doc*>(m_pDocument); }
#endif

