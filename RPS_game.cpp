#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
#define ROCK 1
#define PAPER 2
#define SCISSOR 3

int main()
{
    int choice;
    bool draw = false;
    srand((unsigned int)time(0));
    do
    {

        int random = ((rand() % 3) + 1); // Generating a random number

        cout << "enter ur choice: \n 1.Rock \n 2.Paper \n 3.Scissor " << endl<<endl;
        cin >> choice;

        if (choice < 1 || choice > 3)
        {
            cout << "Invalid choice. Please enter 1, 2, or 3." << endl;
            continue;
        }

        if (random == ROCK)
            cout << "jarvis chose ROCK" << endl;
        else if (random == PAPER)
            cout << "jarvis chose PAPER" << endl;
        else
            cout << "jarvis chose SCISSOR" << endl;

        if (choice == random)
        {
            cout << "Draw" << endl;
        }
        else if ((choice == ROCK && random == PAPER) || (choice == PAPER && random == SCISSOR) || (choice == SCISSOR && random == ROCK))
        {
            cout << "You Lose"<<endl;
        }
        else
        {
            cout << "You won"<<endl;
        }
        cout << endl;
        int feedback;
        cout << "Do You want to play again?" << endl;
        cout << "1-YES\n0-NO"<<endl;
        cin >> feedback;
        draw = (feedback == 1);
    } while (draw);

    return 0;
}
