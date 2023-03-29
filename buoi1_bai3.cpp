#include<iostream>
using namespace std;
long tinhXn(int);
long tinhYn(int);
long tinhXn(int n){
    if(n==0){
        return 1;
    }
    return tinhXn(n-1) + tinhYn(n-1);
}
long tinhYn(int n){
    if(n==0){
        return 0;
    }
    return 3*tinhXn(n-1) + 2*tinhYn(n-1);
}
int main(){
    int n;
    long S1, S2;
    cout<<"Nhap n: ";
    cin>>n;
    S1=tinhXn(n);
    S2=tinhYn(n);
    cout<<"\nXn = "<<S1<<"\tva Yn = "<<S2;
}
