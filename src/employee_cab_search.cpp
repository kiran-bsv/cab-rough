#include "employee_cab_search.h"

EmployeeCabSearch::EmployeeCabSearch(vector<Cab>& cabs) : cabs(cabs) {}

double EmployeeCabSearch::calculate_distance(pair<int, int> location1, pair<int, int> location2) {
    return sqrt(pow(location1.first - location2.first, 2) + pow(location1.second - location2.second, 2));
}

vector<Cab> EmployeeCabSearch::suggest_nearby_cabs(pair<int, int> employee_location) {
    vector<Cab> nearby_cabs;
    for (auto& cab : cabs) {
        if (calculate_distance(cab.location, employee_location) < 5) {
            nearby_cabs.push_back(cab);
        }
    }
    return nearby_cabs;
}
