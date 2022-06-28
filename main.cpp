// Hoppock, Zachary
// powersTwoLoop.cpp
// Oct. 10, 2020
// Print all powers of two less than a given value
// Version # 1
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
cout << "Please give a numeric value: ";
int n;
cin >> n;

int i = 0;

cout << "Here are all the powers of 2 values that are less than " << n << ":" << endl;
while (pow(2,i) < n)
{ 
  cout << pow(2,i) << endl;
  i++;
}

return 0;
}