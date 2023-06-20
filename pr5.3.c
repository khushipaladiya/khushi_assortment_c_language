#include<stdio.h>
void main(){
	int i;
	int j;

	int a[3][3];

printf("Enter the elements are: \n");
 for(i=0;i<=2;i++){
 	for(j=0;j<=2;j++){
 		printf("Enter a[%d][%d]: ",i,j);
 		scanf("%d",&a[i][j]);
	 }
}
for(i=0;i<=2;i++){
	for(j=0;j<=2;j++){
		if(a[i][j]%2==0){
			printf("The even number: %d\n",a[i][j]);
		}else{
			printf("The odd number: %d\n",a[i][j]);
		}
	}
}
}
