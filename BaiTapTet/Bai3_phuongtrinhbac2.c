main()
{
    float a,b,c,delta;
    nhap:
    printf("Chuong trinh giai phuong trinh bac 2 : Ax^2+By+C=0.\nVui long nhap 3 co so de giai phuong trinh : ");
    scanf("%f%f%f",&a,&b,&c);
    if (a==0)
        {printf("\nYeu cau A khac 0\n");
        goto nhap;
        }
    delta=b*b-4*a*c;
    if(delta<0) printf("\nPhuong Trinh vo nghiem.");
    else if(delta==0) printf("\nPhuong trinh co mot nghiem kep x1=x2=%.3f",-b/2*a);
    else if(delta>=0) printf("\nPhuong trinh co hai nghiem x1=%.3f , x2=%.3f",-b+sqrt(delta)/2*a,-b-sqrt(delta)/2*a);
}
