
// ��9��ʵ��2View.h : C��9��ʵ��2View ��Ľӿ�
//

#pragma once


class C��9��ʵ��2View : public CView
{
protected: // �������л�����
	C��9��ʵ��2View();
	DECLARE_DYNCREATE(C��9��ʵ��2View)

// ����
public:
	C��9��ʵ��2Doc* GetDocument() const;

// ����
public:
	CRect rect;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C��9��ʵ��2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // ��9��ʵ��2View.cpp �еĵ��԰汾
inline C��9��ʵ��2Doc* C��9��ʵ��2View::GetDocument() const
   { return reinterpret_cast<C��9��ʵ��2Doc*>(m_pDocument); }
#endif

