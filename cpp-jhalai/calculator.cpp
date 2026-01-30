#include <iostream>
using namespace std;

double add(double a, double b){
    return a+b;
}
double substract(double a, double b){
    return a - b;
}
double multiply(double a, double b){
    return a * b;
}
double divide(double a, double b){
    return (b != 0) ? a / b : 0;
}
int modulo(int a, int b){
    return (b != 0) ? a % b : 0;
}

int main(){
    cout << "***Welcome to Calculator***"  << endl;
    double x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Sum: " << add(x, y) << endl;
    cout << "Substraction: " << substract(x, y) << endl;
    cout << "Multiplication: " << multiply(x, y) << endl;
    cout << "Division: " << divide(x, y) << endl;
    cout << "Remainder: " << modulo(x, y) << endl;

    
    return 0;
}