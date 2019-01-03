#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

int main()
{
    printf("PROGRAM PERIKSA PEMASUKAN DAN PENGELUARAN\n");
    printf("BY M Achmad Sahroni NIM 311620782\n");
    printf("KAMPUS PELITA BANGSA. TEKNIK INFORMATIKA\n\n");
	int pemasukan,pengeluaran;
	cout<<"masukan pemasukan =";
	cin>>pemasukan;
	cout<<"masukan pengeluaran =";
	cin>>pengeluaran;

	if (pemasukan<pengeluaran)
	{
		cout<<"pemasukan lebih kecil dari pengeluaran\n";

	}
	else if(pemasukan>pengeluaran)
	{
		cout<<"pemasukan lebih besar dari pengeluaran\n";

	}
	else
	cout<<"error";
}
