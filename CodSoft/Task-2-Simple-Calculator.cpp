// CodSoft Internship
// Domain Name -> C++ Programming
// Task 2 -> (Simple CalCuator)
// Intern Name -> Dhiraj Kumar 



#include<iostream>
using namespace std;


int main()
{
    double num1, num2;
    char operation;


    cout<<"---------------Welcome To The Simple CalCulator!---------------\n"<<endl;
    cout<<"Enter the First Number: ";
    cin>>num1;

    cout<<"Enter the Second Number: ";
    cin>>num2;

    cout<<"Choose the operation ( +, -, * ,/): ";
    cin>>operation;

    double answer;

    // use switch case:
    switch(operation){
        case '+':
        answer = (num1 + num2);
        cout<<"Answer: "<<answer<<endl;
        break;

        case '-':
        answer = (num1 - num2);
        cout<<"Answer: "<<answer<<endl;
        break;


        case '*':
        answer = (num1 * num2);
        cout<<"Answer: "<<answer<<endl;
        break;


        case '/':
        if(num2 !=0 ){
        answer = (num1 / num2);
        cout<<"Answer: "<<answer<<endl;
        }
        else{
            cout<<"Error detected: "<<endl;
        }
        break;

        default:
        cout<<"Enter valid operation: "<<endl;
        break;

    }

    return 0;

}