
// ��5��ʵ��4View.h : C��5��ʵ��4View ��Ľӿ�
//

#pragma once


class C��5��ʵ��4View : public CView
{
protected: // �������л�����
	C��5��ʵ��4View();
	DECLARE_DYNCREATE(C��5��ʵ��4View)

// ����
public:
	C��5��ʵ��4Doc* GetDocument() const;

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
	virtual ~C��5��ʵ��4View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // ��5��ʵ��4View.cpp �еĵ��԰汾
inline C��5��ʵ��4Doc* C��5��ʵ��4View::GetDocument() const
   { return reinterpret_cast<C��5��ʵ��4Doc*>(m_pDocument); }
#endif

