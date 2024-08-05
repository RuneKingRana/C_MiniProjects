#include<stdio.h>
void main ()
{
	int i,j,n1,n2,temp,a1[100],a2[100],a3[200];
	printf("Enter size of the first array:");
	scanf("%d",&n1);
	printf("Enter elements :");
	for (j=0;j<n1;j++){
		scanf("%d",&a1[j]);
	}
	printf("Enter size of  the second array:");
	scanf("%d",&n2);
	printf("Enter elements :");
	for (j=0;j<n2;j++){
		scanf("%d",&a2[j]);
	}
	for (i=0;i<n1;i++){
		a3[i] = a1[i];
	}
	for (i=0;i<n2;i++){
		a3[n1+i] = a2[i];
	}
	printf("The merged array is: ");
	for(i=0;i<n1+n2;i++){
		printf("%d ",a3[i]);
	}
	for (i=0;i<n1+n2-1;i++){
		for (j=0;j<n1+n2-1-i;j++){
			if (a3[j]>a3[j+1]){
				temp=a3[j];
				a3[j]=a3[j+1];
				a3[j+1]=temp;
			}
		}
	}
	printf("\nThe sorted array is: ");
	for (i=0;i<n1+n2;i++){
		printf("%d ",a3[i]);
	}
}
