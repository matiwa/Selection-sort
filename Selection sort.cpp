#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;

void selection_sort(int n, double t[],int option) {
   int i, j, k;
   for(i=0; i<n; i++) {
      	k=i;
      	if(option==1){
      		cout<<"i="<<i<<"\t\t";
	      	for(int l=0;l<n;l++) cout<<t[l]<<" ";
	      	cout<<endl;
		}
      	for(j=i+1; j<n; j++) if(t[j]<t[k]) k=j;	  
      	double tmp=t[k];
      	t[k]=t[i];
      	t[i]=tmp;
   }
   cout<<endl;
}

int main(){
	SetConsoleTitleA("Selection sort");
	int option;
	cout<<"Selection sort"<<endl<<"0 - result"<<endl<<"1 - sorting"<<endl<<"Enter the number: ";
	cin>>option;
	for(;;){	
		int sizet;
		double* numbers;	
		cout<<"Enter count of items: ";
		cin>>sizet;
		numbers=new double[sizet];
		cout<<"Enter items:"<<endl;
		for(int i=0;i<sizet;i++) cin>>numbers[i];
		cout<<"Table\t\t";
		for(int i=0;i<sizet;i++) cout<<numbers[i]<<" ";
		cout<<"\t"<<endl;
		
		selection_sort(sizet,numbers,option);
		
		cout<<"Ordered table: "<<endl;
		for(int i=0;i<sizet;i++) cout<<numbers[i]<<" ";
		
		delete[] numbers;
		getch();
		system("cls");
	}
	return 0;
}
