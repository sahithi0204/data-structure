#DATA STRUCTURES

1. program to perform Matrix Multiplication:
#include<stdio.h>    
#include<stdlib.h>  
int main(){  
int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;    
system("cls");  
printf("enter the number of row=");    
scanf("%d",&r);    
printf("enter the number of column=");    
scanf("%d",&c);    
printf("enter the first matrix element=\n");    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
scanf("%d",&a[i][j]);    
}    
}    
printf("enter the second matrix element=\n");    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
scanf("%d",&b[i][j]);    
}    
}    
    
printf("multiply of the matrix=\n");    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
mul[i][j]=0;    
for(k=0;k<c;k++)    
{    
mul[i][j]+=a[i][k]*b[k][j];    
}    
}    
}    
//for printing result    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
printf("%d\t",mul[i][j]);    
}    
printf("\n");    
}    
return 0;  
}  
![ds output c](https://user-images.githubusercontent.com/113923373/191200099-c19d4dae-cb82-4397-bdd4-e07563152a2e.png)
2.program to find Odd or Even number from a given set of numbers:
#include<stdio.h>
int main()
{
int Size, i, a[10];
int Even_Count = 0, Odd_Count = 0;
printf("\n Please Enter the Size of an Array : ");
scanf("%d", &Size);
printf("\nPlease Enter the Array Elements\n");
for(i = 0; i < Size; i++)
{
 scanf("%d", &a[i]);
}

for(i = 0; i < Size; i ++)
{
 if(a[i] % 2 == 0)
 {
 Even_Count++;
 }
 else
 {
 Odd_Count++;
 }
}
printf("\n Total Number of Even Numbers in this Array = %d ", Even_Count);
printf("\n Total Number of Odd Numbers in this Array = %d ", Odd_Count);
return 0;
}
![even output c](https://user-images.githubusercontent.com/113923373/191201426-e038f2be-38a4-4c19-b84c-776704a4dffc.png)



