#include <iostream>
#include "Operations/DoOperation.h"
#include "Operations/Add.h"
#include "Operations/Multiply.h"
#include "Operations/Divide.h"
#include "Operations/Subtract.h"
int main(){
//    Stwórz klasę Operations z czysto wirtualną metodą do. --- do nie może być nazwą klasy ponieważ program odczytuje ją jako początek pętli do..while, zmieniam nazwę na doOperation
//    Niech ta metoda przyjmuje dwa argumenty typu float i zwraca float.
//    Stwórz klasę DoOperation, która będzie posiadała unique_ptr na Operations.
//    Niech w konstruktorze przyjmuje unique_ptr na Operations.
//    Stwórz klasy pochodne od Operations - Add, Substract, Multiply, Divide.
//    Stwórz folder Operations, umieść każdą klasę w osobnych plikach w tym folderze.
//    Niech te klasy znajdują się również w odpowiednim namespace.
//    W main stwórz instancje klasy DoOperation i przy jej pomocy wywołaj każdą z zaimplementowanych operacji do.

    Operations::DoOperation obj1(std::make_unique<Operations::Add>());
    std::cout<<"Wynik dodawania: "<<obj1.operation->doOperation(2.5,3)<<"\n";

    Operations::DoOperation obj2(std::make_unique<Operations::Subtract>());
    std::cout<<"Wynik odejmowania: "<<obj2.operation->doOperation(4,3.7)<<"\n";

    Operations::DoOperation obj3(std::make_unique<Operations::Divide>());
    std::cout<<"Wynik dzielenia: "<<obj3.operation->doOperation(9,2)<<"\n";

    Operations::DoOperation obj4(std::make_unique<Operations::Multiply>());
    std::cout<<"Wynik mnozenia: "<<obj4.operation->doOperation(4,1.5)<<"\n";


}
