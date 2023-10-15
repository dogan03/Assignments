#include <iostream>
int quot(int N, int M) {
    int quot = N/M;
    return quot;
}
int rem(int N,int M) {
    int rem = N%M;
    return rem;
}

int main(){
    int N,M;

    std::cout << "N is: ";
    std::cin>>N;
    std::cout << "M is: ";      
    std::cin>>M;
    while (M == 9) {
        std::cout << "M should be different than 9!: ";
        std::cin>>M;
    }
    
    std::cout<< "For Non-standard boxes there will be "<< quot(N,M) << " boxes " << " and " << rem(N,M) << " Candies will be left" << std::endl;
    std::cout<< "For standard boxes there will be "<< quot(N,9) << " boxes" << " and " << rem(N,9) << " Candies will be left" <<std::endl;


    return 0;
}