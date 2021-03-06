#pragma once

// CConnectSocket command target
//To DMS
class CConnectSocket : public CSocket
{
public:
	CConnectSocket();
	virtual ~CConnectSocket();
	virtual void OnClose(int nErrorCode);
	virtual void OnReceive(int nErrorCode);

	CString	m_strRcvZPL; //2016-10-17
};
//To ZEBRA
class CConnectSocket2 : public CSocket
{
public:
	CConnectSocket2();
	virtual ~CConnectSocket2();
	virtual void OnClose(int nErrorCode);
	virtual void OnReceive(int nErrorCode);

	CString	m_strRcv; 
};
