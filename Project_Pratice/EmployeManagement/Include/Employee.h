#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <iostream>

class Employee
{
private:
    /* data */
    std::string EmpName{"sam"};
    uint Id{0};
    int Salary;

public:
    Employee(/* args */) = default;
    Employee(std::string EmpName,
             uint Id,
             int Salary);
    Employee(const Employee & obj)=default;
    Employee(Employee && obj)=default;

    ~Employee();

    std::string empName() const { return EmpName; }
    void setEmpName(const std::string &empName) { EmpName = empName; }

    uint id() const { return Id; }
    void setId(const uint &id) { Id = id; }

    int getSalary() const { return Salary; }
    void setSalary(int salary_) { Salary = salary_; }

    bool operator==(const Employee &other) const;
    bool operator!=(const Employee &other) const;
    
    
    friend std::ostream &operator<<(std::ostream &os, const Employee &rhs);

};

#endif // EMPLOYEE_H
