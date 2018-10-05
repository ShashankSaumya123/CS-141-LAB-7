//Print all natural numbers from 1 to n
#include<iostream>
using namespace std;

int yo(int a, int b){
	if (a == b+1){return 1;} 
	else {cout << a << " ";
	yo(a+1,b);}
	return 1;
}

int main(){
	int m,n;
	cout << "Upto where do you want the numbers?" << endl;
	cin >> n;
	m = 1;
	
	// Calling for recursion
	int r = yo(m,n);
	cout << endl;
	cout << "That's all!" << endl;
return 0;
}
