#include<stdio.h>

void main (){
int a [1000],i,n;
int sum = 0;

printf("enter size of array: ");
scanf("%d",&n);

printf("enter elements of array: ");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}

for(i=0;i<n;i++)
{
	sum+=a[i];
}
printf("sum of array is : %d",sum);
	


}
