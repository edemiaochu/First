//
// Created by 15086 on 2022.8.28.
//
#include"../base.h"
#include"../person.h"
#ifndef INC_01_CONEXPTR_H
#define INC_01_CONEXPTR_H


class conexptr {
private:
    int nums;
public:
    conexptr(int num) noexcept;
    //constexpr conexptr(int num) noexcept;
    void print(people &p) noexcept;
    constexpr int add();
    ~conexptr();


};


#endif //INC_01_CONEXPTR_H
