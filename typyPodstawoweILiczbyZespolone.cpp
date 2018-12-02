#include <iostream>
#include <limits>

enum class Operation: char {
    ADDITION = '+',
    SUBTRACTION = '-',
};

class ComplexNumbers{
        double re;
        double im;
    public:
        ComplexNumbers(double newRe, double newIm)
        {setRe(newRe);
        setIm(newIm);}
        void setRe(double newRe){re = newRe;};
        void setIm(double newIm){im = newIm;};
        void performCalculation(ComplexNumbers& other, Operation& operation);
        void print(){std::cout<<re<<" "<<im<<"i\n";};
};

void ComplexNumbers::performCalculation(ComplexNumbers &other, Operation& operation) {
    switch (operation){
        case Operation::ADDITION:
            this->re += other.re;
            this->im += other.im;
            print();
            break;
        case Operation ::SUBTRACTION:
            this->re -= other.re;
            this->im -= other.im;
            print();
            break;

    }
}







int main() {
//    1. Stwórz po jednym obiekcie każdego z typów podstawowych, przypisz do nich przykładowe wartości i wyświetl.
//    Dla float i double dopisz dodatkowo zmienne przechowujące maksymalne wartości tych typów.

    float fMax = std::numeric_limits<float>::max(); //3.40282e+38
    double dMax = std::numeric_limits<double>::max(); //  1.79769e+308
    float num1 = 2.25;
    double num2 = 3.557846786285;
    int num3 = 4;
    char char1 = 'a';
    bool bType = false;

    std::cout<< "float num1: "<<num1<<"\n"<<"double num2: "<<num2<<"\n"<<"float floatMax: "<<fMax<<"\n"<<"double dMax: "<<dMax<<"\n"<<"int num3: "<<num3<<"\n";
    std::cout<<"char char1: "<<char1<<"\n"<<"bool bType: "<<bType<<"\n";


//    2. Napisz klasę reprezentującą wartość zespoloną.
//    Dla tej klasy zaimplementuj dodawanie, odejmowanie i wczytywanie wartość z wejścia standardowego.
//    Z wejścia standardowego wczytaj dwie takie wartości, następnie wczytaj znak char.
//    Przy pomocy switch, w zależności od wczytanego znaku na podanych wartościach dokonaj operacji dodawania lub odejmowania

    double newRe;
    double newIm;
    char operatorChoice;
    std::cout<<"Podaj rzeczywista czesc pierwszej liczby zespolonej: \n";
    std::cin>>newRe;
    std::cout<<"Podaj urojona (bez i) czesc pierwszej liczby zespolonej: \n";
    std::cin>>newIm;

    ComplexNumbers firstNumber{newRe,newIm};
    firstNumber.print();

    std::cout<<"Podaj rzeczywista czesc drugiej liczby zespolonej: \n";
    std::cin>>newRe;
    std::cout<<"Podaj urojona (bez i) czesc drugiej liczby zespolonej: \n";
    std::cin>>newIm;

    ComplexNumbers secondNumber{newRe,newIm};
    secondNumber.print();

    std::cout<<"Wybierz czy chcesz wykonac dodawanie czy odejmowanie poprzez wybranie + lub - \n";
    std::cin>> operatorChoice;
    auto operation = static_cast<Operation>(operatorChoice);

    firstNumber.performCalculation(secondNumber,operation);


    return 0;
}