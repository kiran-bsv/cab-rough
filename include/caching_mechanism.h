#ifndef CACHING_MECHANISM_H
#define CACHING_MECHANISM_H

#include <bits/stdc++.h>

using namespace std;

class CachingMechanism {
private:
    unordered_map<string, string> cache;

public:
    string get_from_cache(const string& key);
    void add_to_cache(const string& key, const string& value);
};

#endif // CACHING_MECHANISM_H
