main()
{
    float a,b,c,x1,x2,delta;
    nhap:
    printf("Chuong trinh giai phuong trinh trung phuong bac 4 \n \t\t Ax^2+By+C=0.\nVui long nhap 3 co so de giai phuong trinh : ");
    scanf("%f%f%f",&a,&b,&c);
    if (a==0)
        {printf("\nYeu cau A khac 0\n");
        goto nhap;
        }
    delta=b*b-4*a*c;
    x1=-b+sqrt(delta)/2*a;
    x2=-b-sqrt(delta)/2*a;
    if(delta<0) printf("\nPhuong Trinh vo nghiem.");
    else if(delta==0) printf("\nPhuong trinh co 2 nghiem  x1=%f\tx2=%.3f",-b/2*a,b/2*a);
    else if(delta>=0) printf("\nPhuong trinh co 4 nghiem x1=%.3f , x2=%.3f , x3=%.3f ,x4=%.3f",x1,-x1,x2,-x2);
}

