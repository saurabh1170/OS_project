for(i=0;i<n;i++)
    {
        printf("Enter process ID for process %d : ", i+1);
        scanf("%d",&pro[i].processid);
        printf("\n Arrival time for P%d : ",i+1);
        scanf("%d",&pro[i].arrivaltime);
        printf("\n Burst time for P%d   : ",i+1);
        scanf("%d",&pro[i].bursttime);
    }
    system("cls");
	int v=n-1;
	sorting1(pro,n);
	int array1[n],array2[n];
	int array3[n];
	int r;

	printf("\n\nProcessId\tArrival time\tBurst time\t\n");
	for(i=0;i<n;i++)
	{
		printf("\n%d\t\t%d\t\t%d\n",pro[i].processid,pro[i].arrivaltime,pro[i].bursttime);//tat and wt
		array1[i]=pro[i].processid;
	}
	for(i=0;i<n-1;i++)
	{
		array2[i]=array1[i+1];
	}

	//printf("\n\n\t\t\tGANTT CHART OF THE PROCESS ACCORDING TO GIVEN PRIORITY\n\n\t\t\t"); //printing gantt chart
	int m=n-1;
	int t=0;
