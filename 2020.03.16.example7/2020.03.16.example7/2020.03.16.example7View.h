
// 2020.03.16.example7View.h : CMy20200316example7View ��Ľӿ�
//

#pragma once


class CMy20200316example7View : public CView
{
protected: // �������л�����
	CMy20200316example7View();
	DECLARE_DYNCREATE(CMy20200316example7View)

// ����
public:
	CMy20200316example7Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy20200316example7View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnSetFocus(CWnd* pOldWnd);
	afx_msg void OnKillFocus(CWnd* pNewWnd);
};

#ifndef _DEBUG  // 2020.03.16.example7View.cpp �еĵ��԰汾
inline CMy20200316example7Doc* CMy20200316example7View::GetDocument() const
   { return reinterpret_cast<CMy20200316example7Doc*>(m_pDocument); }
#endif

