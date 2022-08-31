//
// Created by 15086 on 2022.8.25.
//
#include<string>
#include<iostream>
#include<vector>
#ifndef INC_01_PERSON_H
#define INC_01_PERSON_H
struct people{
    std::string name;
    std::string phone;
    std::vector<std::string> relative;
};

class person {
private:
    std::string name{"lk"};
    int age{1};
public:
    person();
    person(const std::string &name1);
    person(const std::string &name,int age);

    void getup();
    void eat();
    virtual  void run(std::string name);
    virtual  void gotowork();

    const std::string &getName() const;

    void sequence();

    virtual ~person();

};


#endif //INC_01_PERSON_H
