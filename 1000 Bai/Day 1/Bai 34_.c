main()
{
    float i,n=10,d=sqrt(2);
    for (i=1;i<n;i++)
        d=sqrt(d+(n-i));
    printf("Tong la %.13f : ",d);
}
