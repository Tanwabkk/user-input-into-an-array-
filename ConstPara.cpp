#include <iostream>
using namespace std;

void printInfo( const string &name, const int &age);

int main() 
{
    string name = "bro";
    int age = 18;

    printInfo(name, age);

    return 0;
}

void printInfo(const string &name, const int &age){

    cout << "Your name: " << name << endl; 
    cout << "Your age: " << age << endl; 
}

