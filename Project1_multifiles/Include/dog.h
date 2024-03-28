#ifndef DOG_H
#define DOG_H


#include <string>
#include <iostream>
class Dog
{
public:
    explicit Dog(std::string name_param);
    Dog() = default;
    ~Dog();
    
    std::string get_name() const{
        return dog_name;
    }
    
    void set_dog_name(const std::string & name){
        dog_name = name;
    }
	
	void print_info(){
		std::cout << "Dog [ name : " << dog_name << " ]" <<  std::endl;
	}

	bool operator<(const Dog &other) const;
	bool operator>(const Dog &other) const;
	bool operator<=(const Dog &other) const;
	bool operator>=(const Dog &other) const;

	friend std::ostream &operator<<(std::ostream &os, const Dog &rhs);
    
private:
    std::string dog_name {"Puffy"};
};

inline bool Dog::operator<(const Dog &other) const {
    return dog_name < other.dog_name;
}

inline bool Dog::operator>(const Dog &other) const {
    return other < *this;
}

inline bool Dog::operator<=(const Dog &other) const {
    return !(other < *this);
}

inline bool Dog::operator>=(const Dog &other) const {
    return !(*this < other);
}


#endif // DOG_H
