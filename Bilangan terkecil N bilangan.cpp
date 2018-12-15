

#include<iostream>
#include<conio.h>
using namespace std;


int main(){
int i,N;
float max,min,data;

cout<<"Masukan Jumlah Data"<<endl;
cin>>N;
cout<<"Masukan Data ke-1"<<endl;
cin>>max;
min=max;

for(i=2; i<N; i++){
    cout<<"Masukan Data ke-"<<i<<endl;
    cin>>data;
    if(data > max){
        max=data;
    }

    if(data < min){
        min=data;
    }
}
cout<<"Nilai Terbesar dari ke-"<<N<<"data adalah:"<<max<<"\n";
cout<<"Nilai Terkecil dari ke-"<<N<<"data adalah:"<<min;
return 0;

}
