#include "Book.h"

Book::Book(unsigned int id, std::string BookName, BookAvaliablity BAvaliableOrNot) :
 id{id}, BookName{BookName}, BAvaliableOrNot{BAvaliableOrNot}
{
}

std::ostream &operator<<(std::ostream &os, const Book &rhs)
{
    os << "id: " << rhs.id
       << " BookName: " << rhs.BookName
       << " BAvaliableOrNot: " << DiaplayBook(rhs.BAvaliableOrNot);
    return os;
}

std::string DisplayBook(BookAvaliablity value)

{
   if(value==BookAvaliablity::AVALIABLE){
        return "AVALIABLE";
   }
   else if(value==BookAvaliablity::NOTAVALIABLE){
        return  "NOTAVALIABLE";
   }
   else{
    //default case
        return "invalid choise";
   }
}
