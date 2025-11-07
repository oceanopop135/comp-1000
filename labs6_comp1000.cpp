#include <iostream>
using namespace std;
#include <fstream>
#include <iomanip>
#include <string>

void task1() {
    ofstream outputFile("example.txt", ios::out);
    if (outputFile.is_open()) {
        int value = 42;
        float dec = 4.2;
        outputFile << "The value is " << setw(4) << value << " and the DECIMAL is " << dec << endl;
        outputFile.close();
    }
    else {
        cout << "Unable to open file" << endl;
    }
}

void task2() {
    string s;
    ifstream inputFile("example.txt");
    
    if (inputFile.is_open()) {

        while (getline(inputFile, s)) {
            cout << s << endl;
        }
        
        inputFile.close();
    }
    else {
        cout << "Unable to open file" << endl;
    }
}
void task3() {
    string s;
    ifstream inputFile("example.txt");

    if (!inputFile.is_open()) {
        cout << "Unable to open input file" << endl;
        return;
    }

    cout << "Contents of example.txt:" << endl;
    string content;
    while (getline(inputFile, s)) {
        cout << s << endl;
        content += s + "\n"; 
    }

    inputFile.clear();      
    inputFile.seekg(0, ios::beg);

    ofstream outputFile("input.txt", ios::out);
    if (!outputFile.is_open()) {
        cout << "Unable to open output file" << endl;
        return;
    }

    char c;
    while (inputFile.get(c)) {
        outputFile << c << endl;
    }

    inputFile.close();
    outputFile.close();

    cout << "Data written to input.txt successfully." << endl;
}



int main() {

    task1();
    task2();
    task3();

    return 0;
}