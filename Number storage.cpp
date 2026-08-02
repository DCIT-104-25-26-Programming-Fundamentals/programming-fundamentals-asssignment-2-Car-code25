#include <iostream>
#include <cmath>
#include <vector>



using namespace std;

int main (){
   
   
    vector<int> arr;


    int nums;
    std::cout<<"How many numbers?:";
    std::cin>>nums;



    for(int i = 0; i < nums; i++){
        
        int number;
        std::cout<<"Enter a number "<<i + 1<<": ";
        std::cin>>number;

        arr.push_back(number);
    }

        int sum = 0;
        int maximum = arr[0];
        int minimum = 0;


        for (int i = 0; i< nums; i++){
             sum += arr[i];
    
        if (arr[i]>maximum) {
                minimum = arr[i];
        }

        if (arr[i]<minimum){
            minimum = arr[i];
        }
        std::cout<<"Sum:"<<sum<<std::endl;
        std::cout<<"Maximum:"<<maximum<<std::endl;
        std::cout<<"Minimum:"<<minimum<<std::endl;

        return 0;


        }
        


         int average = sum/nums;
         std::cout<<"Average: "<<nums<<std::endl;
         return 0;



}
