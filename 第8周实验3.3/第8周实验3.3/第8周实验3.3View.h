
// ��8��ʵ��3.3View.h : C��8��ʵ��33View ��Ľӿ�
//

#pragma once


class C��8��ʵ��33View : public CView
{
protected: // �������л�����
	C��8��ʵ��33View();
	DECLARE_DYNCREATE(C��8��ʵ��33View)

// ����
public:
	C��8��ʵ��33Doc* GetDocument() const;

// ����
public:
	CRect rc;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C��8��ʵ��33View();
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

#ifndef _DEBUG  // ��8��ʵ��3.3View.cpp �еĵ��԰汾
inline C��8��ʵ��33Doc* C��8��ʵ��33View::GetDocument() const
   { return reinterpret_cast<C��8��ʵ��33Doc*>(m_pDocument); }
#endif

