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
    for (int i = 0; i < numbers.size();i++){
        cout << numbers[i] << " ";
    }


    return 0;
}