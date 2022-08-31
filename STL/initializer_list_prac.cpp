//
// Created by 15086 on 2022.8.31.
//
#include"initializer_list.h"

void inilistshow(std::initializer_list<int> il)
{
    for(auto s:il)
    {
        std::cout<<s<<"  ";
    }
    std::cout<<std::endl;

}

void inilist()
{
    std::initializer_list<int> il1{1,2,3,4,5,6};
    inilistshow(il1);
    std::cout<<il1.size()<<std::endl;

}
