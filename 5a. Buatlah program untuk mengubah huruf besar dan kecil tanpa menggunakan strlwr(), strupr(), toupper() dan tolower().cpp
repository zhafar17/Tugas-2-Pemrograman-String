//Buatlah program untuk mengubah huruf besar dan kecil tanpa menggunakan strlwr(), strupr(), toupper() dan tolower()
//Jawabannya:
//a. Mengubah huruf besar ke huruf kecil
#include <iostream>
#include <string.h>
using namespace std;
int main(){
	char stri1[100];
	cout<<"Program Mengubah Huruf (BESAR ke kecil)\n\n";
	cout<<"Input kalimat yang ingin di ubah : ";
	gets(stri1);
	for(int i=0; stri1[i]!='\0'; i++){
		if(stri1[i] >= 65 && stri1[i] <= 90){
			stri1[i] = stri1[i] +32;
		}	
	}
	cout<<"Setelah diubah : "<<stri1;
 return 0;
}

