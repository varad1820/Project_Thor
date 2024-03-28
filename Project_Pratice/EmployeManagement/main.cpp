#include"EmpManager.h"
#include<iostream>




int main(){
    std::shared_ptr<Employee> emp1=std::make_shared<Employee>("varad",1,25555);
    std::shared_ptr<Employee> emp2=std::make_shared<Employee>("varada",2,25555);
    std::shared_ptr<Employee> emp3=std::make_shared<Employee>("varadi",3,25555);
    std::vector<Pointes_types> list{emp1,emp2,emp3};
    std::shared_ptr<EmpManager> Obj1_=std::make_shared<EmpManager>(list);
    std::cout<<"the details are "<<" \n";
    Obj1_->display_details("varad");
    std::cout<<"the details are "<<" \n";

    
    Obj1_->Add_New_Employe(std::make_shared<Employee>("sunny",4,30000));

}

