// To find the factorial of a number using recursion
#include<iostream>
using namespace std;

int yo(int a){
if (a==0){return 1;}
else {return a*(yo(a-1));}
}

int main(){
int n;
cout << "This program is there to find the factorial of a given number." << endl;
cout << "Plz give us a number." << endl;
cin >> n;

int r = yo(n);
cout << "The factorial is " << r << endl;
return 0;
}
