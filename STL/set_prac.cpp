//
// Created by 15086 on 2022.8.28.
//

#include "set_prac.h"



set_prac::set_prac() {
    std::cout<<"using non_parameters set_prac constructor "<<std::endl;

}


void set_prac::setSports(const std::set<std::string> &sports) {
    set_prac::sports = sports;
}
void set_prac::test() {
    std::vector<int> v1{2,6,3,89,34,2,67,8,2};
    std::set<int> st1{10,20,30,40};
    std::multiset<int> mst1{1,4,2,5,6,3,2,1,4};
    std::unordered_set<int> ust1{2,4,5,7,1,7,9,1};
    auto [ok1,it1]=st1.insert(5);
    std::cout<<"the position is : "<<*ok1<<std::endl;
    std::cout<<"success or not :  "<<it1<<std::endl;
    std::cout<<"set ="<<st1<<std::endl;
    std::cout<<"unordered_set ="<<ust1<<std::endl;
    sort(v1.begin(),v1.end());
    std::cout<<INT_MIN<<std::endl;




    std::cout<<"multiset ="<< mst1<<std::endl;
    //删除以后
    auto r= mst1.equal_range(2);
    mst1.erase(r.first,r.second);
    std::cout<<"multiset ="<< mst1<<std::endl;
    mst1.erase(8);

    std::cout<<"multiset ="<< mst1<<std::endl;

    std::cout<<"vector ="<<v1<<std::endl;
    auto p1=st1.find(20);
    auto p2=st1.lower_bound(11);
    std::cout<<*p2<<std::endl;
    std::cout<<v1.size()<<std::endl;
    std::cout<<st1.size()<<std::endl;
    std::cout<<mst1.size()<<std::endl;
    std::cout<<(mst1.find(10)!=mst1.end())<<std::endl;





}
