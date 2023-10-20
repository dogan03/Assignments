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
int power(int a, int b) {
    int result = 1;
    for (int i = 0; i < b; i++) {
        result *= a;
    }
    return result;
}
int modulo_check(int n, int j){
    using namespace std;
    int m = 1;
    while (power(n,m)%j != 1){
        m+=1;
    }
    return m;
}


int main(){
    using namespace std;
    int p;
    do {
        cout << "pls enter a prime number: ";
        cin >> p;
    } while (!prime_check(p));
    vector<int> numbers;
    for (int i =2; i<p; i++){
        numbers.push_back(modulo_check(i,p));
    }
    cout << "Numbers are: [";
    for (int i = 0; i < numbers.size();i++){
        if (i == numbers.size()-1){
            cout<<numbers[i] << "]" <<endl;
        }
        else{
            cout << numbers[i] << ",";
        }
    }


    return 0;
}
