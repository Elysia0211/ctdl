#include<iostream>
#include<time.h>
#define MAX 100
using namespace std;

void Nhap(int a[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<"\nNhap phan tu thu "<< i <<": ";
		cin>>a[i];
	}
}
void Xuat(int a[], int n)
{
	for(int i=0; i<n; i++)
		cout<< a[i] <<"\t";
}

int TongPTChan(int a[], int n)
{
	int i, tong=0, flag=0;
	for(i=0; i<n; i++)
		if(a[i]%2==0)
		{
			flag=1;
			tong = tong + a[i];
		}
		if(flag==1)
			return tong;
		return -1;		
}

int main()
{
	int a[MAX], i, n, kq;
	
	cout<<"Nhap so luong phan tu thuc: "; cin>>n;
  Nhap(a,n);
	Xuat(a,n);

	kq=TongPTChan(a,n);
	cout<<"\nTong cac phan tu chan co trong mang la: "<< kq;

	cout<<endl;
}
