#ifndef BOOK_H
#define BOOK_H

#include <string>
#include <ostream>
#include "BookEnumAvaliability.h"
#include <functional>

using ref=std::reference_wrapper<BookAvaliablity>;

class Book
{
private:
    /* data */
    unsigned int &id;
    std::string &BookName;
    ref BAvaliableOrNot;

public:
    Book(/* args */) = default;
    Book(unsigned int id,
         std::string BookName,
         BookAvaliablity BAvaliableOrNot);
    Book(const Book &obj) = default;
    Book(Book &&obj) = default;

    ~Book()
    {
    }

    Book &operator=(const Book &other)
    {
        if (this != &other)
        { // self-assignment check
            id = other.id;
            BookName = other.BookName;
            BAvaliableOrNot = other.BAvaliableOrNot;
        }
        return *this;
    }
    unsigned int &getId() const { return id; }
    void setId(unsigned int id_) { id = id_; }

    std::string &bookName() const { return BookName; }
    void setBookName(const std::string &bookName) { BookName = bookName; }

    ref bAvaliableOrNot() const { return BAvaliableOrNot; }
    void setBAvaliableOrNot(const ref &bAvaliableOrNot) { BAvaliableOrNot = bAvaliableOrNot; }

    friend std::ostream &operator<<(std::ostream &os, const Book &rhs);
};

std::string DiaplayBook(BookAvaliablity value);

#endif // BOOK_H
