//
// Created by 15086 on 2022.8.25.
//

#include "person.h"
person::person(){}
person::person(const std::string &name):name(name){}
person::person(const std::string &name, int age):person(name){this->age=age;}
void person::getup(){
    std::cout<<name<<" is  getting up"<<std::endl;
}
void person::eat() {
    std::cout<<name<<" is eating breakfast in the person class"<<std::endl;
}
void person::sequence(){
    getup();
    eat();
    run(name);
    gotowork();
}
void person::run(std::string name){
    std::cout<<"l.k. is running in class person"<<std::endl;
}

void person::gotowork(){
    std::cout<<"l.k. is going to work in class person"<<std::endl;
}


person::~person(){
    std::cout<<"person destructor"<<std::endl;
}

const std::string &person::getName() const {
    return name;
}


