#include <iostream>
using namespace std;
int check(int n){
	if ( n % 2 == 0)
     cout << n << " is even.";
  	else
     cout << n << " is odd.";
}
int main(){
	int n;
	cout<<"Enter a number:-";
	cin>>n;
	check(n);
	return 0;
}
