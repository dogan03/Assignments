#include <iostream>
#include <vector>
#include <algorithm> 
#include <set>
#include <string>

using namespace std;

template <typename Temp>
Temp seclarg(vector<Temp> arr){
    Temp l1 = arr[0];
    Temp l2 = arr[0];
    for (int i = 0; i< arr.size(); i++){
        l1 = arr[i];
        if (l1 != l2){
            break;
        }
    }
    bool eq = true;
    for(int i=0; i<arr.size();i++){
        if(arr[i] != l1){
            eq = false;
        }
        if (arr[i]>l1){
            l2 = l1;
            l1 = arr[i];
        } 
        else if (arr[i] > l2 && arr[i] < l1){
            l2 = arr[i];
        }
    }
    if (eq) {
        return Temp(1);
    }
    return l2;

}


int main(){
    string stop = "n";
    vector<float> vector1;
    float number_to_add;
    string choice;
    cout<< "Will you add the prices manually? (y/n) : ";
    cin >> choice;
    if(choice == "y"){
        while (stop != "y" && stop == "n"){
            cout << "Please add price to the vector!: ";
            cin >> number_to_add;
            vector1.push_back(number_to_add);
            cout << "Do you want to stop adding? (y/n): ";
            cin >> stop;
            while(stop != "n" && stop != "y"){
                cout << "Please write y or n only... : ";
                cin >> stop;
            }
    }

    } else{
        vector1 = {123,12}; // Please add vector here if you choose choice = "n"

    }
    int res,pass = seclarg(vector1);
    if (pass = 1){
        cout << seclarg(vector1) << std::endl;
    } else{
        cout << 1 << std::endl;
    }
    return 0; 
}