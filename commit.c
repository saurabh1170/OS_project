void swapping1(double *p1,double *p2);
void swapping(int *p1, int *p2);


main()
{   int completiontime[30];
    struct sjfprocess pro[50];
    int arrivaltime,bursttime;

    int i,n;
	printf("Enter no. of process\n");
    scanf("%d",&n);
    int turnaroundtime[n],waitingtime[n];

    printf("Enter Arrival time & Burst time for every process\n");

