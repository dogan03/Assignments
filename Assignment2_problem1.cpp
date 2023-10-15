#include <iostream>
#include <vector>
// I didn't get if the expected vector is consisted of Ks or modulos?
bool prime_check(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}


int main(){
    int p;

    do {
        std::cout << "pls enter a prime number: ";
        std::cin >> p;
    } while (!prime_check(p));

    std::vector <int> modulos;

    for (int i = 1; i<p; i++){
        modulos.push_back(i%p);
    }

    std::cout << "Modulos up to p are: ";
    for (int modulo: modulos) {
        std::cout <<modulo << ",";
    }
    std::cout << std::endl;
    return 0;
}