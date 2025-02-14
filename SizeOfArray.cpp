#include<stdio.h>
int main(){
    int n;
    printf("\nEnter No of Elements in Array: ");
    scanf("%d",&n);
    int a[n];
    for(int i = 0 ; i < n ; i++){
        printf("Enter Element %d : ",i+1);
        scanf("%d",&a[i]);
    }
    printf("Size Of Array : %ld",sizeof(a));
}