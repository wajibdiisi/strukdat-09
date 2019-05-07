/*
Nama Program: Stack Soal No.2
Nama		: Ahmad Irfan Fadholi
NPM			: 140810180034
Tgl 		: 7 Mei 2019
Deskripsi	: Implementasi Stack dengan menggunakan Linked List
*/

#include <iostream>

using namespace std;

struct elemtList{
	char info;
	elemtList* next;
};

typedef elemtList* pointer;
typedef pointer Stack;

void createStack (Stack& TOP){
	TOP=NULL;
}

void createElement(pointer& pBaru){
	pBaru=new elemtList;
	cin>>pBaru->info;
	pBaru->next=NULL;
}

void push (Stack& TOP, pointer& pBaru){
	if (TOP==NULL) 
		TOP=pBaru;
	else{
		pBaru->next=TOP;
		TOP=pBaru;
	}
}

void tukar(Stack TOP){
	pointer pBantu=TOP;
	if (TOP==NULL) 
		cout<<"Stack kosong"<<endl;
	else{
		while (pBantu!=NULL){
			cout<<pBantu->info;
			pBantu=pBantu->next;
		}
	}
}

void traversal(Stack TOP){
	pointer pBottom;
	pointer pBottomPrev;
	if (TOP==NULL){
		cout<<"Stack Kosong"<<endl;
	}
	else{
		while (pBottom!=NULL){
			pBottom=TOP;
			pBottomPrev=NULL;
			while (pBottom->next!=NULL){
				pBottomPrev=pBottom;
				pBottom=pBottom->next;
			}
			cout<<pBottom->info;
			if (pBottomPrev!=NULL){
				pBottomPrev->next=NULL;
			}
			else 
				break;
		}
	}
}

int main(){
	Stack S;
	pointer p;
	int n;	
	
	createStack(S);
	cout<<"Banyak Huruf : "; cin>>n;	
	for (int i=0; i<n; i++){
		cout<<"Masukkan Huruf ke-"<<i+1<<" : ";
		createElement(p);
		push(S,p);
	}
	cout<<"Kata Awal: ";tukar(S);
	cout<<"\nSetelah dibalik: ";traversal(S);
	
	
}

