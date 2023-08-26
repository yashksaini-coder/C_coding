#include <iostream>
using namespace std;
int check(int n1,int n2,int n3){
	if (n1>n2 && n1>n3)
     cout << n1 << " is bigger.";
  	else if(n2>n3 && n2>n1)
     cout << n2 << " is bigger.";
    else
	 cout << n3 << " is bigger."; 
}

int main(){
	int n1,n2,n3;
	cout<<"Enter first number:-";
	cin>>n1;
	cout<<"Enter second number:-";
	cin>>n2;
	cout<<"Enter third number:-";
	cin>>n3;
	check(n1,n2,n3);	
	return 0;
}

