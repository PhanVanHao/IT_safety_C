main()
{
    float a,b,c;
    printf("Nhap a,b,c : ");
    scanf("%f%f%f",&a,&b,&c);
    a=a>0?a:-a;
    b=b>0?b:-b;
    c=c>0?c:-c;
    printf("\n%.3f %.3f %.3f",a,b,c);
}
