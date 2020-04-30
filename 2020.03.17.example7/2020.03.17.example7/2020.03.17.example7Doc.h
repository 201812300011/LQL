
// 2020.03.17.example7Doc.h : CMy20200317example7Doc 类的接口
//


#pragma once


class CMy20200317example7Doc : public CDocument
{
protected: // 仅从序列化创建
	CMy20200317example7Doc();
	DECLARE_DYNCREATE(CMy20200317example7Doc)

// 特性
public:

// 操作
public:

// 重写
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// 实现
public:
	virtual ~CMy20200317example7Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	int N;//矩形个数
	CArray<CRect, CRect> cr;//存放矩形的数组
	bool set;//开关set

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// 用于为搜索处理程序设置搜索内容的 Helper 函数
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
