
// MFCexample1View.h : CMFCexample1View ��Ľӿ�
//

#pragma once


class CMFCexample1View : public CView
{
protected: // �������л�����
	CMFCexample1View();
	DECLARE_DYNCREATE(CMFCexample1View)

// ����
public:
	CMFCexample1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCexample1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MFCexample1View.cpp �еĵ��԰汾
inline CMFCexample1Doc* CMFCexample1View::GetDocument() const
   { return reinterpret_cast<CMFCexample1Doc*>(m_pDocument); }
#endif

