main2();
main()
{
int a[25],i;
for (i=0;i<=24;i++)
    a[i]=i+1;
for (i=0;i<=24;i++)
    {printf("%d ",a[i]);
    if(a[i]%5==0) printf("\n");
    }
    main2();
}

main2()
{
int *a,i;
a=(int *) malloc( 25 * sizeof( int ));
for (i=0;i<=24;i++)
    a[i]=i+1;
for (i=0;i<=24;i++)
    {printf("%d ",a[i]);
    if(a[i]%5==0) printf("\n");
    }
free(a);
for (i=0;i<=24;i++)
    {printf("%d ",a[i]);
    if(a[i]%5==0) printf("\n");
    }
}
