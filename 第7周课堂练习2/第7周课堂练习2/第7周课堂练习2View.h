
// ��7�ܿ�����ϰ2View.h : C��7�ܿ�����ϰ2View ��Ľӿ�
//

#pragma once


class C��7�ܿ�����ϰ2View : public CView
{
protected: // �������л�����
	C��7�ܿ�����ϰ2View();
	DECLARE_DYNCREATE(C��7�ܿ�����ϰ2View)

// ����
public:
	C��7�ܿ�����ϰ2Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C��7�ܿ�����ϰ2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnExchange();
};

#ifndef _DEBUG  // ��7�ܿ�����ϰ2View.cpp �еĵ��԰汾
inline C��7�ܿ�����ϰ2Doc* C��7�ܿ�����ϰ2View::GetDocument() const
   { return reinterpret_cast<C��7�ܿ�����ϰ2Doc*>(m_pDocument); }
#endif

