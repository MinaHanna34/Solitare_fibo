#ifndef DECK_H
#define DECK_H
#include "Card.h"
#include <iostream>
using namespace std;
class Deck{
    private:
        Card order[52];
        int top = 0;
    public:
        Deck();
        void resetDeck();
        Card deal();
        void shuffle();
        bool isEmpty();
        void show( );
};
#endif