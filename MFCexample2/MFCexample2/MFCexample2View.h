
// MFCexample2View.h : CMFCexample2View ��Ľӿ�
//

#pragma once


class CMFCexample2View : public CView
{
protected: // �������л�����
	CMFCexample2View();
	DECLARE_DYNCREATE(CMFCexample2View)

// ����
public:
	CMFCexample2Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCexample2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MFCexample2View.cpp �еĵ��԰汾
inline CMFCexample2Doc* CMFCexample2View::GetDocument() const
   { return reinterpret_cast<CMFCexample2Doc*>(m_pDocument); }
#endif

