#ifndef LIB_H
#define LIB_H

#include "Book.h"
#include <array>
#include <ostream>

class libManagement
{
private:
    /* data */
    std::array<Book, 10> Container;

public:
    libManagement(/* args */) = default;
    libManagement(std::array<Book, 10> Container);

    libManagement(const libManagement &obj) = default;
    libManagement(libManagement &&obj) = default;
    ~libManagement() {}

    std::array<Book, 10> container() const { return Container; }
    void setContainer(const std::array<Book, 10> &container)
    {
        for (int i = 0; i < container.size(); ++i)
        {
            Container[i] = container[i];
        }
    };
    friend std::ostream &operator<<(std::ostream &os, const libManagement &rhs);
};
#endif // LIB_H
