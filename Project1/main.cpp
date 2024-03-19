#include<iostream>

template<typename T>
T add( T a,T b){
    return a+b;
}


int main(){
    std::cout<<"Hi there \n";
    std::cout<<"the sum is : "<<add(3,4)<<"\n";

}