
// ��5��ʵ��3View.h : C��5��ʵ��3View ��Ľӿ�
//

#pragma once


class C��5��ʵ��3View : public CView
{
protected: // �������л�����
	C��5��ʵ��3View();
	DECLARE_DYNCREATE(C��5��ʵ��3View)

// ����
public:
	C��5��ʵ��3Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C��5��ʵ��3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnShowname();
};

#ifndef _DEBUG  // ��5��ʵ��3View.cpp �еĵ��԰汾
inline C��5��ʵ��3Doc* C��5��ʵ��3View::GetDocument() const
   { return reinterpret_cast<C��5��ʵ��3Doc*>(m_pDocument); }
#endif

