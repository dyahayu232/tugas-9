#include <iostream>
using namespace std;
int main ()

{

int x;
float maks,min,rata,total=0;
int nilai[x],selisih[x],selisihmaks;

cout<<"Masukan banyak angka : ";
cin>>x;


for (int i=0;i<x;i++){
	cout<<"Angka ke-"<<i+1<<": ";cin>>nilai[i];
	total += nilai[i];
}
	cout<<endl;
	cout<<"====Hasil===="<<endl;
	cout<<"Deret        : ";
	for (int i=0;i<x;i++){
	cout<<nilai[i]<<" ";
}
	
		
	cout<<endl;
	for(int i=0;i<x;i++){
	if(nilai[i]>maks){
	maks=nilai[i];
	}
}
	cout<<"Maksimum     : "<<maks;
	cout<<endl;
	min=nilai[0];
	for(int i=0;i<x;i++){
	if(nilai[i]<min){
	min=nilai[i];
	}
}

cout<<"Minimum      : "<<min;
cout<<endl;

rata=total/x;

cout<<"Rata-Rata    : "<<rata;
cout<<endl;

for(int i=0;i<x;i++){
	
		selisih[i]=nilai[i]-nilai[i+1];
		if(selisih[i]<0){
		selisih[i]=selisih[i]*-1;
		}else if(x<=1){
		selisih[i]=0;
	}
	}

		selisihmaks=selisih[0];
		for(int i=0;i<x-1;i++){
		if(selisihmaks<selisih[i]){
		selisihmaks=selisih[i];
	}
}

cout<<"Selisih Maks  : "<<selisihmaks;
return 0;


}

