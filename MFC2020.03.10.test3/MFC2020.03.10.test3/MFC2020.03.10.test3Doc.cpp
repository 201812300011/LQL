
// MFC2020.03.10.test3Doc.cpp : CMFC20200310test3Doc ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFC2020.03.10.test3.h"
#endif

#include "MFC2020.03.10.test3Doc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CMFC20200310test3Doc

IMPLEMENT_DYNCREATE(CMFC20200310test3Doc, CDocument)

BEGIN_MESSAGE_MAP(CMFC20200310test3Doc, CDocument)
END_MESSAGE_MAP()


// CMFC20200310test3Doc ����/����

CMFC20200310test3Doc::CMFC20200310test3Doc()
{
	// TODO: �ڴ����һ���Թ������
	/*rect1(50,75,70,100);
	rect2(100,70,120,100);
	rect3(150,60,180,100);*/
	rect1.left = 50; rect1.top = 75; rect1.right = 70; rect1.bottom = 100;//�������ϽǺ����½�����λ��
	rect2.left = 100; rect2.top = 70; rect2.right = 120; rect2.bottom = 100;
	rect3.left = 150; rect3.top = 60; rect3.right = 180; rect3.bottom = 100;
	a = 1; b = 2;

}

CMFC20200310test3Doc::~CMFC20200310test3Doc()
{
}

BOOL CMFC20200310test3Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// CMFC20200310test3Doc ���л�

void CMFC20200310test3Doc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: �ڴ���Ӵ洢����
	}
	else
	{
		// TODO: �ڴ���Ӽ��ش���
	}
}

#ifdef SHARED_HANDLERS

// ����ͼ��֧��
void CMFC20200310test3Doc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
{
	// �޸Ĵ˴����Ի����ĵ�����
	dc.FillSolidRect(lprcBounds, RGB(255, 255, 255));

	CString strText = _T("TODO: implement thumbnail drawing here");
	LOGFONT lf;

	CFont* pDefaultGUIFont = CFont::FromHandle((HFONT) GetStockObject(DEFAULT_GUI_FONT));
	pDefaultGUIFont->GetLogFont(&lf);
	lf.lfHeight = 36;

	CFont fontDraw;
	fontDraw.CreateFontIndirect(&lf);

	CFont* pOldFont = dc.SelectObject(&fontDraw);
	dc.DrawText(strText, lprcBounds, DT_CENTER | DT_WORDBREAK);
	dc.SelectObject(pOldFont);
}

// ������������֧��
void CMFC20200310test3Doc::InitializeSearchContent()
{
	CString strSearchContent;
	// ���ĵ����������������ݡ�
	// ���ݲ���Ӧ�ɡ�;���ָ�

	// ����:     strSearchContent = _T("point;rectangle;circle;ole object;")��
	SetSearchContent(strSearchContent);
}

void CMFC20200310test3Doc::SetSearchContent(const CString& value)
{
	if (value.IsEmpty())
	{
		RemoveChunk(PKEY_Search_Contents.fmtid, PKEY_Search_Contents.pid);
	}
	else
	{
		CMFCFilterChunkValueImpl *pChunk = NULL;
		ATLTRY(pChunk = new CMFCFilterChunkValueImpl);
		if (pChunk != NULL)
		{
			pChunk->SetTextValue(PKEY_Search_Contents, value, CHUNK_TEXT);
			SetChunkValue(pChunk);
		}
	}
}

#endif // SHARED_HANDLERS

// CMFC20200310test3Doc ���

#ifdef _DEBUG
void CMFC20200310test3Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMFC20200310test3Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CMFC20200310test3Doc ����
