
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n%2==0){
        printf("siamese methos is not applicable for even numbers");
        exit(0);
    }
    int x=n*n,value=1,i,j;
int matrix[n][n];
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        matrix[i][j]=0;
    }
}
int ind1=0,ind2=n/2;
matrix[0][n/2]=value;
for(value=2;value<=x;value++){

    if(ind1-1<0&&ind2+1>=n){
        ind1=ind1+1;
    }
    else if(ind1-1<0){
        ind1=n-1;
        ind2=ind2+1;
    }
    else if(ind2+1>=n){
        ind2=0;
        ind1=ind1-1;
    }
    else if(matrix[ind1-1][ind2+1]!=0){
        ind1=ind1+1;
    }
    else{
        ind1=ind1-1;
        ind2=ind2+1;
    }
    matrix[ind1][ind2]=value;
}
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        printf("%d ",matrix[i][j]);
    }
    printf("\n");
}
}

