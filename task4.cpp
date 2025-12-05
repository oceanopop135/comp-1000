#include <iostream>
using namespace std;
#include <cstring>


int main() {
    
int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int array2[10];
float sum = 0;
for(int i = 0; i < 10; i++){
 array2[i]=i + 1;
 sum = sum + array2[i]; 
}
cout << "the sum is:" << sum << endl;
cout << "the average is:" << sum/10 << endl;

string name = "habe";
string password = "john1";
string juon = name + password;

cout << "the length of the string is" << juon.length() << endl;

int num = 20;
int *ptr = &num;

return 0;
}