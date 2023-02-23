// Mina Hanna
// Class (CECS 325-02)
// Project Name (Fibonacci Solitaire (single file) - Prog 2)
// Due Date (2/13/23)
//
// I certify that this program is my own original work. I did not copy any part of this program from
 // any other source. I further certify that I typed each and every line of code in this program.
#include "Deck.h"
#include "Card.h"
#include <iostream>
using namespace std;


bool isFibo(int n){
    bool fibo = true;
    if (n ==0 || n ==1)
    {
        fibo = true;
    }
    else
    {
        int a=0;
        int b=1;
        int c = a+b;
        while(c<n)
        {
            a=b;
            b=c;
            c=a +b;
        }

        if ( c==n)
        {
            fibo= true;
        }
        else{
            fibo = false;
        }
    }
    if(fibo)
    {
    return true;
    }
    else{
    return false;
    }
}
 int main()
  {
    Deck Deck1;
    cout << "Welcome to Fibonacci Solitaire!" << endl;

  while (true) 
  {
    cout << "1) Create New Deck" << endl;

    cout << "2) Shuffle Deck" << endl;

    cout << "3) Display Deck" << endl;

    cout << "4) Play Fibo Solitaire" << endl;

    cout << "5) Win Fibo Solitaire" << endl;

    cout << "6) Exit " << endl;



    int choice;
    cin >> choice;

    if (choice == 1)
     {
        Deck1.resetDeck();
        cout << "Deck has been reset." << endl;
    } 
    else if (choice == 2)
     {
        Deck1.shuffle();
        cout << "Deck has been shuffled." << endl;
    } 
    else if (choice == 3)
     {
        Deck1.show();
        cout << "Deck has been displayed." << endl;
    } 
   		else if (choice == 4)//play fibo solitaire
		{
			int sum = 0;
			int total = 0;
			while (!Deck1.isEmpty())
			{
				sum++;
				while (!Deck1.isEmpty())
				{
					Card deals = Deck1.deal();
					deals.show();
					total = total + deals.getValue();
					if (isFibo(total))
					{
						cout<< "Fibo:" << total << std::endl;
                        sum ++;
						total = 0;
					}
                    else if(Deck1.isEmpty() == false && !isFibo(total)){
                        total = total + isFibo(total);
                    }
				}
			}
		
			if (Deck1.isEmpty() == false && isFibo(total))
			{
				cout << "Winner in " << sum << " piles!"<<endl;
                

			}
			else
			{
                cout <<" Not Fibo: "<< total << endl;
				cout << "Loser in " << sum << " piles!"<<endl;
                sum =0;
                total =0;
                 Deck1.resetDeck();
                 Deck1.shuffle();
			}
        }
    else if (choice == 5)
		{
    bool win = false;
	int sum = 0;
	int total = 0;
    int player=0;
    while (!win)
    {
        sum++;
        while (!Deck1.isEmpty())
        {
            
			Card deal = Deck1.deal();
			deal.show();
			total += deal.getValue();
            
			if (isFibo(total))
			{
				cout << "Fibo: " << total << endl;
				total = 0;
				sum++;
			}
			else if (Deck1.isEmpty() && !isFibo(total))
			{
				cout << " Not Fibo: " << total << endl;
				cout << "Loser in " << sum << " piles!" << endl;
				sum = 0;
				total = 0;
				Deck1.resetDeck();
				Deck1.shuffle();
                player++;
				break;
			}
        }

        if (Deck1.isEmpty() && isFibo(total))
        {
            cout << "Winner in " << sum << " piles!" << endl;
              cout<<"games played: "<<player++<<endl;
            	sum = 0;
				total = 0;
				Deck1.resetDeck();
				Deck1.shuffle();
            win = true;
        }
    }
}

    else if (choice == 6)
     {
        return 0;
    } 
     else {
        cout << "Invalid choice. Please try again." << endl;
    }
}
  }