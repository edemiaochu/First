//
// Created by 15086 on 2022.8.25.
//

#include "man.h"
void man::eat() {
    std::cout<<"l.k. is eating breakfast in the man class"<<std::endl;
}
void man::run(std::string name) {
    std::cout<<name<<" is running"<<std::endl;
}
void man::gotowork() {
    std::cout<<getName()<<" is going to work"<<std::endl;
}

man::man(const std::string &name, int age, const std::string &gender) : person(name, age), gender(gender) {}


man::~man(){
    std::cout<<"man destrctor"<<std::endl;
}




