#include <iostream>

using namespace std;

int main()
{
int age = 19;
int *pAge = &age;

double gpa = 4.2;
double *pGpa = &gpa;

string name ="Conor";
string *pName = &name;

cout << "Age: " << age << " Pointer Value: " << pAge << endl;
cout << "Gpa: " << gpa << " Pointer Value: " << pGpa <<endl;
cout << "Name: " << name << " Pointer Value: " <<pName;
    return 0;
}


