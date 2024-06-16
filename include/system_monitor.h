#ifndef SYSTEM_MONITOR_H
#define SYSTEM_MONITOR_H

#include <bits/stdc++.h>

using namespace std;

class SystemMonitor {
private:
    vector<string> logs;

public:
    void log_event(const string& event);
};

#endif // SYSTEM_MONITOR_H
