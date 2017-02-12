main()
{
    int n=6,i,c=n/2,s=0;
    for (i=1;i<=c;i++)
    if(n%i==0) s+=i;
    if (n==s) printf("So Hoan Hao");
        else printf("Khong Phai so Hoan Hao");
}

