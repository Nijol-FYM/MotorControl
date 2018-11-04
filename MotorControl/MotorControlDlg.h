
// MotorControlDlg.h : 头文件
//

#pragma once
#include "afxwin.h"
#include "mscomm1.h"


// CMotorControlDlg 对话框
class CMotorControlDlg : public CDialogEx
{
// 构造
public:
	CMotorControlDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MOTORCONTROL_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	// 串口通道选择
	CComboBox m_ComboBox;
	// 串口通道索引
	int m_Index;
	// 串口接收数据
	CString m_strRXData;
	// 串口发送数据
	CString m_strTXData;
	// 串口通信控件
	CMscomm1 m_ctrlComm;
};
