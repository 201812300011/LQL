
// ��11��ʵ��1+2Doc.cpp : C��11��ʵ��12Doc ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��11��ʵ��1+2.h"
#endif

#include "��11��ʵ��1+2Set.h"
#include "��11��ʵ��1+2Doc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// C��11��ʵ��12Doc

IMPLEMENT_DYNCREATE(C��11��ʵ��12Doc, CDocument)

BEGIN_MESSAGE_MAP(C��11��ʵ��12Doc, CDocument)
END_MESSAGE_MAP()


// C��11��ʵ��12Doc ����/����

C��11��ʵ��12Doc::C��11��ʵ��12Doc()
{
	// TODO: �ڴ����һ���Թ������

}

C��11��ʵ��12Doc::~C��11��ʵ��12Doc()
{
}

BOOL C��11��ʵ��12Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}



#ifdef SHARED_HANDLERS

// ����ͼ��֧��
void C��11��ʵ��12Doc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
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
void C��11��ʵ��12Doc::InitializeSearchContent()
{
	CString strSearchContent;
	// ���ĵ����������������ݡ�
	// ���ݲ���Ӧ�ɡ�;���ָ�

	// ����:     strSearchContent = _T("point;rectangle;circle;ole object;")��
	SetSearchContent(strSearchContent);
}

void C��11��ʵ��12Doc::SetSearchContent(const CString& value)
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

// C��11��ʵ��12Doc ���

#ifdef _DEBUG
void C��11��ʵ��12Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void C��11��ʵ��12Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// C��11��ʵ��12Doc ����
