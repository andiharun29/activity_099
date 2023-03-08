#include  <iostream>
using namespace std;

double luas, P, L;
void input(){
    cout << "masukkan panjangnya = ";
    cin >> P;
    cout << "masukkan lebarrnya = ";
    cin >> L;
}

void proses (){
    luas = P*L;
}

void output(){
    cout << "luasnya = " << luas;
}

int main (){
    input();
    proses();
    output();
}