#include <iostream>
#include <vector>
#include <algorithm>

void printVector(std::vector<float>& vec){
    std::cout<<"Vector: \n";
    for(auto& i : vec){
        std::cout<<i<<"\n";
    }
}

int main(){
//    Stwórz wektor floatów.
//    Niech w tym wektorze znajduje się pare wartości.
//    Stwórz funkcje która usunie w tym wektorze wszystkie elementy większe od zadanej wartości. Spróbuj to zrobić przy pomocy funkcji STL.

    std::vector<float> myVec {2.75,1.89,6.93,4.51,3.34};

    printVector(myVec);

    myVec.erase(std::remove_if(std::begin(myVec), std::end(myVec),[](const auto i){return i >= 3.40;}),std::end(myVec));

    printVector(myVec);



}