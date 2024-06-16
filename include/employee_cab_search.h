#ifndef EMPLOYEE_CAB_SEARCH_H
#define EMPLOYEE_CAB_SEARCH_H

#include <bits/stdc++.h>
#include "cab.h"

using namespace std;

class EmployeeCabSearch {
private:
    vector<Cab>& cabs;
    static double calculate_distance(pair<double, double> location1, pair<double, double> location2);

public:
    EmployeeCabSearch(vector<Cab>& cabs);
    vector<Cab> suggest_nearby_cabs(pair<double, double> employee_location);
};

#endif // EMPLOYEE_CAB_SEARCH_H
