
// Tester2View.h : interface of the CTester2View class
//

#pragma once


class CTester2View : public CView
{
protected: // create from serialization only
	CTester2View();
	DECLARE_DYNCREATE(CTester2View)

// Attributes
public:
	CTester2Doc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CTester2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in Tester2View.cpp
inline CTester2Doc* CTester2View::GetDocument() const
   { return reinterpret_cast<CTester2Doc*>(m_pDocument); }
#endif

