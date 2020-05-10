
// 第11周课堂练习1Doc.h : C第11周课堂练习1Doc 类的接口
//


#pragma once
#include "第11周课堂练习1Set.h"


class C第11周课堂练习1Doc : public CDocument
{
protected: // 仅从序列化创建
	C第11周课堂练习1Doc();
	DECLARE_DYNCREATE(C第11周课堂练习1Doc)

// 特性
public:
	C第11周课堂练习1Set m_第11周课堂练习1Set;
	//记录集的对象

// 操作
public:

// 重写
public:
	virtual BOOL OnNewDocument();
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// 实现
public:
	virtual ~C第11周课堂练习1Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// 用于为搜索处理程序设置搜索内容的 Helper 函数
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
