#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	for(int k=1;k<=t;k++)
	{
	    int n,maxcount=0,count=1;
	    scanf("%d",&n);
	    int arr[n];
	    for(int i=1;i<=n;i++)
	    {
	        scanf("%d",&arr[i]);
	    }
	    for(int i=0;i<n;i++)
	    {
	        for(int j=i+1;j<n;j++)
	        {
	            if(arr[j]==arr[i])
	            {
	                count++;
	                if(count>=maxcount)
	                {
	                    maxcount=count;
	                }
	            }
	        }
	    }
	    if(maxcount==0)
	    {
	        maxcount++;
	    }
	    printf("%d\n",n-maxcount);
	}
}