// Use recursion to find powers of any number
#include<iostream>
using namespace std;

int power(int n, int p){
	if (p == 0) return 1;
	else
	{return  n*power(n, p-1);}
}
	
int main (){
	int num,pow;
	cout << "Plz write the base number whose power you wish to find." << endl;
	cin >> num;
	cout << "Plz write the power of of the number." << endl;
	cin >> pow;

// Calling for exp function
	int exp = power(num,pow);
	
	cout << "Your result is " << exp <<  endl;
return 0;
}


