// To find reverse of any number using recursion
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
cout << "Please type the number whose reverse you wish to find." << endl;
cin >> n;


int r = yo(0,n);
cout << "The reverse of the number is " << r << endl;

return 0;
}
