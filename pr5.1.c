#include<stdio.h>
void main(){
	int n;
	int i;
	int a[i];
printf("Enter the Array's size: ");
scanf("%d",&n);

printf("Enter the elements of A: \n");
   for(i=0;i<n;i++){
   	  printf("Enter a[%d]: ",i);
   	  scanf("%d",&a[i]);
   }
printf("Negative elements from Array: ");
 for(i=0;i<n;i++){
	if(a[i]<0){
		printf("a[%d]=%d\n",i,a[i]);
	}
 }
}
