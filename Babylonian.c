#include<stdio.h>
#include<stdlib.h>
float squareroot(float n){
    float x=n;
    int i;
    float y=0;
    float random=0.000001;
    for(i=1;i!=0;i++){
       if(x-y<random){
        break;
       }
        x=(x+y)/2;
        y=n/x;
    }
    return x;
}
int main(){
int n;
scanf("%d",&n);
float value=squareroot(n);
printf("%f ",value);
}

