
// MFC0303test1View.h : CMFC0303test1View ��Ľӿ�
//

#pragma once


class CMFC0303test1View : public CView
{
protected: // �������л�����
	CMFC0303test1View();
	DECLARE_DYNCREATE(CMFC0303test1View)

// ����
public:
	CMFC0303test1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFC0303test1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MFC0303test1View.cpp �еĵ��԰汾
inline CMFC0303test1Doc* CMFC0303test1View::GetDocument() const
   { return reinterpret_cast<CMFC0303test1Doc*>(m_pDocument); }
#endif

