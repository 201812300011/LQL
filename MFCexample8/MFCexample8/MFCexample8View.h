
// MFCexample8View.h : CMFCexample8View ��Ľӿ�
//

#pragma once


class CMFCexample8View : public CView
{
protected: // �������л�����
	CMFCexample8View();
	DECLARE_DYNCREATE(CMFCexample8View)

// ����
public:
	CMFCexample8Doc* GetDocument() const;

// ����
public:
	
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCexample8View();
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

#ifndef _DEBUG  // MFCexample8View.cpp �еĵ��԰汾
inline CMFCexample8Doc* CMFCexample8View::GetDocument() const
   { return reinterpret_cast<CMFCexample8Doc*>(m_pDocument); }
#endif

