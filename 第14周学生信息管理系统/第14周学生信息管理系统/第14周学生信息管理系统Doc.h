
// ��14��ѧ����Ϣ����ϵͳDoc.h : C��14��ѧ����Ϣ����ϵͳDoc ��Ľӿ�
//


#pragma once
#include "��14��ѧ����Ϣ����ϵͳSet.h"


class C��14��ѧ����Ϣ����ϵͳDoc : public CDocument
{
protected: // �������л�����
	C��14��ѧ����Ϣ����ϵͳDoc();
	DECLARE_DYNCREATE(C��14��ѧ����Ϣ����ϵͳDoc)

// ����
public:
	C��14��ѧ����Ϣ����ϵͳSet m_��14��ѧ����Ϣ����ϵͳSet;

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
	virtual ~C��14��ѧ����Ϣ����ϵͳDoc();
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
