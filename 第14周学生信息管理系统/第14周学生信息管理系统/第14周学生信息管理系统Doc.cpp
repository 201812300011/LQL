
// ��14��ѧ����Ϣ����ϵͳDoc.cpp : C��14��ѧ����Ϣ����ϵͳDoc ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��14��ѧ����Ϣ����ϵͳ.h"
#endif

#include "��14��ѧ����Ϣ����ϵͳSet.h"
#include "��14��ѧ����Ϣ����ϵͳDoc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// C��14��ѧ����Ϣ����ϵͳDoc

IMPLEMENT_DYNCREATE(C��14��ѧ����Ϣ����ϵͳDoc, CDocument)

BEGIN_MESSAGE_MAP(C��14��ѧ����Ϣ����ϵͳDoc, CDocument)
END_MESSAGE_MAP()


// C��14��ѧ����Ϣ����ϵͳDoc ����/����

C��14��ѧ����Ϣ����ϵͳDoc::C��14��ѧ����Ϣ����ϵͳDoc()
{
	// TODO: �ڴ����һ���Թ������

}

C��14��ѧ����Ϣ����ϵͳDoc::~C��14��ѧ����Ϣ����ϵͳDoc()
{
}

BOOL C��14��ѧ����Ϣ����ϵͳDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}



#ifdef SHARED_HANDLERS

// ����ͼ��֧��
void C��14��ѧ����Ϣ����ϵͳDoc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
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
void C��14��ѧ����Ϣ����ϵͳDoc::InitializeSearchContent()
{
	CString strSearchContent;
	// ���ĵ����������������ݡ�
	// ���ݲ���Ӧ�ɡ�;���ָ�

	// ����:     strSearchContent = _T("point;rectangle;circle;ole object;")��
	SetSearchContent(strSearchContent);
}

void C��14��ѧ����Ϣ����ϵͳDoc::SetSearchContent(const CString& value)
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

// C��14��ѧ����Ϣ����ϵͳDoc ���

#ifdef _DEBUG
void C��14��ѧ����Ϣ����ϵͳDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void C��14��ѧ����Ϣ����ϵͳDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// C��14��ѧ����Ϣ����ϵͳDoc ����
