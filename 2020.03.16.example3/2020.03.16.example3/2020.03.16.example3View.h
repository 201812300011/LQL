
// 2020.03.16.example3View.h : CMy20200316example3View ��Ľӿ�
//

#pragma once


class CMy20200316example3View : public CView
{
protected: // �������л�����
	CMy20200316example3View();
	DECLARE_DYNCREATE(CMy20200316example3View)

// ����
public:
	CMy20200316example3Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy20200316example3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 2020.03.16.example3View.cpp �еĵ��԰汾
inline CMy20200316example3Doc* CMy20200316example3View::GetDocument() const
   { return reinterpret_cast<CMy20200316example3Doc*>(m_pDocument); }
#endif

