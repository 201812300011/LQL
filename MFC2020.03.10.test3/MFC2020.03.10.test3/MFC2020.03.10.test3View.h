
// MFC2020.03.10.test3View.h : CMFC20200310test3View ��Ľӿ�
//

#pragma once


class CMFC20200310test3View : public CView
{
protected: // �������л�����
	CMFC20200310test3View();
	DECLARE_DYNCREATE(CMFC20200310test3View)

// ����
public:
	CMFC20200310test3Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFC20200310test3View();
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

#ifndef _DEBUG  // MFC2020.03.10.test3View.cpp �еĵ��԰汾
inline CMFC20200310test3Doc* CMFC20200310test3View::GetDocument() const
   { return reinterpret_cast<CMFC20200310test3Doc*>(m_pDocument); }
#endif

