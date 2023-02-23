#include "Card.h"
#include <iostream>
using namespace std;
Card::Card() {
   rank = 'A';
   suit = 'S';
}
Card::Card(char r, char s) {
    rank = r;
    suit = s;
}
void Card::setCard(char r, char s) {
    rank = r;
    suit = s;
}
int Card::getValue() {
    if (rank == 'A') {
        return 1;
    }
    else if (rank == '2') {
        return 2;
    }
    else if (rank == '3') {
        return 3;
    }
    else if (rank == '4') {
        return 4;
    }
    else if (rank == '5') {
        return 5;
    }
    else if (rank == '6') {
        return 6;
    }
    else if (rank == '7') {
        return 7;
    }
    else if (rank == '8') {
        return 8;
    }
    else if (rank == '9') {
        return 9;
    }
    else if (rank == 'T')
	{
		return 10;
	}
    else if (rank == 'J') {
        return 10;
    }
    else if (rank == 'K') {
        return 10;
    }
    else if (rank == 'Q') {
        return 10;
    }
    else{
        return 0;
    }
} 
 void Card::show(){
	if (rank == 'T')
	{
		cout << "10" << suit << ",";
	}
	else
	{
		cout << rank << suit << ",";
	}
	

}
 

