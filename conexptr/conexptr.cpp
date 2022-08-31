//
// Created by 15086 on 2022.8.28.
//

#include "conexptr.h"



conexptr::conexptr(int num) noexcept:nums(num) {
}

void conexptr::print(people &p) noexcept {
    std::cout<<p.name<<"'s name is "<< p.name<<std::endl;
    std::cout<<p.name<<"'s phonenumber is "<< p.phone <<std::endl;
    for(auto s:p.relative)
       std::cout<<p.name<<"'s relatives are "<< s <<std::endl;
}

constexpr int conexptr::add() {
    constexpr int a=100;
    constexpr int b=200;
    return a+b;
}
conexptr::~conexptr() {
    std::cout<<"conexptr destructor is used..."<<std::endl;

}

