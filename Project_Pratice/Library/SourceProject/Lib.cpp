#include"Lib.h"




libManagement::libManagement(std::array<Book, 10> Container)
:Container{Container}
{
}


std::ostream &operator<<(std::ostream &os, const libManagement &rhs) {
    os << "Container: " << rhs.Container;
    return os;
}
