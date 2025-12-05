#include <iostream>
using namespace std;
#include <cstring>
#include <cmath>

extern int counter = 0;
int addTwoNumbers(int a, int b){
    int c = a+b;
    return c;
}
void swapNumbers(int num1, int num2){
    cout << "the numbers before are :" <<num1 << "   " << num2 << endl;
    int num3 = num1;
    num1 = num2;
    num2 = num3;
    cout <<"the numbers after are:"<<num1 << "   " << num2 << endl;
}
float calculateDistance(float x1, float y1, float x2, float y2){
    float d = sqrt(pow((x2-x1), 2) + pow((y2-y1), 2));

}

void incrementCounter(){
    for(counter = 0; counter<10; counter++){

    }
}

void displayCounter(){
    cout << "the counter number is:" << counter << endl;
}

void trackFunctionCalls(){
    int nCalls = 0;
    nCalls++;
    cout << "the function has been called :" << nCalls << endl;
}



int main() {
    
addTwoNumbers(12, 21);
swapNumbers(12, 9);
float n1;
float n2;
float m1;
float m2;
cout << "enter the x1:" << endl;
cin >> n1;
cout << "enter the x1:" << endl;
cin >> n2;
cout << "enter the x1:" << endl;
cin >> m1;
cout << "enter the x1:" << endl;
cin >> m2;
calculateDistance(n1, n2, m1, m2);
displayCounter();
incrementCounter();

incrementCounter();
displayCounter();


return 0;
}