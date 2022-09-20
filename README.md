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
3.program to find Factorial of a given number without using Recursion:
#include<stdio.h>
int main()
{
int i,n;
long fact=1;
printf("enter the number to find the factorial of a number");
scanf("%d",&n);
for (i=1;i<=n;i++)
{
fact=fact*i;
}
printf("factorial=%d",fact);
return 0;
}
![factorial output c](https://user-images.githubusercontent.com/113923373/191202739-5f9a56db-d6b2-4881-955b-9585769ef01d.png)
4.program to find Fibonacci series without using Recursion:
#include<stdio.h>
int main()
{
int n1=0,n2=1,n3,i,number;
printf("enter the number of elements");
scanf("%d",&number);
printf("%d%d",n1,n2);
for (i=2;i<number;i++)
{
n3=n1+n2;
printf("%d\n",n3);
n1=n2;
n2=n3;
}
return 0;
}
![fibonacci output c](https://user-images.githubusercontent.com/113923373/191203118-b56a8d19-a3b7-4857-919a-900ff1c92044.png)
5.program to find Factorial of a given number using Recursion:
#include<stdio.h>
int facto(int n);
int main()
{
 int facto(int n),num;
 printf("enter the number to find the factorial of a number");
 scanf("%d",&num);
 int facto(int n);
 printf("factorial of %d is %d",num,facto(num));
 return 0;
}
int facto(int n)
{
 if (n==0)
 return 1;
 if(n>1)
 return (n*facto(n-1));
}
![recusion output c](https://user-images.githubusercontent.com/113923373/191203550-9568fb74-7f42-47af-aa71-6121b4a5428e.png)
6. program to find Fibonacci series using Recursion:
#include<stdio.h>
void printfibonacci(int n)
{
static int n1=0,n2=1,n3;
if (n>0)
{
n3=n1+n2;
n1=n2;
n2=n3;
printf("%d",n3);
printfibonacci(n-1);
}
}
int main()
{
int n;
printf("enter the number of elements");
scanf("%d",&n);
printf("fibonacci series");
printf("%d%d",0,1);
printfibonacci(n-2);
}
![fibonacci using recursion output c](https://user-images.githubusercontent.com/113923373/191204821-04c0b984-9a41-4749-8867-8b5f4099040a.png)
7.program to implement Array operations such as Insert, Delete and Display:
#include <stdio.h>
int main()
{
 int array[50], position, c, n, value;
 printf("Enter number of elements in the array\n");
 scanf("%d", &n);
 printf("Enter %d elements\n", n);
 for (c = 0; c < n; c++)
 scanf("%d", &array[c]);
 printf("Please enter the location where you want to insert an new element\n");
 scanf("%d", &position);
 printf("Please enter the value\n");
 scanf("%d", &value);
 for (c = n - 1; c >= position - 1; c--)
 array[c+1] = array[c];
 array[position-1] = value;
 printf("Resultant array is\n");
 for (c = 0; c <= n; c++)
 printf("%d\n", array[c]);
 return 0;
}
![array operations output c](https://user-images.githubusercontent.com/113923373/191209712-3c9923ff-da9a-47ae-9372-db44094e0ca0.png)








