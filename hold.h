#include <iostream>
using namespace std;
#include <string>
#include <vector>

class Cards {

    public:

    string numbers[13] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
    string suits[4] = {"SPADE", "DIAMOND", "HEART", "CLUBS"};
    vector<string> jards;


    void makeCard() {

        for (int i = 0; i <= 3; i++) {

            for (int j = 0; j <= 12; j++){

                string holads = suits[i] + numbers[j];
                jards.push_back(holads);

            }

        }

    } 


    void printCards(){

        for (auto& it : jards) {
            cout << it << ' ';
        }
    
    }

    void shuffleCards(){

        srand (time(NULL));
        for (auto& it : jards) {

        int ran1 = rand() % 52;
        int ran2 = rand() % 52;
        swap(jards[ran1], jards[ran2]);

        }


    }

    

};