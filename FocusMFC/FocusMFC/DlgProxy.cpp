
// DlgProxy.cpp : implementation file
//

#include "stdafx.h"
#include "FocusMFC.h"
#include "DlgProxy.h"
#include "FocusMFCDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CFocusMFCDlgAutoProxy

IMPLEMENT_DYNCREATE(CFocusMFCDlgAutoProxy, CCmdTarget)

CFocusMFCDlgAutoProxy::CFocusMFCDlgAutoProxy()
{
	EnableAutomation();

	// To keep the application running as long as an automation
	//	object is active, the constructor calls AfxOleLockApp.
	AfxOleLockApp();

	// Get access to the dialog through the application's
	//  main window pointer.  Set the proxy's internal pointer
	//  to point to the dialog, and set the dialog's back pointer to
	//  this proxy.
	ASSERT_VALID(AfxGetApp()->m_pMainWnd);
	if (AfxGetApp()->m_pMainWnd)
	{
		ASSERT_KINDOF(CFocusMFCDlg, AfxGetApp()->m_pMainWnd);
		if (AfxGetApp()->m_pMainWnd->IsKindOf(RUNTIME_CLASS(CFocusMFCDlg)))
		{
			m_pDialog = reinterpret_cast<CFocusMFCDlg*>(AfxGetApp()->m_pMainWnd);
			m_pDialog->m_pAutoProxy = this;
		}
	}
}

CFocusMFCDlgAutoProxy::~CFocusMFCDlgAutoProxy()
{
	// To terminate the application when all objects created with
	// 	with automation, the destructor calls AfxOleUnlockApp.
	//  Among other things, this will destroy the main dialog
	if (m_pDialog != NULL)
		m_pDialog->m_pAutoProxy = NULL;
	AfxOleUnlockApp();
}

void CFocusMFCDlgAutoProxy::OnFinalRelease()
{
	// When the last reference for an automation object is released
	// OnFinalRelease is called.  The base class will automatically
	// deletes the object.  Add additional cleanup required for your
	// object before calling the base class.

	CCmdTarget::OnFinalRelease();
}

BEGIN_MESSAGE_MAP(CFocusMFCDlgAutoProxy, CCmdTarget)
END_MESSAGE_MAP()

BEGIN_DISPATCH_MAP(CFocusMFCDlgAutoProxy, CCmdTarget)
END_DISPATCH_MAP()

// Note: we add support for IID_IFocusMFC to support typesafe binding
//  from VBA.  This IID must match the GUID that is attached to the
//  dispinterface in the .IDL file.

// {f392dfcc-a7e9-4d8f-aeef-8cb4177f8c03}
static const IID IID_IFocusMFC =
{0xf392dfcc,0xa7e9,0x4d8f,{0xae,0xef,0x8c,0xb4,0x17,0x7f,0x8c,0x03}};

BEGIN_INTERFACE_MAP(CFocusMFCDlgAutoProxy, CCmdTarget)
	INTERFACE_PART(CFocusMFCDlgAutoProxy, IID_IFocusMFC, Dispatch)
END_INTERFACE_MAP()

// The IMPLEMENT_OLECREATE2 macro is defined in StdAfx.h of this project
// {2865d9ce-6fc3-4bea-9554-d4283a535a9c}
IMPLEMENT_OLECREATE2(CFocusMFCDlgAutoProxy, "FocusMFC.Application", 0x2865d9ce,0x6fc3,0x4bea,0x95,0x54,0xd4,0x28,0x3a,0x53,0x5a,0x9c)


// CFocusMFCDlgAutoProxy message handlers
