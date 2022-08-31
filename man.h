//
// Created by 15086 on 2022.8.25.
//
#include"person.h"
#ifndef INC_01_MAN_H
#define INC_01_MAN_H


class man :public person{
private:
    std::string gender;
public:
    using person::person;
    using person::eat;
    man(const std::string &name, int age, const std::string &gender);
    void eat();
    void run(std::string name) override;
    void gotowork() override;
    ~man();


};


#endif //INC_01_MAN_H
