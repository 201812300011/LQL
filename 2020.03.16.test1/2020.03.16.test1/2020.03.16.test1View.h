
// 2020.03.16.test1View.h : CMy20200316test1View ��Ľӿ�
//

#pragma once


class CMy20200316test1View : public CView
{
protected: // �������л�����
	CMy20200316test1View();
	DECLARE_DYNCREATE(CMy20200316test1View)

// ����
public:
	CMy20200316test1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy20200316test1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 2020.03.16.test1View.cpp �еĵ��԰汾
inline CMy20200316test1Doc* CMy20200316test1View::GetDocument() const
   { return reinterpret_cast<CMy20200316test1Doc*>(m_pDocument); }
#endif

