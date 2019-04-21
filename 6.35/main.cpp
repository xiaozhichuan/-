//fig.6.33.cpp

#include <iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

void guessGame();
bool isCorrect(int,int);
void Count(int);

int main()
{
    srand(time(0));
    guessGame();

}

void guessGame()
{
    int answer;
    int guess;
    int total;
    char response;

    do
    {
        answer =1+rand()%1000;
        int total =0;

        cout << "I have a number between 1 and 1000.\n"<<"an you guess my number?\n"<<"Please type your first guess.";
        cin >> guess;

        while(!isCorrect(guess,answer))
            cin >> guess;
            ++total;

        cout << " \nExcellent! You guessed the number!\n"<<"Would you like to play again(y or n)?";
        cin >> response;
        Count(total);

        cout<<endl;

    }while(response=='y');

}

bool isCorrect(int a ,int b)
{
    if(a==b)
        return true;
    if(a<b)
        cout <<"Too low. Try again.";
    if(a>b)
        cout << "Too high. Try again.";
    return false;
}
void Count( int total)
{
    if(total <10)
        cout <<"Either you know the secret or you got lucky!";
    if(total ==10)
        cout << "Ahah! You know the secret!";
    if(total >10)
        cout << "You should be able to do better";
    return;
}
