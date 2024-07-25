#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]){

  char A[2][3][4];
  int option = 0;
  if(argc > 1){
    option = atoi(argv[1]);
  }

  printf("char A[2][3][4]\n");
  printf("A : %x\n",A);  
  if( option == 3){
    for( int i = 0; i < 2; i++){
      for( int j = 0; j < 3; j++){
	for( int k = 0; k < 4; k++){
	  printf("&(A[%d][%d][%d]) : %x\n",i,j,k,&(A[i][j][k]));
	}
      }
    }
  }
  else if (option == 2){
    for(int i = 0; i < 2; i++){
      for(int j = 0; j < 3; j++){
	printf("A[%d][%d] : %x\n",i,j,A[i][j]);
      }
    }
  }
  else if (option <= 1){
    for(int i = 0 ; i < 2; i++){
      printf("A[%d] : %x\n",i,A[i]);
    }
  }
}
