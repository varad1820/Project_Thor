#include "EmpManager.h"

EmpManager::EmpManager(std::vector<Pointes_types> Objcontainer) : Objcontainer{Objcontainer}
{
}

void EmpManager::display_details(std::string &&placeholder)
{
    std::cout<<Objcontainer.size();
    // std::cout<<Objcontainer.at(0)->empName();
    for (auto i : Objcontainer)
    {
        std::cout << "the details are "
                  << " \n";

        if (placeholder == i->empName())
        {
            std::cout << *i << std::endl;
        }
    }
}

void EmpManager::Add_New_Employe(Pointes_types &&obj)
{
    Objcontainer.push_back(obj);
}

std::ostream &operator<<(std::ostream &os, const EmpManager &rhs)
{
    os << "Obj: ";
    for (auto &i : rhs.Objcontainer)
    {
        os << i << " ";
    }
    return os;
}

bool EmpManager::operator==(const EmpManager &other) const
{
    return Objcontainer == other.Objcontainer;
}

bool EmpManager::operator!=(const EmpManager &other) const
{
    return !(*this == other);
}
