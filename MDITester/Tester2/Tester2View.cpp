
// Tester2View.cpp : implementation of the CTester2View class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "Tester2.h"
#endif

#include "Tester2Doc.h"
#include "Tester2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CTester2View

IMPLEMENT_DYNCREATE(CTester2View, CView)

BEGIN_MESSAGE_MAP(CTester2View, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CTester2View construction/destruction

CTester2View::CTester2View()
{
	// TODO: add construction code here

}

CTester2View::~CTester2View()
{
}

BOOL CTester2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CTester2View drawing

void CTester2View::OnDraw(CDC* /*pDC*/)
{
	CTester2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// CTester2View printing

BOOL CTester2View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CTester2View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CTester2View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// CTester2View diagnostics

#ifdef _DEBUG
void CTester2View::AssertValid() const
{
	CView::AssertValid();
}

void CTester2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CTester2Doc* CTester2View::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CTester2Doc)));
	return (CTester2Doc*)m_pDocument;
}
#endif //_DEBUG


// CTester2View message handlers
