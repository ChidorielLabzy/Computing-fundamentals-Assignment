#include<iostream>
#include<cmath>
using namespace std;
void calculateRoots(double a, double b, double c){
    double D, x1, x2;
    cout<<"Quadratic Solver program\n";
    cout<<"Equation "<<a<<"x^2 + "<<b<<"x + "<<c<<" = 0\n";
    if(a==0){
        cout<<"This is not a quadratic eqaution.\n";
        return;
    }
        D = b * b - 4 * a * c;
    if(D>0){
        x1 = (-b + sqrt(D)) / (2*a);
        x2 = (-b - sqrt(D)) / (2*a);
        cout<<"There are Two real and distinct roots:\n"<<endl;
        cout<<"x = "<< x1 << endl;
        cout<<"or\n";
        cout<<"x = "<< x2 << endl;
        }
     else if(D==0){
        x1 = -b / (2*a);
        cout<<"Has Two equal roots: \n"<<x1;
        cout<< "x1 = x2 = "<<x1;
        }
        else{
        double realpart = -b / (2*a);
        double imaginarypart = sqrt(-D) / (2*a);
        cout << "It has Complex roots:\n"<<endl;
        cout<<"x = "<<realpart<<" + "<<imaginarypart<<"i"<<endl;
        cout<<"or\n";
        cout<<"x = "<<realpart<<" - "<<imaginarypart<<"i"<<endl;
        }
    }
int main(){
    double a, b, c;
    cout<<"Enter coefficients a, b and c:\n";
    cin>>a>>b>>c;
    calculateRoots(a, b, c);
    return 0;
}