
// MotorControlDlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"
#include "mscomm1.h"


// CMotorControlDlg �Ի���
class CMotorControlDlg : public CDialogEx
{
// ����
public:
	CMotorControlDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MOTORCONTROL_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	// ����ͨ��ѡ��
	CComboBox m_ComboBox;
	// ����ͨ������
	int m_Index;
	// ���ڽ�������
	CString m_strRXData;
	// ���ڷ�������
	CString m_strTXData;
	// ����ͨ�ſؼ�
	CMscomm1 m_ctrlComm;
};
