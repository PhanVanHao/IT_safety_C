//Sap xep 3 so
swap(int a,int b)
{
    int tam=a;a=b;b=tam;
}
main()
{
    float a,b,c;
    printf("Nhap a,b,c: ");
    scanf("%f%f%f",&a,&b,&c);
    printf("%.3f %.3f %.3f",a<=b?a<=c?a:c:b<=c?b:c,a<=b?a>=c?a:c<=b?c:b:c>=b?c<a?c:a:b,a>=b?a>=c?a:c:b>=c?b:c);
}
