https://sinhvientot.net/thuat-toan-sap-xep-chon-truc-tiep-selection-sort/
void Sapxep(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int min = i;
		for (int j = i + 1; j < n; j++)
			if (a[min]>a[j])
				min = j;
			swap(a[i], a[min]);
	}
}
void swap(int &a, int &b)
{
	int x = a;
	a = b;
	b = x;
}
void main()
{
	int A[100];
	NhapMang(A, N);
	Sapxep(A, N);
	printf("Mang sau khi sap xep la: ");
	XuatMang(A, N);
	getch();
}
