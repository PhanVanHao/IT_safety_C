uoc(int n)
{
    int d=0,c=n/2,i;
    for (i=1;i<=c;i++)
        if(n%i==0) {d++;printf("%d ",i);}
    return d;
}
main()
{
    int n=10;
    printf("So uoc la : %d",uoc(n));
}
