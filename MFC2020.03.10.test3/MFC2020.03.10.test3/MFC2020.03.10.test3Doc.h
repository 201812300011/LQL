
// MFC2020.03.10.test3Doc.h : CMFC20200310test3Doc ��Ľӿ�
//


#pragma once


class CMFC20200310test3Doc : public CDocument
{
protected: // �������л�����
	CMFC20200310test3Doc();
	DECLARE_DYNCREATE(CMFC20200310test3Doc)

// ����
public:

// ����
public:

// ��д
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// ʵ��
public:
	virtual ~CMFC20200310test3Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	CRect rect1,rect2,rect3;//CRect�������࣬������������
	int a, b;//����a��b�����

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// ����Ϊ����������������������ݵ� Helper ����
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
