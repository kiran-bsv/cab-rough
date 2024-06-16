#ifndef TRIP_H
#define TRIP_H

#include <bits/stdc++.h>

using namespace std;

class Trip {
public:
    int id;
    pair<int, int> start_location;

    Trip(int id, pair<int, int> start_location);
};

#endif // TRIP_H
