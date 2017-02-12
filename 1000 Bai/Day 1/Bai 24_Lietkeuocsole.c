main()
{
    int n=98,i,c=n/2;
    for (i=1;i<=c;i++)
        if(n%i==0) if(i%2!=0) printf("%d ",i);
}
