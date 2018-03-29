	if(0==pro[0].arrivaltime)
	{
	//printf(" 0 ");
	}
	else
	{
		//printf(" 0  %d",pro[0].arrivaltime);
		t=t+pro[0].arrivaltime;
	}
	t=t+pro[0].bursttime;
	//printf("  P%d  %d",pro[0].processid,t);
	completiontime[1]=t;

    do
	{
		int tmp=0,j,u;
		for( j=0;j<m;j++)
		{
			for( u=0;u<n;u++)
			{
				if(array2[j]==pro[u].processid)
				{
					if(pro[u].arrivaltime<=t)
					{
						array3[tmp++]=pro[u].processid;
					}
				}
			}
		}
		int tmp1=tmp+1;
		double array4[tmp1];
		int tmp2=4,k,o;
		int index=0;
		double min=100;
		for( k=0;k<tmp1-1;k++)
		{
			for( o=0;o<n;o++)
			{
				if(array3[k]==pro[o].processid)
				{
					array4[k]=1+(double)(t-pro[o].arrivaltime)/pro[o].bursttime;
					printf("\n\t\t\tP%d : %f",pro[o].processid,array4[k]);
                    if(array4[k]<min)
                    {
                        min=array4[k];
                        index=pro[o].processid;
                    }
				}

			}
		}
		printf("\n\t\t\tProcess %d will run\n",index);

