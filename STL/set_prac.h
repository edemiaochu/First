//
// Created by 15086 on 2022.8.28.
//
#include"../base.h"
#ifndef INC_01_SET_PRAC_H
#define INC_01_SET_PRAC_H


class set_prac {
private:
    std::set<std::string> sports;
public:
    set_prac();

    void setSports(const std::set<std::string> &sports);

    void test();


};


#endif //INC_01_SET_PRAC_H
