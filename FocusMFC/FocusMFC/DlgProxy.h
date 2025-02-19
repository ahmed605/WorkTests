
// DlgProxy.h: header file
//

#pragma once

class CFocusMFCDlg;


// CFocusMFCDlgAutoProxy command target

class CFocusMFCDlgAutoProxy : public CCmdTarget
{
	DECLARE_DYNCREATE(CFocusMFCDlgAutoProxy)

	CFocusMFCDlgAutoProxy();           // protected constructor used by dynamic creation

// Attributes
public:
	CFocusMFCDlg* m_pDialog;

// Operations
public:

// Overrides
	public:
	virtual void OnFinalRelease();

// Implementation
protected:
	virtual ~CFocusMFCDlgAutoProxy();

	// Generated message map functions

	DECLARE_MESSAGE_MAP()
	DECLARE_OLECREATE(CFocusMFCDlgAutoProxy)

	// Generated OLE dispatch map functions

	DECLARE_DISPATCH_MAP()
	DECLARE_INTERFACE_MAP()
};

