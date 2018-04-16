sorting(array4,array3,tmp1-1);
		int f=array3[0],i;
		for(i=0;i<n;i++)
		{
			if(tmp!=0)
			{
				if(pro[i].processid==f)
				{
					t=t+pro[i].bursttime;
				}
			}
		}
		int flag=5;
		if(tmp==0 && v>0)
		{
			for(i=0;i<n;i++)
			{
				if(t<pro[i].arrivaltime)
				{
     				t=pro[i].arrivaltime+pro[i].bursttime;
					//printf("  %d  P%d  %d",pro[i].arrivaltime,pro[i].processid,t);

					break;
					flag=9;
				}
			}
		}
		else
		{
			//printf("  P%d  %d",f,t);
			completiontime[f]=t;//2
		//	printf("**%d",ct[f]);//3
			v--;
		}
	      	for(i=0; i<m; i++)
			{
				if(array2[i]==f)
				{
					for(j=i; j<(m-1); j++)
					{
						array2[j]=array2[j+1];
					}
			    	break;
				}
			}
			m=m-1;


        	}

	while(m>0);

	    float sum1=0,sum2=0;
		for (i=0;i<n;i++)
		{
			turnaroundtime[i]=completiontime[i+1]-pro[i].arrivaltime;
        }

