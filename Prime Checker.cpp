#include <iostream>
#include <cmath>

int prime (int number){
    for(int i = 2; i < number; i++) {
        if(number % i == 0) {
            std::cout<<"Not a prime number"<<std::endl;
            return 0; 
        }
    }
    std::cout<<"Prime number"<<std::endl;
    return 1; 
    
}



int main() {
    int number;
    std::cout<<"Enter a number: ";
    std::cin>>number;
    std::cout<<prime(number)<<std::endl;
    return 0;
}
