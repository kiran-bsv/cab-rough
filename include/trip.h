#ifndef TRIP_H
#define TRIP_H

#include <bits/stdc++.h>

using namespace std;

class Trip {
public:
    int id;
    pair<double, double> start_location;

    Trip(int id, pair<double, double> start_location);
};

#endif // TRIP_H
