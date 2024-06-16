#include "cab_allocator.h"

CabAllocator::CabAllocator(vector<Cab>& cabs) : cabs(cabs) {}

double CabAllocator::calculate_distance(pair<int, int> location1, pair<int, int> location2) {
    return sqrt(pow(location1.first - location2.first, 2) + pow(location1.second - location2.second, 2));
}

Cab CabAllocator::suggest_best_cab(const Trip& trip) {
    return *min_element(cabs.begin(), cabs.end(), [&](const Cab& a, const Cab& b) {
        return calculate_distance(a.location, trip.start_location) < calculate_distance(b.location, trip.start_location);
    });
}
