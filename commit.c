#include<stdio.h>
//#include<stdlib.h>
//#include<conio.h>


struct sjfprocess
{
    int processid,arrivaltime,bursttime;
};



void sorting(double array[],int array1[] ,int n);

void sorting1(struct sjfprocess *t,int p)
{
	int i,j;
	struct sjfprocess *q ,s;
	for(i=0;i<p;i++,t++)
	{
		for(j=i+1,q=t+1;j<p;j++,q++)
		{
			if((t->arrivaltime)>(q->arrivaltime))
				{
					s=*t;
					*t=*q;
					*q=s;
				}
		}
	}
}
