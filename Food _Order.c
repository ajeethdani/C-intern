#include <stdio.h>
#include <stdlib.h>
int main()
{
 int a,cq=0,cr=0,tq=0,tr=0,sq=0,sr=0,jq=0,jr=0,pq=0,pr=0,mq=0,mr=0,dq=0,dr=0,bq=0,br=0,c=0,t=0,s=0,j=0,p=0,m=0,d=0,b=0,totalamount;
 char ch,y,n;
 printf("\n\n*******Welcome to Raj Hotel******");
  do
 {
 	
  printf("\n\nMENU ");
  printf("\nSelect your item ");
  printf("\n1.Coffee ");
  printf("\n2.Tea");
  printf("\n3.Sandwich");
  printf(" \n4.Juice");
  printf("\n5.Pizza");
  printf(" \n6.Meals");
  printf(" \n7.Deserts");
  printf("\n8.Biriyani\n");
 scanf("%d",&a);
 switch(a)
 {
  case 1:
    printf("\nYou have selected Coffee.\n Enter the quantity :");
    scanf("%d",&cq);
    cr=5;
    c=(cq*cr);
    printf("\nItem amount :%d",c);
    break;
  
  case 2:
    printf("\nYou have selected Tea.\n Enter the quantity :");
    scanf("%d",&tq);
    tr=10;
    t=(tq*tr);
    printf("\nItem amount :%d",t);
    break;
  
  case 3:
    printf("\nYou have selected sandwich.\n Enter the quantity :");
    scanf("%d",&sq);
    sr=25;
    s=(sq*sr);
    printf("\nItem amount :%d",s);
    break;
  
  case 4:
    printf("\nYou have selected juice.\n Enter the quantity :");
    scanf("%d",&jq);
    jr=20;
    j=(jq*jr);
    printf("\nItem amount :%d",j);
    break;
  
  case 5:
    printf("\nYou have selected pizza.\n Enter the quantity :");
    scanf("%d",&pq);
    pr=15;
    p=(pq*pr);
    printf("\nItem amount :%d",p);
    break;
    
  case 6:
    printf("\n you have selected meals.\n enter the quantity :");
    scanf("%d",&mq);
    mr=60;
    m=(mq*mr);
    printf("\nItem amount :%d",m);
    break;
   
    case 7:
   printf("\n you have selected deserts.\n enter the quantity :");
   scanf("%d",&dq);
   dr=25;
   d=(dq*dr);
   printf("\nItem amount :%d",d);
   break;
   
   case 8:
   	printf("\n you have selected biriyani.\n enter the quantity :");
   	scanf("%d",&bq);
   	br=120;
   	b=(bq*br);
   	printf("\nItem amount :%d",b);
    break; 	
 
 default:
    printf("\nSorry not available...%d",a);
}
  printf("\n\n do you need any other item ? y-YES||n-NO");
  getchar();
  scanf("%c",&ch);
  totalamount=c+t+s+j+p+m+d+b;
}while(ch=='y');

printf("\n\n****************************Taj Hotel************************\n");

printf("\n\n*******************************BILL**************************\n");

printf("\n\n            Item    ||  Quantity  ||  Rate  ||   Total  ");
printf(" \n            Coffee  \t  %d\t  %d\t    %d",cq,cr,c);
printf(" \n            Tea     \t  %d\t  %d\t    %d",tq,tr,t);
printf(" \n            Sandwich\t  %d\t  %d\t    %d",sq,sr,s);
printf(" \n            Juice   \t  %d\t  %d\t    %d",jq,jr,j);
printf(" \n            Pizza   \t  %d\t  %d\t    %d",pq,pr,p);
printf(" \n            Meals   \t  %d\t  %d\t    %d",mq,mr,m);
printf(" \n            Deserts \t  %d\t  %d\t    %d",dq,dr,d);
printf(" \n            Biryani \t  %d\t  %d\t    %d",bq,br,b);
printf("\n             Total amount :%d",totalamount);
printf("\n             Thank you...!");
return 0;
}






