
// MFCexample3View.h : CMFCexample3View ��Ľӿ�
//

#pragma once


class CMFCexample3View : public CView
{
protected: // �������л�����
	CMFCexample3View();
	DECLARE_DYNCREATE(CMFCexample3View)

// ����
public:
	CMFCexample3Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCexample3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MFCexample3View.cpp �еĵ��԰汾
inline CMFCexample3Doc* CMFCexample3View::GetDocument() const
   { return reinterpret_cast<CMFCexample3Doc*>(m_pDocument); }
#endif

