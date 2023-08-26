#include<iostream>
using namespace std;
int main()
{
    int arr[100], tot, larg, i;
    cout<<"Enter the Size :- ";
    cin>>tot;
    cout<<"Enter "<<tot<<" Array Elements: ";
    for(i=0; i<tot; i++)
        cin>>arr[i];
    larg = arr[0];
    for(i=1; i<tot; i++)
    {
        if(larg<arr[i])
            larg = arr[i];
    }
    cout<<"\nLargest Number = "<<larg;
    cout<<endl; 
    return 0;
}
//Program to find the largest in an array by user input. 
