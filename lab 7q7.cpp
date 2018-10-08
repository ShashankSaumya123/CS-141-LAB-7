// To check wether the number is a palindrome
#include<iostream>
using namespace std;

int yo(int y,int a){
int x;
x = a%10;
y = (y*10)+x;
if (a/10 == 0){return (y);}
return yo(y,a/10);
}

int main(){
int n;
cout << "This is a program to check for palindromes" << endl;
cout << "Please type a number." << endl;
cin >> n;
int m = yo(0,n);

if (m == n)
{cout << "The number is a palindrome." << endl;}
else {cout << "The number is not a palindrome." << endl;}
return 0;
}
