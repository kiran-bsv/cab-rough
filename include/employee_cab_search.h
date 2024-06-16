#ifndef EMPLOYEE_CAB_SEARCH_H
#define EMPLOYEE_CAB_SEARCH_H

#include <bits/stdc++.h>
#include "cab.h"

using namespace std;

class EmployeeCabSearch {
private:
    vector<Cab>& cabs;
    static double calculate_distance(pair<int, int> location1, pair<int, int> location2);

public:
    EmployeeCabSearch(vector<Cab>& cabs);
    vector<Cab> suggest_nearby_cabs(pair<int, int> employee_location);
};

#endif // EMPLOYEE_CAB_SEARCH_H
