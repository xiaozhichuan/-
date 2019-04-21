int main()
{

    srand(time(0));
    guessGame();
}

void guessGame()
{
    int answer;
    int guess;
    char response;

    do
    {
        answer =1+rand()%1000;

        cout << "I have a number between 1 and 1000.\n"<<"an you guess my number?\n"<<"Please type your first guess.";
        cin >> guess;

        while(!isCorrect(guess,answer))
            cin >> guess;

        cout << " \nExcellent! You guessed the number!\n"<<"Would you like to play again(y or n)?";
        cin >> response;

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
