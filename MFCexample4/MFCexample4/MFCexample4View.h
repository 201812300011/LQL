
// MFCexample4View.h : CMFCexample4View ��Ľӿ�
//

#pragma once


class CMFCexample4View : public CView
{
protected: // �������л�����
	CMFCexample4View();
	DECLARE_DYNCREATE(CMFCexample4View)

// ����
public:
	CMFCexample4Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCexample4View();
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

#ifndef _DEBUG  // MFCexample4View.cpp �еĵ��԰汾
inline CMFCexample4Doc* CMFCexample4View::GetDocument() const
   { return reinterpret_cast<CMFCexample4Doc*>(m_pDocument); }
#endif

