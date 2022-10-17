#include <iostream>
using namespace std;
#include <string>
#include "hold.h"

int main(){

    Cards test;

    test.makeCard();

    cout << "PRE SHUFFLED CARDS: \n";
    test.printCards();
    test.shuffleCards();

    cout << "\n SHUFFLED CARDS: \n";

    test.printCards();

}