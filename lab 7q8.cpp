//To find the sum of digits of a given number
#include<iostream>
using namespace std;

int yo(int a){
int x = a%10;
if (a/10 == 0){return a;}
else return x+(yo(a/10));
}


int main(){
int n;
cout << "Today we are going to find the sum of the digits of a given number." << endl;
cout << "Care to give us a number" << endl;
cin >> n;

int r = yo(n);
cout << "The sum is " << r << endl;
return 0;
}
