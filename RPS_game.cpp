#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
#define rock    1
#define paper   2
#define scissor  3


int main()
{
    int choice;

    srand((unsigned int)time(0));
    bool draw = false;
    int random = (rand() % 3) + 1; // Generate a random number

    do
    {
        cout << "enter ur choice: \n 1.Rock \n 2.Paper \n 3.Scissor " << endl;
        cin >> choice;
        if (random == rock)
            cout << "jarvis chose rock" << endl;
        else if (random == paper)
            cout << "jarvis chose paper" << endl;
        else
            cout << "jarvis chose scissor" << endl;

        if (choice == rock && random == rock)
        {
            cout << "Draw" << endl;
            draw = true;
            cout << "Play again" << endl;
            cout<<endl;
        }
        else if (choice == paper && random == paper)
        {
            cout << "Draw" << endl;
            draw = true;
            cout << "Play again" << endl;
            cout<<endl;
        }
        else if (choice == scissor && random == scissor)
        {
            cout << "Draw" << endl;
            draw = true;
            cout << "Play again" << endl;
            cout<<endl;
        }
        else if (choice == rock && random == paper)
        {
            cout << "You Lose";
        }
        else if (choice == rock && random == scissor)
        {
            cout << "You won";
        }
        else if (choice == paper && random == scissor)
        {
            cout << "You Lose";
        }
        else if (choice == paper && random == rock)
        {
            cout << "You won";
        }
        else if (choice == scissor && random == rock)
        {
            cout << "You Lose";
        }
        else
        {
            cout << "You won";
        }
        cout << endl;
    } while (draw);

    return 0;
}