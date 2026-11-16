#include<iostream>
using namespace std;
// Function to calculate the factorial of a number
int factorial(int n)
{
    if(n==0 || n==1)
        return 1;
    else
        return n * factorial(n-1);
}
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Factorial of "<<num<<" = "<<factorial(num);
    return 0;
}