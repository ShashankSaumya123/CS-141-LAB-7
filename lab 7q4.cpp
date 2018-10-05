// To print sum of all natural numbers upto given range
#include<iostream>
using namespace std;

int yo(int a){
	if (a==0){return 0;}
	 else {return a+(yo(a-1));}
}


int main(){
	int n;
	cout << "Upto where you wish to find the sum?" << endl;
	cin >> n;
	

	// Calling for recursion
	int r = yo(n);
	cout << "The sum is " << r << endl;
return 0;
}
