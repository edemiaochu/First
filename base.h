//
// Created by 15086 on 2022.8.28.
//

#ifndef INC_01_BASE_H
#define INC_01_BASE_H
#include <iostream>
#include<string>
#include<vector>
#include<memory>
#include<functional>
#include<algorithm>
#include<map>
#include<chrono>
#include<thread>
#include<set>
#include<unordered_set>
#include<unordered_map>

namespace {
    template<class T>
    std::ostream &operator<<(std::ostream &os, std::vector<T> const &v) {
        os << '{';
        auto it = v.begin();
        if (it != v.end()) {
            os << *it;
            for (++it; it != v.end(); ++it) {
                os << ',' << *it;
            }
        }
        os << '}';
        return os;
    }

    template<class T>
    std::ostream &operator<<(std::ostream &os, std::set<T> const &v) {
        os << '{';
        auto it = v.begin();
        if (it != v.end()) {
            os << *it;
            for (++it; it != v.end(); ++it) {
                os << ',' << *it;
            }
        }
        os << '}';
        return os;
    }

    template<class T>
    std::ostream &operator<<(std::ostream &os, std::multiset<T> const &v) {
        os << '{';
        auto it = v.begin();
        if (it != v.end()) {
            os << *it;
            for (++it; it != v.end(); ++it) {
                os << ',' << *it;
            }
        }
        os << '}';
        return os;
    }
    template<class T>
    std::ostream &operator<<(std::ostream &os, std::unordered_set<T> const &v) {
        os << '{';
        auto it = v.begin();
        if (it != v.end()) {
            os << *it;
            for (++it; it != v.end(); ++it) {
                os << ',' << *it;
            }
        }
        os << '}';
        return os;
    }
}
#endif //INC_01_BASE_H
