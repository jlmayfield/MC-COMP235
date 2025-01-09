#include <stdio.h>

int function(int *arr,int n){
    int i;
    int c = 0 ;
    for(i = 0; i<n; i++){
        if(arr[i] % 2 == 0){
            c++;
        }
    }
    return c;
}

int main(){
    int a[10];
    int i,nev;
    for(i=0;i<10;i++){
        a[i] = i;
    }
    nev = function(a,10);
    printf("%d\n",nev);

}
