#include <iostream>
#include<memory>
//#include"person.h"
#include"man.h"
#include "map_prac.hpp"
#include"conexptr/conexptr.h"
#include"STL/set_prac.h"
#include "STL/initializer_list.h"
void function1(const people &pl){
    std::cout<<pl.name<<std::endl;
    std::cout<<pl.phone<<std::endl;
    std::cout<<"my first relative is "<<pl.relative.at(0)<<std::endl;
    std::cout<<"my second relative is "<<pl.relative.at(1)<<std::endl;
    std::cout<<"my third relative is "<<pl.relative.at(2)<<std::endl;
    //pl.phone="123456";
}
//struct sport{
//    std::vector<std::string> sports;
//    sport(const std::vector<std::string> & v1){
//        sports=v1;
//    }
//};
struct test{
    int m_grade;
     constexpr test (int grade):m_grade(grade){

    }
};

int main() {
    people lk{"l.k.","18360238897",{"laoma","laoba","dajie","erjie"}};

    conexptr ep{1};
    ep.print(lk);

    std::vector<std::string> v{"basketball","baseball","pingpang"};
    //constexpr struct sport sp1(v);
    constexpr int a=100;
    constexpr test g1={100};
    set_prac stp1;
    stp1.test();
    inilist();

    return 0;
}
