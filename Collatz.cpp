#include<bits/stdc++.h>
using namespace std;

int main(void){
    int a,b;
    b = 0;
    cin >> a;
    while (a!=1){
        if(a%2 == 0){
            a /= 2;
            b++;
            cout << a <<endl;
        }
        else{
            a *= 3;
            a += 1;
            b++;
            cout <<  a <<endl;

        }
    }

    cout << "total_times:" << b <<endl;

    return 0;
}