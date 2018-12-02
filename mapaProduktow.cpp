#include <iostream>
#include <string>
#include <map>
#include <set>
#include <algorithm>


enum class HealthLevel {
    HEALTHY,
    UNHEALTHY,
    NEUTRAL,
};

std::ostream& operator <<(std::ostream& os, const HealthLevel& healthLevel){
    switch(healthLevel){
        case HealthLevel::HEALTHY:
            os << "Healthy";
            break;
        case HealthLevel::UNHEALTHY:
            os << "Unhealthy";
            break;
        case HealthLevel::NEUTRAL:
            os << "Neutral";
            break;
    }
    return os;
}

std::ostream& operator <<(std::ostream& os, std::set<std::string>& set){
    for(auto& i : set){
        std::cout<<i<<"\n";
    }
    return os;
}

void printMap(std::map<HealthLevel, std::set<std::string>>& map){

    for(auto& mapIt: map){
        std::cout<<"Health category: "<<mapIt.first<<"\n";
        std::cout<<"Product: \n"<<mapIt.second;
        std::cout<<"\n";

    }

}

void checkProduct(std::map<HealthLevel , std::set<std::string>>& health, std::string& product){
    auto it = std::find_if(health.begin(),health.end(),[&product](auto& s)
    {for( auto& i: s.second){
        if(i == product)
            return true;
        else
            continue;
    }return false;});

    if(it != health.end()){
        std::cout<<product<< " is in the "<<it->first<<" category\n";
    }
    else{
        std::cout<<product<< " is not in a map\n";
    }
}
int main(){
//    Napisz enumerator, który będzie opisywał wpływ produktu na zdrowie polami Healthy, Unhealthy, Neutral.
//    Napisz mapę Health na set produktów żywieniowych.
//    Dla każdego poziomu zdrowotności umieść w mapie przynajmniej 3 produkty.
//    Napisz funkcję, która przy pomocy STL sprawdzi, w której klasie zdrowotności znajduje się podany produkt.

    std::map<HealthLevel, std::set<std::string>> health;
    health[HealthLevel::HEALTHY].insert("Celery");
    health[HealthLevel::HEALTHY].insert("Pepper");
    health[HealthLevel::HEALTHY].insert("Apple");
    health[HealthLevel::UNHEALTHY].insert("Crisps");
    health[HealthLevel::UNHEALTHY].insert("Coke");
    health[HealthLevel::UNHEALTHY].insert("Hamburger");
    health[HealthLevel::NEUTRAL].insert("Bread");
    health[HealthLevel::NEUTRAL].insert("Fish");
    health[HealthLevel::NEUTRAL].insert("Milk");

    printMap(health);

    std::string findProduct = "Coke";
    checkProduct(health,findProduct);

    findProduct = "Milk";
    checkProduct(health,findProduct);

    findProduct = "Celery";
    checkProduct(health,findProduct);

}