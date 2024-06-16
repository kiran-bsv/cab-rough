#include "system_monitor.h"

void SystemMonitor::log_event(const string& event) {
    logs.push_back(event);
    cout << "Event logged: " << event << endl;
}
