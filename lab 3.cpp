#include <iostream>
using namespace std;

int main() {
    int age = 0;
    cout << "Enter your age: ";
    cin >> age;
    if (age >= 18) {
        cout << "you can vote";
    } else {
        cout << "you can't vote"; } 
    
    int marks = 0;
    cout << "\nEnter your marks: ";
    cin >> marks;
    if (marks >= 90){
        cout << "your grade is A";
    }else if (marks >= 80)
    {
        cout << "your grade is B";
    }else if (marks >= 70)
    {
        cout << "your grade is C";
    }else if (marks >= 60)
    {
        cout << "your grade is D";
    }else if (marks < 60)
    {
        cout << "your grade is F";
    }
     int num1 = 0;
    cout << "\nEnter your first number: ";
    cin >> num1;
    int num2 = 0;
    cout << "\nEnter your second number: ";
    cin >> num2;
    int C_option = 0;
    cout << "\nEnter which option you want: \n 1)addition \n 2)subtraction \n 3)multiplication \n 4)divition ";
    cin >> C_option;
    switch (C_option)
    {
    case 1:
        cout << num1 + num2;
        break;
    case 2:
        cout << num1 - num2;
        break;    
    case 3:
        cout << num1 * num2;
        break;
    case 4:
        cout << num1 / num2;
        break;
    default:
        cout << "not a option";
        break;
    }
    int G_option = 0;
    cout << "\nEnter which option you want: \n 1)start game \n 2)load game \n 3)quit";
    cin >> G_option;
    switch (G_option)
    {
    case 1:
        cout << "starting game";
        break;
    case 2:
        cout << "loading game";
        break;    
    case 3:
        cout << "quiting game";
        break;
    default:
        cout << "invalid option. Try again";
        break;
    }
    int temp = 0;
    cout << "\nEnter the temp: ";
    cin >> temp;
    if (temp >= 90){
        cout << "your grade is A";
    }else if (temp < 0)
    {
        cout << "it's freezing";
    }else if (0 > temp <= 15)
    {
        cout << "it's cold";
    }else if (15 > temp <= 30)
    {
        cout << "it's warm";
    }else if (temp < 30)
    {
        cout << "it's hot";
    }
    return 0;
}