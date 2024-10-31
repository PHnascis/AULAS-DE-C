#include <stdio.h>
#define ROW 3
#define COL 3

int main(){

int vetor[ROW][COL];
int l=0, c=0, n=0;

//filling the matrix
for(l=0; l<ROW; l++){
    for(c=0; c<COL; c++){
        if(c<=l){
            vetor[l][c] = c+1;
        }
        else{
            vetor[l][c] = 0;
        }
    }
}

//printing the matrix
for(l=0; l<ROW; l++){
    for(c=0; c<COL; c++){
        printf("%d ", vetor[l][c]);
    }
    printf("\n");
}


return 0;
}
