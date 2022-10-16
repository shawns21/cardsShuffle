#include <iostream>
using namespace std;
#include <string>
#include <vector>

class Cards {

    public:

    string numbers[13] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
    string suits[4] = {"♠", "◆", "♥", "♣"};
    vector<string> cards;


    void makeCard() {

        for (int i = 0; i <= 4; i++) {

            for (int j = 0; j <= 13; j++){

                cards.push_back(suits[i] + numbers[j]);

            }

        }

    } 

    void printCards(){

        for (auto it = begin (cards); it != end (cards); ++it) {
                
                cout << it;
        
        }
    
    }

};