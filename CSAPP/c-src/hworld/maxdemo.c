#include <stdio.h>
#include <time.h>
#include <stdlib.h>



int max(int* arr,size_t arr_size){
    if( arr_size == 0){
        return -1;
    }
    int max = 0;
    for(int i = 1; i < arr_size; i++){
        if(arr[i] > arr[max]){
            max = i;
        }
    }
    return max;  
}

int main(void){
    srand(time(NULL));

    int nums[10];
    for(int i = 0; i < 10; i++){
        nums[i] = rand() % 50;
    }
    printf("Today's Numbers: ");
    for(int i = 0; i < 10; i++){
        printf("%d ",nums[i]);
    }
    printf("\n");
    int max_i = max(nums,10);
    printf("The max value of %d is at index %d\n",nums[max_i],max_i);
    printf("Goodbye!\n");
    

}