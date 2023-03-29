#include<iostream>
using namespace std;
int main()
{
  int n;
  float x, T = 1, S = 0;
  cout << "\nNhập vào số x: ";
  cin>> x;
  cout << "\nNhập vào số n: ";
  cin >> n;
  for(int i = 1; i <= n; i++){
    T = T * x;
    S = S + T;
  }
  
  cout <<"\nTổng = << S;
}
