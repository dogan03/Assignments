#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>

int main(){
    std::ifstream file("Assignment4_problem2_csv.csv");

    if(!file.is_open()){
        std::cerr << "Could'nt open the file...";
        return 1;
    }

    std::map<std::string, std::pair<int, int>> Regional;

    std::string line;
    std::getline(file,line);


    while(std::getline(file,line)) {
        std::vector<std::string> row;
        std::string cell;
        for (char c : line) {
            if (c != ',') {
                cell += c;
            } else {
                row.push_back(cell);
                cell.clear();
            }
        }
        row.push_back(cell);

        if(row.size()>=4){
            std::string region = row[1];
            int income = std::stoi(row[2]);
            int population = std::stoi(row[3]);
            Regional[region].first += income;
            Regional[region].second += population;


        }

    }

    file.close();

    std::ofstream filee("Assignment4_problem2_extracted_csv.csv");

    if(!filee.is_open()){
        std::cerr << "File couldn't have opened" << std::endl;
        return 1;
    }

    filee << "Region_Name,Yearly_income,Population"<<std::endl;
    for(const auto& entry:Regional){
        filee << entry.first << "," << entry.second.first << "," << entry.second.second << std::endl;
    }
    filee.close();

    return 0;
}