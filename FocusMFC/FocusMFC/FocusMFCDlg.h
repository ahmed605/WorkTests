
// FocusMFCDlg.h : header file
//

#pragma once

class CFocusMFCDlgAutoProxy;


// CFocusMFCDlg dialog
class CFocusMFCDlg : public CDialog
{
	DECLARE_DYNAMIC(CFocusMFCDlg);
	friend class CFocusMFCDlgAutoProxy;

// Construction
public:
	CFocusMFCDlg(CWnd* pParent = NULL);	// standard constructor
	virtual ~CFocusMFCDlg();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_FOCUSMFC_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	CFocusMFCDlgAutoProxy* m_pAutoProxy;
	HICON m_hIcon;

	BOOL CanExit();

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnClose();
	virtual void OnOK();
	virtual void OnCancel();
	DECLARE_MESSAGE_MAP()
};
