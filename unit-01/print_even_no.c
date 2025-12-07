#include<stdio.h>
int main(){
    int n;
    int i;
    printf("enter the range\n");
    scanf("%d",&n);
    printf("odd no 1 to %d",n);
    for(i=0; i<=n; i++){
        if(i%2!=0){
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}