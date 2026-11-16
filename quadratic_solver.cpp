#include<iostream>
#include<cmath>
using namespace std;
// Function to calculate the roots
void calculateRoots(double a, double b, double c)
{
    double D, x1, x2;
    cout<<"Quadratic Solver ";
    cout<<"For an equation ax^2 + bx + c = 0";
    if(a==0){
        cout<<"This is not a quadratic eqaution.";
        return;
    }
    // Calculate discriminant
        D = b * b - 4 * a * c;
    // Calculate real and distinct roots
    if(D>0){
        x1 = (-b + sqrt(D)) / (2*a);
        x2 = (-b - sqrt(D)) / (2*a);
        cout<<"Two real and distinct roots:"<<endl;
        cout<<"x1 = "<< x1 << endl;
        cout<<"x2 = "<< x2 << endl;
        }
    // equal roots
     else if(D==0){
        x1 = -b / (2*a);
        cout<<"Two equal roots: "<<x1;
        cout<< "x1 = x2 = "<<x1;
        }
    // Complex 
        else{
        double realpart = -b / (2*a);
        double imaginarypart = sqrt(-D) / (2*a);

        cout << "Complex roots:"<<endl;
        cout<<"x1 = "<<realpart<<" + "<<imaginarypart<<"i"<<endl;
        cout<<"x2 = "<<realpart<<" - "<<imaginarypart<<"i"<<endl;
        }
    }
    // Main function
int main()
{
    double a, b, c;
    cout<<"Enter coefficients a, b and c: ";
    cin>>a>>b>>c;
    calculateRoots(a, b, c);
    return 0;


}