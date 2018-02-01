#include <iostream>
#include <windows.h>
using namespace std;
int a[100];
int main()
{
	
}
void o(int start,int end)
{
	
	int smaller[100],bigger[100];
	if(start==end+1)
	{
		if(a[start]>=a[end])
		{
			int m=a[start];
			a[start]=a[end];
			a[end]=m;
		}
	}
	else
	{
		for(int i=start+1,j=0,k=0;i<=end;i++)
	    {
	    	if(a[i]<a[start])
	    	{
	    		smaller[j]=a[i];
	    		j++;
	    	}
	    	else
	    	{
	    		bigger[k]=a[i];
	    		k++;
	    	}
	    }
	}
	
}








