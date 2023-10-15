#include <iostream>
#include <cmath>

float find_area(int a,int b,int c) {
    float semi_parameter = (a + b + c)/2.0;
    float parameter = semi_parameter * (semi_parameter - a) * (semi_parameter - b) * (semi_parameter - c);
    float Area = sqrt(parameter);
    return Area;
}

int main()
{   int a;   
    int b;
    int c;
    std::cout << "What is your first length? (1/3): ";
    std::cin >> a;
    std::cout << "What is your second length? (2/3): ";
    std::cin >> b;
    std::cout << "What is your third length? (3/3): ";
    std::cin >> c;

    int decision;
    std::cout << "Do you want to change the price(currently 0.8$) ? (1/0)";
    std::cin >> decision;
    float price = 0.8 ;
    if (decision == 1) {
        std::cout << "What do you want to change the price into ?: ";
        std::cin >> price;
    }
    float end_price = find_area(a,b,c) * price;
    end_price = round(end_price * 10) / 10.0;
    std::cout << "You have to pay "<<end_price << "$ dollars"<< std::endl;

    return 0;
}
