
// 2020.03.17test3View.h : CMy20200317test3View ��Ľӿ�
//

#pragma once


class CMy20200317test3View : public CView
{
protected: // �������л�����
	CMy20200317test3View();
	DECLARE_DYNCREATE(CMy20200317test3View)

// ����
public:
	CMy20200317test3Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy20200317test3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 2020.03.17test3View.cpp �еĵ��԰汾
inline CMy20200317test3Doc* CMy20200317test3View::GetDocument() const
   { return reinterpret_cast<CMy20200317test3Doc*>(m_pDocument); }
#endif

