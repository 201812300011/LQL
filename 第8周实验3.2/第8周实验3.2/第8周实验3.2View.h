
// ��8��ʵ��3.2View.h : C��8��ʵ��32View ��Ľӿ�
//

#pragma once


class C��8��ʵ��32View : public CView
{
protected: // �������л�����
	C��8��ʵ��32View();
	DECLARE_DYNCREATE(C��8��ʵ��32View)

// ����
public:
	C��8��ʵ��32Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C��8��ʵ��32View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnDrawellipse();
};

#ifndef _DEBUG  // ��8��ʵ��3.2View.cpp �еĵ��԰汾
inline C��8��ʵ��32Doc* C��8��ʵ��32View::GetDocument() const
   { return reinterpret_cast<C��8��ʵ��32Doc*>(m_pDocument); }
#endif

