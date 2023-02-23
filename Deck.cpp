#include <iostream>
#include "Deck.h"
#include "Card.h"
using namespace std;
Deck::Deck()
{
    char rank[] = {'A','2','3','4','5','6','7','8','9','T','J','Q','K'};
    char suit[] = {'S','H','D','C'};
    int l = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 13; j++)
		{
			order[l] = Card(rank[j],suit[i]);
			l ++;
		}
	}
}void Deck::resetDeck()
{
     top =0;
    char rank[] = {'A','2','3','4','5','6','7','8','9','T','J','Q','K'};
    char suit[] = {'S','H','D','C'};
    int l = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 13; j++)
		{
			order[l] = Card(rank[j],suit[i]);
			l ++;
		}
	}
}
Card Deck::deal(){
   Card deal;
   deal = order[top];
   top++;
   return deal;
}

void Deck::shuffle()
{
    top =0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 13; j++)
		{
			int x = rand() % 52;
			int y = rand() % 52;
			Card temp = order[x];
			order[x] = order[y];
			order[y] = temp; 
		}
	}
	
}
bool Deck::isEmpty(){
    if(top==52 ){
        return true;
    }
    else {
        return false;
    }
     
}
void Deck ::show() {
    for (int i = 0; i < 52; i++) {
        if ( i % 13==0){
            cout << endl;
        }
        if (i % 13 == 0 && i != 0) {
        
        order[i].show();
        cout << " ";
        }
    else {
        order[i].show();
        cout << " ";
    }
    }
}