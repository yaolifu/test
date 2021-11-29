#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	int s,num,i;
    for(num=atoi(argv[1]);num<=atoi(argv[2]);num++)
    {
    	s=0;
    	for(i=num/2;i>=1;i--)
    	{
    		if(num%i==0) s=s+i;
		}
		if(s==num) printf("%d\n",num);
	}
	return 0;
 } 
