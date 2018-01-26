
#include<Windows.h>
#include<iostream>

#include<direct.h>

using namespace std;

class CMonitorInfoEx : public MONITORINFOEX
{
public:
    CMonitorInfoEx();

    LPCRECT GetRect() const { return &rcMonitor; }
    LPCRECT GetWorkRect() const { return &rcWork; }
    LPCTSTR DeviceName() const { return szDevice; }

    bool IsPrimary() const { return (dwFlags & MONITORINFOF_PRIMARY) ? true : false; }

    int Width() const { return rcMonitor.right - rcMonitor.left; }
    int Height() const { return rcMonitor.bottom - rcMonitor.top; }
    int WorkWidth() const { return rcWork.right - rcWork.left; }
    int WorkHeight() const { return rcWork.bottom - rcWork.top; }
};


class CSysDisplays
{
public:
    CSysDisplays();

    void Update();

    int Count() const;
    const CMonitorInfoEx& Get( int i ) const;

private:
    std::vector<CMonitorInfoEx> mInfo;
};

Implementation

BOOL CALLBACK MonitorEnumProc( __in  HMONITOR hMonitor, __in  HDC hdcMonitor, __in  LPRECT lprcMonitor, __in  LPARAM dwData )
{
    std::vector<CMonitorInfoEx>& infoArray = *reinterpret_cast< std::vector<CMonitorInfoEx>* >( dwData );
    CMonitorInfoEx info;
    GetMonitorInfo( hMonitor, &info );
    infoArray.push_back( info );
    return TRUE;
}

CMonitorInfoEx::CMonitorInfoEx()
{
    cbSize = sizeof(MONITORINFOEX);
}


CSysDisplays::CSysDisplays()
{
    Update();
}


void CSysDisplays::Update()
{
    mInfo.clear();
    mInfo.reserve( ::GetSystemMetrics(SM_CMONITORS) );
    EnumDisplayMonitors( NULL, NULL, MonitorEnumProc, reinterpret_cast<LPARAM>(&mInfo) );
}


int CSysDisplays::Count() const
{
    return (int)mInfo.size();
}


const CMonitorInfoEx& CSysDisplays::Get( int i ) const
{
    return mInfo[i];
}
    int main()
{
cout << MonitorCount();
}