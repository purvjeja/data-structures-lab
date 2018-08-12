#include<stdio.h>
int GloabalArray[20],n;
int main()
{
   int A;

for(;;)
  {
   printf("Enter the your choice \n");
   printf("1. CREATE\n");
   printf("2. DISPLAY\n");
   printf("3. INSERT\n");
   printf("4. DELETE\n");
   printf("5. Exit\n");
   scanf("%d",&A);
   switch(A)
   {
      case 1 : create(); break;
      case 2 : display(); break;
      case 3 : insert(); break;
      case 4 : delete(); break;
      default:exit(0);

   }
  }
 }

   return 0;
 }
  void create()
   {
     int i;
     printf("Enter hte size o an array\n");
     scanf("%d",&Arraysize);
     printf("Enter thre elements of the array?\n");
     for(i=0;i<Arraysize;i++)
        scanf("%d",&GloabalArray[i]);

   }
  void display()
  { int i;
    for(i=0;i<Arraysize;i++)
       printf("%d\t",&GloabalArray[i]);
  }
  void insert()
  { int i;
    printf("Enter the position where you want to insert elements");
    scanf("%d",&n);
    for(i=n;i<Arraysize;i++)
     {
        temp=GloabalArray[i+1];
        GloabalArray[i]=temp;
     }
  }
