#include <iostream>
#include <vector>
#include <string>

std::vector<std::vector<int>> First_matrix(){
    int row;
    int col;
    std::cout << "Please write the row number of first matrix: ";
    std::cin >> row;
    std::cout << "Please write the column number of first matrix: ";
    std::cin >> col;
    std::vector<std::vector<int>> matrix1(row, std::vector<int>(col, 0));
    for (int i = 0; i<row; i++){
        for (int k = 0; k<col; k++){
            std::cout << "Please enter Matrix1[" + std::to_string(i) + "]" + "[" + std::to_string(k) + "]";
            std::cin >> matrix1[i][k];
        }
        
    }
    return matrix1; 
}
std::vector<std::vector<int>> Subtract(const std::vector<std::vector<int>>& Matrix1, const std::vector<std::vector<int>>& Matrix2){
    if (Matrix1.size() != Matrix2.size() || Matrix1[0].size() != Matrix2[0].size()){
        std::cerr << "Shapes of the two Matrices are not the same!!" << std::endl;
        return std::vector<std::vector<int>>();
    }
    std::vector<std::vector<int>> result_matrix(Matrix1.size(), std::vector<int>(Matrix1[0].size(), 0));
    for (int i = 0; i < Matrix1.size();i++){
        for (int k = 0; k< Matrix1[0].size();k++){
            result_matrix[i][k] = Matrix1[i][k] - Matrix2[i][k];

        }
    }
    std::cout << "The result of your subtraction is;" <<std::endl;
    for (size_t i = 0; i < result_matrix.size(); i++) {
        for (size_t k = 0; k < result_matrix[i].size(); k++) {
            std::cout << result_matrix[i][k] << " ";
        }
        std::cout << std::endl;
    }
    return result_matrix;

}



std::vector<std::vector<int>> Summation(const std::vector<std::vector<int>>& Matrix1, const std::vector<std::vector<int>>& Matrix2){
    if (Matrix1.size() != Matrix2.size() || Matrix1[0].size() != Matrix2[0].size()){
        std::cerr << "Shapes of the two Matrices are not the same!!" << std::endl;
        return std::vector<std::vector<int>>();
    }
    std::vector<std::vector<int>> result_matrix(Matrix1.size(), std::vector<int>(Matrix1[0].size(), 0));
    for (int i = 0; i < Matrix1.size();i++){
        for (int k = 0; k< Matrix1[0].size();k++){
            result_matrix[i][k] = Matrix1[i][k] + Matrix2[i][k];

        }
    }
    std::cout << "The result of your summation is;" <<std::endl;
    for (size_t i = 0; i < result_matrix.size(); i++) {
        for (size_t k = 0; k < result_matrix[i].size(); k++) {
            std::cout << result_matrix[i][k] << " ";
        }
        std::cout << std::endl;
    }
    return result_matrix;

}






std::vector<std::vector<int>> Second_matrix(){
    int row;
    int col;
    std::cout << "Please write the row number of second matrix: ";
    std::cin >> row;
    std::cout << "Please write the column number of second matrix: ";
    std::cin >> col;
    std::vector<std::vector<int>> matrix2(row, std::vector<int>(col, 0));
    for (int i = 0; i<row; i++){
        for (int k = 0; k<col; k++){
            std::cout << "Please enter Matrix2[" + std::to_string(i) + "]" + "[" + std::to_string(k) + "]";
            std::cin >> matrix2[i][k];
        }
        
    }
    return matrix2; 
}
int main() {
    std::vector<std::vector<int>> matrix1 = First_matrix();
    std::vector<std::vector<int>> matrix2 = Second_matrix();
    std::cout << "Your first Matrix is the following;"<< std::endl;
    for (size_t i = 0; i < matrix1.size(); i++) {
        for (size_t k = 0; k < matrix1[i].size(); k++) {
            std::cout << matrix1[i][k] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << "Your Second Matrix is the following;" << std::endl;
    for (size_t i = 0; i < matrix2.size(); i++) {
        for (size_t k = 0; k < matrix2[i].size(); k++) {
            std::cout << matrix2[i][k] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << "You can use Subtract(Matrix1,Matrix2) or Summation(Matrix1,Matrix2) functions too...  " << std::endl;
    Subtract(matrix1,matrix2);
    Summation(matrix1,matrix2);
    return 0;

}