#ifndef CRAD_H
#define CRAD_H
#include <iostream>
using namespace std;
class Card{
    private:
        char rank;
        char suit;
    public:
        Card();
        Card(char r, char s);
        void setCard(char r, char s);
        int getValue();
        void show();
};
#endif