
// 2020.03.16.example2View.h : CMy20200316example2View ��Ľӿ�
//

#pragma once


class CMy20200316example2View : public CView
{
protected: // �������л�����
	CMy20200316example2View();
	DECLARE_DYNCREATE(CMy20200316example2View)

// ����
public:
	CMy20200316example2Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy20200316example2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 2020.03.16.example2View.cpp �еĵ��԰汾
inline CMy20200316example2Doc* CMy20200316example2View::GetDocument() const
   { return reinterpret_cast<CMy20200316example2Doc*>(m_pDocument); }
#endif

