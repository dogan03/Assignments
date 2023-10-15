#include <iostream>
#include <vector>


std::vector<std::vector<int>> Matrix(int coefficientt, int roww,std::vector<int> seqq){
    
    std::vector<std::vector<int>> matrix(roww, std::vector<int>(seqq.size(), 0));
    for (int i = 0; i<roww; i++){
        for (int k = 0; k<seqq.size(); k++){
            matrix[i][k] = seqq[k] * coefficientt;
        }
      
    }
    return matrix;  
}

int main(int argc, char * argv[]){

    if (argc >=4){


        int coefficient = std::stoi(argv[1]);
        int row = std::stoi(argv[2]);
        std::vector<int> seq;
        for (int i= 3; i< argc;i++){
            int el = std::stoi(argv[i]);
            seq.push_back(el); 
        }
        std::cout << "Your Coefficient is : " << coefficient << std::endl;
        std::cout << "Your number of rows is : " << coefficient << std::endl;
        std::cout << "Your sequence is : ";
        for (size_t i = 0; i < seq.size(); i++) {
            std::cout << seq[i];

            if (i < seq.size() - 1) {
                std::cout << " ";
            }
        
        }
        std::cout << std::endl;
    
        std::vector<std::vector<int>> matrix = Matrix(coefficient, row, seq);
        std::cout << "Your matrix is: " << std::endl;
        for (const auto& row : matrix) {
            for (int element : row) {
                std::cout << element << ' ';
            }
            std::cout << std::endl;
        }
        std::cout << "Press Enter to exit..." << std::endl;
        std::cin.get();

    } else {
        std::cout << "Please give atleast 4 arguments to the program... "<<std::endl;
    }
    return 0;
}