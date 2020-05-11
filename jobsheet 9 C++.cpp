#include <iostream>
using namespace std;
int main()
{
	int i;
	char nama[10]={'R','I','Y','4','N','@'};
	char nama2[10]="@RIY4N";
	cout<<"Array per karakter = ";
	for(i=0;i<5;i++)
	{
		cout<<nama[i]<<",";
		
	}
	cout<<endl;
	cout<<"Array string = "<<nama2<<endl<<endl;
	return 0;
}
