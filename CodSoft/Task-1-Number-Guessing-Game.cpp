// CodSoft Internship
// Domain Name -> C++ Programming
// Task 1 -> (Number guessing game)
// Intern Name -> Dhiraj Kumar 


#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
    // add the random number generator:
    srand(time(0));

    // Generate a random number between 1 and 100:
    int randomNumber = rand() % 100 + 1;

    int guess;
    int attempts = 0;

    cout<<"---------------Welcome To The Number Guessing Game---------------\n"<<endl;
    cout<<endl;

    do{
        cout<<"Enter Your guess (between 1 and 100):"; 
        cout<<endl;
        cin>>guess;

        if(guess < 1 || guess > 100) {
                cout<<"Please Enter a valid guess between 1 and 100."<<endl;
        }
        else if(guess > randomNumber){
            cout<<"Your guess is  To High! Try again."<<endl;
        }
        if(guess < randomNumber){
            cout<<"Your guess is  To Low! Try again."<<endl;
        }

        attempts++;
        

    }
    while(guess != randomNumber);

    // final part of game:
    cout<<"Awesome! You guessed the number in "<<attempts<<" attempts:"<<endl;
    cout<<endl;


    return 0;
}