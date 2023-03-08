#include  <iostream>
using namespace std;
double P, L;

void input(){
    cout << "masukkan panjangnya = ";
    cin >> P;
    cout << "masukkan lebarrnya = ";
    cin >> L;
}

double proses(){
    return P*L;
}

double proses2(double a, double b){
    return a*b;
}

void output (){
    cout << "luasnya = " << proses();
    cout << "\nluasnya ke 2 = " <<
    proses2 (P,L);
}

int main (){
    input();
    output();
}