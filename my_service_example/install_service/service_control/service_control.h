/**
service control example
cswuyg@gmail.com
2013.10.26


����ο���http://blog.csdn.net/itcastcpp/article/details/7079574
*/
#pragma once

class ServiceControl
{
public:
	ServiceControl();
	~ServiceControl();

	BOOL InstallService(const std::wstring& bin_path, const std::wstring& service_name);
	BOOL StartService(const std::wstring& service_name);
	BOOL StopService(const std::wstring& service_name, BOOL stop_dependence);
	BOOL DeleteService(const std::wstring& service_name);

private:
	BOOL StopServiceDependence(SC_HANDLE service_handle);
	BOOL CheckStopFinish(SC_HANDLE service_handle);

private:
	SC_HANDLE manager_handle_;
};