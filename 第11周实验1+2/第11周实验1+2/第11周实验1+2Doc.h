
// ��11��ʵ��1+2Doc.h : C��11��ʵ��12Doc ��Ľӿ�
//


#pragma once
#include "��11��ʵ��1+2Set.h"


class C��11��ʵ��12Doc : public CDocument
{
protected: // �������л�����
	C��11��ʵ��12Doc();
	DECLARE_DYNCREATE(C��11��ʵ��12Doc)

// ����
public:
	C��11��ʵ��12Set m_��11��ʵ��12Set;

// ����
public:

// ��д
public:
	virtual BOOL OnNewDocument();
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// ʵ��
public:
	virtual ~C��11��ʵ��12Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// ����Ϊ����������������������ݵ� Helper ����
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
