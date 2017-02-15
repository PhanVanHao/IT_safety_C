main()
{
    int n=113,i,s=0;
    for (i=1;i<n;i++)
        if(i>=0&&i%2!=0) s+=i;
        printf("Tong la %d",s);
}
