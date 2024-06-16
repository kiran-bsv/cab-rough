#ifndef CAB_ALLOCATOR_H
#define CAB_ALLOCATOR_H

#include <bits/stdc++.h>
#include "cab.h"
#include "trip.h"

using namespace std;

class CabAllocator {
private:
    vector<Cab>& cabs;
    static double calculate_distance(pair<double, double> location1, pair<double, double> location2);

public:
    CabAllocator(vector<Cab>& cabs);
    Cab suggest_best_cab(const Trip& trip);
};

#endif // CAB_ALLOCATOR_H
