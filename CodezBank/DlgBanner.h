////////////////////////////////////////////////////////////////////////////////
// Copyright (c) 2022  
// 
// The following code is supplied "as-is" and 
// is given without warranty of any kind. 
// It may be freely distributed and used. 
// The user holds author blameless from any complications or 
// problems that may arise from the use of this code.
// 
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
// Author: steveb
//
// History:
//
////////////////////////////////////////////////////////////////////////////////

#pragma once

/////////////////////////////////////////////////////////////////////////////
// CDlgBanner window

namespace Dialogs
{

	class CDlgBanner : public CStatic
	{
		// Construction
	public:
		CDlgBanner();

		// Implementation
	public:
		virtual ~CDlgBanner();

		// Generated message map functions
	protected:
		//{{AFX_MSG(CDlgBanner)
		afx_msg void OnPaint();
		//}}AFX_MSG

		DECLARE_MESSAGE_MAP()
	};
}