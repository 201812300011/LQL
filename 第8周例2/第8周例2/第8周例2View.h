
// ��8����2View.h : C��8����2View ��Ľӿ�
//

#pragma once


class C��8����2View : public CView
{
protected: // �������л�����
	C��8����2View();
	DECLARE_DYNCREATE(C��8����2View)

// ����
public:
	C��8����2Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C��8����2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnRButtonDblClk(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // ��8����2View.cpp �еĵ��԰汾
inline C��8����2Doc* C��8����2View::GetDocument() const
   { return reinterpret_cast<C��8����2Doc*>(m_pDocument); }
#endif

