#include <iostream>
#include <cstring>
class B
{
private:
    /* data */
    int val;
    int &ref_val;
    const int cnt;
    char *str;
    static inline  int s {10};

public:
    B() = default;
    B(int val, int &ref_val, const int cnt, char *str) : val{val}, ref_val{ref_val}, cnt{cnt}
    {
        std::cout << "Constructor was called \n ";
        this->str = new char[strlen(str) + 1];
        strcpy(this->str, str);
    };
    void access_static(int s){
        this->s=s;
    }  

    B(const B &rhs) : val{rhs.val}, ref_val{rhs.ref_val}, cnt{rhs.cnt}
    {
        std::cout << "inside B copy \n";

        this->str = new char[strlen(rhs.str) + 1];
        strcpy(this->str, rhs.str);
    }
    B &operator=(const B &rhs)
    {
        std::cout << "inside B assignment \n";
        if (this != &rhs)
        {
            this->val = rhs.val;
            this->ref_val = rhs.ref_val;
            const_cast<int &>(this->cnt) = rhs.cnt;
            delete[] str;
            str = new char[strlen(rhs.str) + 1];
            strcpy(str, rhs.str);
        }
        return *this;
    }
    void Display() const
    {
        std::cout << "Display form base " << val << " " << ref_val << " " << cnt << " " << str << " " << s << "\n";
    }

    ~B()
    {
        delete[] str;
    }
};

class D : public B
{
private:
    /* data */
    int val{1};

public:
    D(/* args */) = default;
    D(int val, int &ref_val, const int cnt, char *str, int val_) : B(val, ref_val, cnt, str), val{val_} {

                                                                                              };

    D(const D &rhs) : B(rhs), val{rhs.val}
    {
        std::cout << "inside B copy \n";
    };

    D &operator=(const D &rhs)
    {
        std::cout << "inside D assignment \n";

        if (this != &rhs)
        {
            B::operator=(rhs);
            val = rhs.val;
        }
        return *this;
    }

    void Display() const
    {
        B::Display();
        std::cout << "Display form deerived  " << " " << val << "\n";
    }

    ~D() {}
};

// int B::s=5;
int main()
{
    int val{3};
    char name[2][20]{"KPIT_pune","KPIT_Banglore"};
    
    B B1(1, val, 2, name[0]);
    B1.Display();

    B B2 (2, val, 5, name[1]);
    B2.Display();

    B2=B1;
    B2.Display();

    B B3=B1;
    B3.Display();






}