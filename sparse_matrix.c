#include <stdio.h>
void main()
{
    int m,n,i,j,res,spe=0,arr[100][100];
    printf("Enter number of row: ");
    scanf("%d",&m);
    printf("Enter number of column: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for (i=0;i<m;i++){
        for (j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The entered array is: \n");
    for (i=0;i<m;i++){
        for (j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    res=(m*n*2)/3;
    for (i=0;i<m;i++){
        for (j=0;j<n;j++){
            if (arr[i][j]==0){
                spe+=1;
            }
        }
    }
    if (spe>=res){
        printf("The array is a sparse matrix.");
    }
    else {
        printf("The array is not a sparse matrix.");
    }
}
