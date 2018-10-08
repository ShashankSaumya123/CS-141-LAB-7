// Use recursion to find the nth fibonacci number
#include<iostream>
using namespace std;

int yo(int a,int b=0,int c=1){
if(a)
return yo(a-1,c,b+c);
else
return c;

//OR YOU CAN USE [return a?yo(a-1,c,b+c):c;]
}


int main(){
int n;
cout << "This program is meant to find the any term of fibonacci numbers." << endl;
cout << "Tell us which term you wish to find." << endl;
cin >> n;

cout << "The fibonacci number is " << yo(n-1) << endl;
return 0;
}
