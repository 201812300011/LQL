
// ��8��ʵ��1.2View.h : C��8��ʵ��12View ��Ľӿ�
//

#pragma once


class C��8��ʵ��12View : public CView
{
protected: // �������л�����
	C��8��ʵ��12View();
	DECLARE_DYNCREATE(C��8��ʵ��12View)

// ����
public:
	C��8��ʵ��12Doc* GetDocument() const;

// ����
public:
	CString filename;
	int t;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C��8��ʵ��12View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnShowfilename();
};

#ifndef _DEBUG  // ��8��ʵ��1.2View.cpp �еĵ��԰汾
inline C��8��ʵ��12Doc* C��8��ʵ��12View::GetDocument() const
   { return reinterpret_cast<C��8��ʵ��12Doc*>(m_pDocument); }
#endif

