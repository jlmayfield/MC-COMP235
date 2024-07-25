// Logan Mayfield
// Matrix (2D arrray) traversal patterns

#include <stdio.h>


void roworder(int N, int M){
  printf("row  col\n");
  int i,j;
  // for each row i
  for(i = 0 ; i < N; i++){
    // count out each column
    for(j = 0; j < M; j++){
      printf("%d  %d\n",i,j);
    }
  }
}

void colorder(int N, int M){
  printf("row  col\n");
  int i,j;
  //for each column j
  for(j = 0 ; j < M; j++){
    // count out each row i
    for(i = 0; i < N; i++){
      printf("%d  %d\n",i,j);
    }
  }
}

void diagonals(int N){
  printf("row  col\n");
  int d;
  for(d=0 ; d < 2*N -1 ; d++){
    printf("diagonal: %d\n",d);
    int i,j;
    if( d < N ){
      i = d;
      j = 0;
    }
    else{
      i = N-1;
      j = d-(N-1);
    }
    while(i >= 0 && j < N ){
      printf("%d  %d\n",i,j);
      i--;
      j++;
    }    
  }
}

void diagonals_rec(int N,int M){
  printf("row  col\n");
  int d;
  for(d=0 ; d < N+M-1 ; d++){
    printf("diagonal: %d\n",d);
    int i,j;
    if( d < N ){
      i = d;
      j = 0;
    }
    else{
      i = N-1;
      j = d-(N-1);
    }
    while(i >= 0 && j < M ){
      printf("%d  %d\n",i,j);
      i--;
      j++;
    }    
  }
}

void zigzag(int N,int M){
  printf("row  col\n");
  int d;
  int i,j;
  for(d=0 ; d < N+M-1 ; d++){
    printf("diagonal: %d\n",d);
    if( d % 2 == 0 ){
      if( d < N ){
	i = d;
	j = 0;
      }
      else{
	i = N-1;
	j = d-(N-1);
      }
      while(i >= 0 && i < N && j < M && j >=0 ){
	printf("%d  %d\n",i,j);
	i--;
	j++;
      }    
    }
    else{
      if( d < M ){
	i = 0;
	j = d;
      }      
      else{
	i = d-(M-1);
	j = M-1;
      }
      while(i >= 0 && i < N && j >= 0 && j < M ){
	printf("%d  %d\n",i,j);
	i++;
	j--;
      }
    }
  }
  
}

int main(int argc, char* argv[]){

  //roworder(4,4);

  //colorder(4,4);
  //diagonals(4);
  //diagonals_rec(5,3);
  //diagonals_rec(3,5);
  zigzag(5,2);

  return 0;  
}
