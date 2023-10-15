#include <iostream>
#include <vector>
#include <algorithm> 
#include <set>
#include <string>
// I did'nt understand if we should add a function to create vector by adding the prices one by one. So I let it to the user.


float return_second(std::vector<float> vector){
    std::sort(vector.begin(),vector.end());
    return vector[vector.size() -2];
}

int main(){
    std::string stop = "n";
    std::vector<float> vector1;
    float number_to_add;
    std::string choice;
    std::cout<< "Will you add the prices manually? (y/n)";
    std::cin >> choice;
    if(choice == "y"){
        while (stop != "y" && stop == "n"){
            std::cout << "Please add price to the vector!";
            std::cin >> number_to_add;
            vector1.push_back(number_to_add);
            std::cout << "Do you want to stop adding? (y/n)";
            std::cin >> stop;
            while(stop != "n" && stop != "y"){
                std::cout << "Please write y or n only...";
                std::cin >> stop;
            }
    }

    } else{
        std::vector<float> vector1 = {}; // Please add vector here if you choose choice = "n"

    }
    
    
    
    std::set<float> uniqueprices(vector1.begin(), vector1.end());
    if(uniqueprices.size() == 1){
        std::cout << 1 << std::endl;
    } else{
        std::cout << return_second(vector1) << std::endl;
    }
    
    return 0; 
}