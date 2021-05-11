#include <string>
#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

void play_game()
{
    int random = rand() % 11;
    cout << "Guess the number: ";
    while(true)
    {
        int guess;
        cin >> guess;
        if(guess == random){
            cout << "Congrats! You're a total wizard!";
            break;
        }
        else if(guess > random)
        {
            cout << "You're answer is too HIGH.\n\t";
        }
        else
        {
            cout << "You're answer is too LOW.\n\t";
        }
    }
    cout << "\n\tAns: " <<random <<endl;
}

int main()
{
    srand(time(NULL));
    int choice;

    do
    {
        cout << "0. Quit"<<endl <<"1.Play Game\n\n\t";
        cin >> choice;

        switch(choice){
        case 0: cout << "\nLOL! Quiting is for lossers!";
                break;
        case 1: play_game();
                break;
        }
        cout << endl;

    }while(choice !=0);
}
