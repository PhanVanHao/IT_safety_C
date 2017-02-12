main()
{
    int n=98,i,c=n/2,s=1;
    for (i=1;i<=c;i++)
    if(n%i==0) {s*=i; printf("%d",i);if (i!=c)printf("*");}
        printf("=%d ",s);
}
