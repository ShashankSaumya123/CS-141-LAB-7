// To print all odd numbers upto given range
#include<iostream>
using namespace std;

int yo(int x, int y){
	cout << x << " ";
	if (x == y){ return 1;}
	else {yo(x+2,y);} 
}

int main(){
	int n;
	cout << "Upto which number do you wish to print the odd numbers?" << endl;
	cin >> n;
	int m = 1;
		
		if ((n%2) == 0) {n = n-1;}

	//Calling for recursion
	int r = yo(m, n);
	cout << endl;
	cout << "That's all!" << endl;
return 0;
}
