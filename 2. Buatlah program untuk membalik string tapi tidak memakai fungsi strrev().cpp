//Buatlah program untuk membalik string tapi tidak memakai fungsi strrev()
//Jawabannya:
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char kalimat[100];
	int hasil;
	cout<<"masukkan kalimat=";
	cin.getline(kalimat,100);
	hasil=strlen(kalimat);
	for(int i=hasil-1;i>=0;i--){
		cout<<kalimat[i];
	}
}

