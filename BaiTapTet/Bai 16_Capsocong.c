//a cap so cong dau tien
//d cong sai
//num so luong tinh tong
csc(int a,int d,int num)
{
    if (num==0) return a;
    num--;
    return csc(a,d,num)+d;
}
csc2(int a,int d,int num)
{
    int tong=a,i;
    for (i=1;i<=num;i++)
        tong+=d;
    return tong;
}
main()
{
    int a,d,num;
    printf("Nhap cap so cong khoi dau va cong sai va so thu tu can tinh tong  : ");
    scanf("%d%d%d",&a,&d,&num);
    printf("\nDe Quy: %d",csc(a,d,num));
    printf("\n\nVong Lap : %d",csc2(a,d,num));
}
