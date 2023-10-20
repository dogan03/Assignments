#include <iostream>
#include <vector>
#include <cmath>

class Vec {
public:
    float* data;
    Vec(int size) : size(size), data(new float[size]) {}


    Vec(const Vec& other) : size(other.size), data(new float[size]){
        for (int i = 0; i< size; ++i){
            data[i] = other.data[i];
        }
    }

    Vec operator+(const Vec& other) const{
        if (size!=other.size) {
            throw std::invalid_argument("Vectors don't have the same size...");            
        }
        Vec result(size);
        for (int i = 0; i<size;++i){
            result.data[i] = data[i] + other.data[i];
        }

        return result;
    }

    Vec operator-(const Vec& other) const{
        if (size!=other.size) {
            throw std::invalid_argument("Vectors don't have the same size...");            
        }
        Vec result(size);
        for (int i = 0; i<size;++i){
            result.data[i] = data[i] - other.data[i];
        }   

        return result;
    }


    Vec operator*(int scalar) const{
        
        Vec result(size);
        for (int i = 0; i<size;++i){
            result.data[i] = data[i] * scalar;
        }

        return result;
    }

    Vec operator/(int scalar) const{
        
        Vec result(size);
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

    Vec vector1(4);
    vector1.data[0] = 1;
    vector1.data[1] = 2;
    vector1.data[2] = 3;
    vector1.data[3] = 4;


    Vec vector2(4);
    vector2.data[0] = 2;
    vector2.data[1] = 3;
    vector2.data[2] = 4;
    vector2.data[3] = 5;

    Vec result = vector1 + vector2; // You can change the operator.

    result.print();
    result.length();
    
    
    
    return 0;

    







}