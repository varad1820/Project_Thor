#ifndef EMPMANAGER_H
#define EMPMANAGER_H

#include "Employee.h"
#include <vector>
#include <memory>
#include <iostream>

using Pointes_types = std::shared_ptr<Employee>;

class EmpManager
{
private:
    /* data */
    std::vector<Pointes_types> Objcontainer;

public:
    EmpManager(/* args */) = default;
    EmpManager(std::vector<Pointes_types> ObjcontainerObj);
    
    EmpManager(const EmpManager & obj)=default;
    EmpManager(EmpManager && obj)=default;

    void display_details(std::string && placeholder);
    void Add_New_Employe(Pointes_types && obj);
    ~EmpManager() {}

    std::vector<Pointes_types> obj() const { return Objcontainer; }
    void setObj(const std::vector<Pointes_types> &obj) { Objcontainer = obj; }

    bool operator==(const EmpManager &other) const;
    bool operator!=(const EmpManager &other) const;

    friend std::ostream &operator<<(std::ostream &os, const EmpManager &rhs);


};

#endif // EMPMANAGER_H
