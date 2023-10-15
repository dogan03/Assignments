#include <iostream>
#include <string>
int sol(std::string text) {
    for (char &c :text) {
        c = std::tolower(c);
    }
    
    int l = 0;
    int r = text.length()-1;
    char left,right;
    while (l<r){

        left = text[l];
        right = text[r];
        if (left != right){
            std::cout << "Your word is not palindrome!"<< std::endl;
            return 0;
        }
        
        l++;
        r--;
    }

    std::cout << "Your word is a palindrome!" << std::endl;





    return 0;
}

int main(){
    std::string word;
    std::string check;
    do {
        std::cout << "Please write the word: ";
        std::cin >> word;
        std::cout << sol(word) << std::endl;
        std::cout << "Do you want to check another string? (y/n)";
        std::cin >> check;
        while(check != "y" && check != "n") {
            std::cout << "Pls write 'y' or 'n'...";
            std::cin >> check;
        }
    } while(check == "y");
    return 0;
}