
// MFC0303test2View.h : CMFC0303test2View ��Ľӿ�
//

#pragma once


class CMFC0303test2View : public CView
{
protected: // �������л�����
	CMFC0303test2View();
	DECLARE_DYNCREATE(CMFC0303test2View)

// ����
public:
	CMFC0303test2Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFC0303test2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MFC0303test2View.cpp �еĵ��԰汾
inline CMFC0303test2Doc* CMFC0303test2View::GetDocument() const
   { return reinterpret_cast<CMFC0303test2Doc*>(m_pDocument); }
#endif

