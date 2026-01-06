#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << fixed << setprecision(2);
    cout << "Arithmetic Mean = " << B[0] << endl;
    cout << "Standard Deviation = " << B[1] << endl;
    cout << "Geometric Mean = " << B[2] << endl;
    cout << "Harmonic Mean = " << B[3] << endl;
    cout << "Max = " << B[4] << endl;
    cout << "Min = " << B[5];
    return 0;
}

void stat(const double a[],int x,double c[]){
    double sum = 0;
    double square = 0;
    double mul = 1;
    double fraction = 0;
    double max = a[0], min = a[0];
    for(int i = 0; i < x;i++){
        sum += a[i];
        square += pow(a[i],2);
        mul *= a[i];
        fraction += 1.00/a[i];
        if(a[i] > max) max = a[i];
        if(a[i] < min) min = a[i];
    }
    c[0] = sum/x;
    c[1] = sqrt(square/x - pow(c[0],2));
    c[2] = pow(mul,1.00/x);
    c[3] = x/fraction;
    c[4] = max;
    c[5] = min;
}