#include <iostream>
#include <cmath>



int add(int first_number, int second_number) {
    return first_number + second_number;
    }
int subtract(int first_number, int second_number){
    return first_number - second_number;
}

int multiply(int first_number, int second_number) {
    return first_number * second_number;
}

int divide(int first_number, int second_number){
    if ( second_number == 0){
        std::cout<<"Math Error"<<std::endl;
        return 0;
    }
    else{
    return first_number/ second_number;}
}

int modulus(int first_number, int second_number){
    return first_number % second_number;
}

int exponent (int first_number, int second_number){
    return pow(first_number, second_number);

}

 




int main ( ) {

    int user_choice;
    int first_number;
    int second_number;

    while (true){
 for (int i = 0; i < 20; i++) {
    std::cout << "=";
}

std::cout << "\nSIMPLE CALCULATOR\n";

for (int i = 0; i < 20; i++) {
    std::cout << "=";
}
   std::cout << std::endl;

std::cout << "1. Addition" << std::endl;
std::cout << "2. Subtraction" << std::endl;
std::cout << "3. Multiplication" << std::endl;
std::cout << "4. Division" << std::endl;
std::cout << "5. Modulus" << std::endl;
std::cout << "6. Exponent" << std::endl;
std::cout << "7. Quit" << std::endl;

std::cout << std::endl;


    std::cout<<"Choose an option (1-7): ";
    std::cin>>user_choice;

    if (user_choice == 7){
        std::cout<<"Calculation halted"<<std::endl;
        break;
    }


    std::cout<<"Enter first number: ";
    std::cin>>first_number;

    std::cout<<"Enter second number: ";
    std::cin>>second_number;

    

    

     if(user_choice == 1){
        int result = add( first_number,  second_number);
        std::cout<<result <<std::endl;
    }

    else if (user_choice == 2) {
        int result = subtract(first_number,second_number);
        std::cout<<result<<std::endl;
    }

    else if (user_choice == 3) {
        int result = multiply(first_number, second_number);
        std::cout<<result<<std::endl;
    }

    else if (user_choice == 4) {
        int result = divide(first_number, second_number);
        std::cout<<result<<std::endl;
    }

    else if (user_choice == 5) {
        int result = modulus(first_number, second_number);
        std::cout<<result<<std::endl;
    }

    else if (user_choice == 6) {
    int result = exponent(first_number, second_number);
    std::cout <<result<< std::endl;
}
    else {
    std::cout << "Invalid option!" << std::endl;
}

    
}
    return 0;
}



    



    