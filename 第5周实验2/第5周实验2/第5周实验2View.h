
// ��5��ʵ��2View.h : C��5��ʵ��2View ��Ľӿ�
//

#pragma once


class C��5��ʵ��2View : public CView
{
protected: // �������л�����
	C��5��ʵ��2View();
	DECLARE_DYNCREATE(C��5��ʵ��2View)

// ����
public:
	C��5��ʵ��2Doc* GetDocument() const;

// ����
public:
	CRect r, clientrect;
	bool set;
	int flag;
	long centerx;
	long centery;
	POINT center;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C��5��ʵ��2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnChangecircle();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // ��5��ʵ��2View.cpp �еĵ��԰汾
inline C��5��ʵ��2Doc* C��5��ʵ��2View::GetDocument() const
   { return reinterpret_cast<C��5��ʵ��2Doc*>(m_pDocument); }
#endif

