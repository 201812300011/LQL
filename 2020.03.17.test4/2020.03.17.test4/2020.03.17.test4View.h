
// 2020.03.17.test4View.h : CMy20200317test4View ��Ľӿ�
//

#pragma once


class CMy20200317test4View : public CView
{
protected: // �������л�����
	CMy20200317test4View();
	DECLARE_DYNCREATE(CMy20200317test4View)

// ����
public:
	CMy20200317test4Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy20200317test4View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // 2020.03.17.test4View.cpp �еĵ��԰汾
inline CMy20200317test4Doc* CMy20200317test4View::GetDocument() const
   { return reinterpret_cast<CMy20200317test4Doc*>(m_pDocument); }
#endif

