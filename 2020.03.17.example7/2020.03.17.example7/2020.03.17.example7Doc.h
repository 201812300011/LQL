
// 2020.03.17.example7Doc.h : CMy20200317example7Doc ��Ľӿ�
//


#pragma once


class CMy20200317example7Doc : public CDocument
{
protected: // �������л�����
	CMy20200317example7Doc();
	DECLARE_DYNCREATE(CMy20200317example7Doc)

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
	virtual ~CMy20200317example7Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	int N;//���θ���
	CArray<CRect, CRect> cr;//��ž��ε�����
	bool set;//����set

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// ����Ϊ����������������������ݵ� Helper ����
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
