#include"Employee.h"


Employee::Employee(std::string EmpName, uint Id, int Salary)
:EmpName{EmpName},Id{Id},Salary{Salary}
{
}

Employee::~Employee()
{

}

bool Employee::operator==(const Employee &other) const {
    return EmpName == other.EmpName
        && Id == other.Id
        && Salary == other.Salary;
}

bool Employee::operator!=(const Employee &other) const {
    return !(*this == other);
}

std::ostream &operator<<(std::ostream &os, const Employee &rhs) {
    os << "EmpName: " << rhs.EmpName
       << " Id: " << rhs.Id
       << " salary: " << rhs.Salary;
    return os;
}
