#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char ch[5]={'A','E','I','O','U'};
	char ch1='A';
	int count=0,size=0;
	
    while(1)
	{
		count++;
		if(ch[size]==ch1)
		{
			cout<<ch[size]<<" : count : "<<count<<endl<<endl;
			ch1=char(ch[size]+1);
			size++;
		}
		else
		{
			ch1=char(ch1+1);
		}
		if( ch1== 'Z' )
		break;
	}
	getch();
}


