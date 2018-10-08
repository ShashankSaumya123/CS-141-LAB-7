// To find the sum of all even or all odd natural number within given range through recursion
#include<iostream>
using namespace std;

int sumeve(int x, int y){
	if (x%2 != 0){x=x+1;}
	if (y%2 != 0){y=y-1;}
	if (y==x){return x;}
	else {return y+ (sumeve(x,y-2));}
}

int sumodd(int x, int y){
	if (x%2 == 0){x=x+1;}
	if (y%2 == 0){y=y-1;}
	if (y==x){return x;}
	else {return y+ (sumodd(x,y-2));}
}

int main(){
int a,b,c;
cout << "Plz write the lower limit." << endl;
cin >> a;
cout << "Plz write the upper limit." << endl;
cin >> b;

// Asking user's choice
cout << "What do you want to do?" << endl;
cout << "To find sum of all even numbers, press 1." << endl;
cout << "To find sum of all odd numbers, press 2." << endl;
cin >> c;

int r;
if (c == 1){r = sumeve(a,b);
cout << "The sum of even numbers is " << r << endl;}

else if (c==2){r = sumodd (a,b);
cout << "The sum of odd numbers is " << r << endl;}
else cout << "Please enter a valid choice!!!" << endl;
return 0;
}
