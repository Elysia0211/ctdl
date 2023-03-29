#include<iostream>
#include<math.h>

using namespace std;

int kiemtra(float a[],int n,int dem=0, int i =0){
    if(i>=n)
        return dem;
    if(a[i]>0){
        dem++;
    }
    return kiemtra(a,n,dem,++i);
}

int main(){
    int n;
    cout <<"so phan tu trong mang: "; 
    cin >>n;
    float a[n];
    for (int i =0;i<n;i++){
        cout << "a["<<i<<"] = ";
        cin>> a[i];
    }
    int i=0, dem=0;
    cout << kiemtra(a,n,dem,i);
    return 0;
}
