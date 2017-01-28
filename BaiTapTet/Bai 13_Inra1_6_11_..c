main3();
main2();
main()
{
int i=1,j;
 for(i=0;i<=4;i++)
    for (j=0;j<=4;j++)
    {printf("%d ",i+5*j+1);
    if(j==4) printf("\n");
    }
    printf("____________________\n");
    main2();
    printf("____________________\n");
    main3();
}
main2()
{
int *a,i,j;
a=(int *) malloc( 25 * sizeof( int ));
for (i=0;i<=24;i++)
        a[i]=i+1;
    for(i=0;i<=4;i++)
    for (j=0;j<=4;j++)
    {printf("%d ",a[i+5*j]);
    if(j==4) printf("\n");
    }
free(a);
}
main3()
{
    int a[25],i=1,j;
    for (i=0;i<=24;i++)
        a[i]=i+1;
    for(i=0;i<=4;i++)
    for (j=0;j<=4;j++)
    {printf("%d ",a[i+5*j]);
    if(j==4) printf("\n");
    }
}
