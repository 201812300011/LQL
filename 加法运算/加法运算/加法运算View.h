
// �ӷ�����View.h : C�ӷ�����View ��Ľӿ�
//

#pragma once


class C�ӷ�����View : public CView
{
protected: // �������л�����
	C�ӷ�����View();
	DECLARE_DYNCREATE(C�ӷ�����View)

// ����
public:
	C�ӷ�����Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C�ӷ�����View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnAdd();
};

#ifndef _DEBUG  // �ӷ�����View.cpp �еĵ��԰汾
inline C�ӷ�����Doc* C�ӷ�����View::GetDocument() const
   { return reinterpret_cast<C�ӷ�����Doc*>(m_pDocument); }
#endif

