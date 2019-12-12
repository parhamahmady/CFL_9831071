#include <stdio.h>
#include <stdlib.h>

void printer(char[3][3]);

int main ()
{

   // printer(matrix);
    int inp,i=0;
    char player;
     char matrix[3][3]={};
    matrix[0][1]=player;


    while(2>1){
        i++;
        if(i>9){
            break;
        }
        if(i%2==0){
            player='O';
        }
        else{
            player='X';
        }
        scanf("%d",&inp);
        switch (inp){
            case 1: matrix[0][0]=player;
            break;
            case 2: matrix[0][1]=player;
            break;
            case 3: matrix[0][2]=player;
            break;
            case 4: matrix[1][0]=player;
            break;
            case 5: matrix[1][1]=player;
            break;
            case 6: matrix[1][2]=player;
            break;
            case 7: matrix[2][0]=player;
            break;
            case 8: matrix[2][1]=player;
            break;
            case 9: matrix[2][2]=player;
            break;
        }
        printer(matrix);
        getchar();

    }

}



void printer(char x[3][3]){
      for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf(" %c ",x[i][j]);
            if(j!=2){
            printf("|");}
            }
        printf("\n");
    }
}

