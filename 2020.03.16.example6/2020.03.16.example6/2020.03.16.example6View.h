
// 2020.03.16.example6View.h : CMy20200316example6View ��Ľӿ�
//

#pragma once


class CMy20200316example6View : public CView
{
protected: // �������л�����
	CMy20200316example6View();
	DECLARE_DYNCREATE(CMy20200316example6View)

// ����
public:
	CMy20200316example6Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy20200316example6View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
};

#ifndef _DEBUG  // 2020.03.16.example6View.cpp �еĵ��԰汾
inline CMy20200316example6Doc* CMy20200316example6View::GetDocument() const
   { return reinterpret_cast<CMy20200316example6Doc*>(m_pDocument); }
#endif

