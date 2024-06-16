#ifndef REAL_TIME_LOCATION_DATA_H
#define REAL_TIME_LOCATION_DATA_H

#include <bits/stdc++.h>
#include "cab.h"

using namespace std;

class RealTimeLocationData {
private:
    unordered_map<int, pair<int, int>> cab_locations;
    vector<Cab>* cabs_reference;

public:
    void set_cabs_reference(vector<Cab>& cabs);
    void update_cab_location(int cab_id, pair<int, int> new_location);
};

#endif // REAL_TIME_LOCATION_DATA_H
