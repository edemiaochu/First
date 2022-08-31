//
// Created by 15086 on 2022.8.27.
//
#include<iostream>
#include<map>
#ifndef INC_01_MAP_PRAC_H
#define INC_01_MAP_PRAC_H
template<class T1,class T2>
void printmap(std::map<T1,T2> mp){
    for(auto it=mp.begin();it!=mp.end();++it){
        std::cout<<"the first value is "<<it->first<<"   the second value is "<<it->second<<std::endl;
    }

}

void map_1(){
    std::map<int,int> mp1;
    mp1.insert(std::map<int,int>::value_type(1,10));
    mp1.insert(std::map<int,int>::value_type(2,20));
    mp1.insert(std::map<int,int>::value_type(3,30));
    mp1.insert(std::map<int,int>::value_type(4,40));
    printmap(mp1);
    std::map<int,int> mp2;
    mp2.insert(std::map<int,int>::value_type(7,1000));
    mp2.insert(std::map<int,int>::value_type(8,2000));
    mp2.insert(std::map<int,int>::value_type(9,3000));
    mp2.insert(std::map<int,int>::value_type(10,4000));
    mp1.swap(mp2);
    printmap(mp1);
    printmap(mp2);
    std::cout<<"the number of mp1 is "<<mp1.size()<<std::endl;
    std::cout<<"the key3 of mp1 is "<<mp1.find(8)->second<<std::endl;
}
#endif //INC_01_MAP_PRAC_H
