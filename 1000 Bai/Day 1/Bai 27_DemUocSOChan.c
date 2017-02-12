main()
{
    int n=98,i,c=n/2,d=0;
    for (i=1;i<=c;i++)
        if(n%i==0) if (i%2==0) d++;
    printf("So uoc chan = %d",d);
}
