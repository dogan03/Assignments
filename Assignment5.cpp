#include <iostream>
#include <vector>
#include <cmath>

class Vector {
public:
    std::vector<float> data;
    Vector(int size) : size(size), data(size) {}

    Vector operator+(const Vector& other) const{
        if (size!=other.size) {
            throw std::invalid_argument("Vectors don't have the same size...");            
        }
        Vector result(size);
        for (int i = 0; i<size;++i){
            result.data[i] = data[i] + other.data[i];
        }

        return result;
    }

    Vector operator-(const Vector& other) const{
        if (size!=other.size) {
            throw std::invalid_argument("Vectors don't have the same size...");            
        }
        Vector result(size);
        for (int i = 0; i<size;++i){
            result.data[i] = data[i] - other.data[i];
        }

        return result;
    }


    Vector operator*(int scalar) const{
        
        Vector result(size);
        for (int i = 0; i<size;++i){
            result.data[i] = data[i] * scalar;
        }

        return result;
    }

    Vector operator/(int scalar) const{
        
        Vector result(size);
        for (int i = 0; i<size;++i){
            result.data[i] = data[i] / scalar;
        }

        return result;
    }


    int length(){
        int pythagorean = 0;
        for (int i = 0; i<size;++i){
            pythagorean += pow(data[i], 2);
        }
        std::cout << "The length is : " << sqrt(pythagorean) << std::endl;
        return sqrt(pythagorean);

    }
    void print() {
        for (int i = 0; i < size; ++i) {
            std::cout << data[i] << " ";
        }
        std::cout << std::endl;
    }

private:
    int size;
    
};


int main(){

    Vector vector1(4);
    vector1.data = {1,2,3,4};

    Vector vector2(4);
    vector2.data = {4,5,3,6};

    Vector result = vector1 / 4; // You can change the operator.

    result.print();
    result.length();
    
    
    
    return 0;

    







}