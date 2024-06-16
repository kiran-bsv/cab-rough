#include "real_time_location_data.h"

void RealTimeLocationData::set_cabs_reference(vector<Cab>& cabs) {
    cabs_reference = &cabs;
}

void RealTimeLocationData::update_cab_location(int cab_id, pair<int, int> new_location) {
    cab_locations[cab_id] = new_location;
    for (auto& cab : *cabs_reference) {
        if (cab.id == cab_id) {
            cab.location = new_location;
            break;
        }
    }
}
