#include <iostream>
#include <windows.h>
using namespace std;
int in[100],dur[100],out[100]; 
void order(int start,int end)
{
	if(start==end-1)
	{
		out[start]=in[start]<in[end]?in[start]:in[end];
		out[end]=in[start]>in[end]?in[start]:in[end];
	}
	else
	{
		int m=(start+end)/2;
		order(start,m);
		order(m,end);
		for(int i=0;i<=end-start;i++)
		{
			dur[i]=out[start+i-1]<out[m+i-1]?out[start+i-1]:out[m+i-1];
		}
	}
	
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>in[i];
	}
	order(0,n-1);
	for(int i=0;i<n;i++){
		cout<<out[i]<<' ';
	}
	
}
