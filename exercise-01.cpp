/*
Nama Program: Stack Soal No.1 
Nama		: Ahmad Irfan Fadholi
NPM			: 140810180034
Tgl 		: 7 Mei 2019
Deskripsi	: Implementasi Stack dengan menggunakan array
*/

#include<iostream>

using namespace std;

const int maxElement = 255;

struct Stack{
	char info[maxElement];
	int TOP;
};
Stack S;

void createStack (Stack& S){
	S.TOP = -1;
}

void push(Stack& S, char newElement){
	if (S.TOP==maxElement-1){
		cout<<"Stack Penuh"<<endl;
	}
	else{
		S.TOP++;
		S.info[S.TOP] = newElement;
	}
}

void print(Stack S){
	for (int i=0; i<=S.TOP; i++){
		cout<<S.info[i];
	}
}

void tukar(Stack S){
	for (int i=S.TOP; i>=0; i--){
		cout<<S.info[i];
	}
}

int main(){
	int n;
	char x;
	createStack(S);
	cout<<"Banyak Huruf : "; cin>>n;
		for (int i=0; i<n; i++){
			cout<<"Masukkan Huruf ke-"<<i+1<<" : ";
			cin>>x;
			push(S,x);
		}
	cout<<"Kata Awal : ";	print(S);
	cout<<"\nSetelah Dibalik: ";tukar(S);
}
