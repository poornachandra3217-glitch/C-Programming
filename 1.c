#include <stdio.h>
int main(){
    int size,num,pos,i;
    printf("Enter the size : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements for array : ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter number to insert : ");
    scanf("%d",&num);
    printf("Enter the position of the number(from starting 1) : ");
    scanf("%d",&pos);
    for(int i=size-1;i>=pos-1;i--){
        arr[i+1]=arr[i];
    }
    arr[1]=num;
    size++;
    for(int i=0;i<size;i++){
        printf("%d",arr[i]);
    }
    return 0;
}
