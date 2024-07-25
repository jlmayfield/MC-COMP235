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

void diagonal_down(int N,int M){

}

void diagonal_up(int N, int M){


}

void zigzag(int N, int M){
  // down diagonal on even diagonals
  // up diagonal on odd diagonals
  // or vice versa if that's your thing
}

int main(int argc, char* argv[]){

  roworder(4,4);
  colorder(4,4);
  
  return 0;  
}
