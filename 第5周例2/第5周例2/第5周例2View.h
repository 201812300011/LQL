
// ��5����2View.h : C��5����2View ��Ľӿ�
//

#pragma once


class C��5����2View : public CView
{
protected: // �������л�����
	C��5����2View();
	DECLARE_DYNCREATE(C��5����2View)

// ����
public:
	C��5����2Doc* GetDocument() const;

// ����
public:
	CBitmap m_Bitmap;//λͼ����
	int m_nWidth;//�洢λͼ������ݳ�Ա
	int m_nHeight;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C��5����2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // ��5����2View.cpp �еĵ��԰汾
inline C��5����2Doc* C��5����2View::GetDocument() const
   { return reinterpret_cast<C��5����2Doc*>(m_pDocument); }
#endif

