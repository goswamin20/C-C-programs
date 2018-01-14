#include<stdio.h>
#include<stdlib.h>

int main() {
        int arr[]={4,5,6,7,8,10,11,2};
        int min=arr[0];
        int i=0;
        while(i<10){
            if(arr[i]<min){
                min=arr[i];
            }
        i++;
        }
        printf("The minimum is %d ",min);
        return 0;
}
