#include "caching_mechanism.h"

string CachingMechanism::get_from_cache(const string& key) {
    auto it = cache.find(key);
    if (it != cache.end()) {
        return it->second;
    }
    return "";
}

void CachingMechanism::add_to_cache(const string& key, const string& value) {
    cache[key] = value;
}
