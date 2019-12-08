
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    int rows;
    int cols;
    int data[];
} Matrix2D;

void printString(char str[])
{
    printf("String is : %s \n",str);
}

int length(char str[])
{
    int i=0;
    while (str[i] != '\0')
        ++i;
    return i;
}

void reverseSentence()
{
    char c;
    scanf("%c", &c);
    
    if( c != '\n')
    {
        reverseSentence();
        printf("%c",c);
    }
}

int Random_NextIn(int From,int To){
    srand(time(NULL));
    return rand()%((To-From)+1)+From;
}

int main(void )
{
    int Row,Column;
    printf("Enter the Row and column of Matrix (R*C)\n");
    scanf("%d*%d",&Row,&Column);
    int Matrix_1[Row][Column];
    int Matrix_2[Row][Column];
    int Matrix_sum[Row][Column];
    
    
    for (int i = 0; i < Row; i++) {         //this equals to the row in our matrix.
        for (int j = 0; j < Column; j++) {   //this equals to the column in each row.
            Matrix_1[i][j]=Random_NextIn(1,10);
        }
    }
    
    for (int i = 0; i < Row; i++) {         //this equals to the row in our matrix.
        for (int j = 0; j < Column; j++) {   //this equals to the column in each row.
            Matrix_2[i][j]=Random_NextIn(10,20);
        }
    }
    
    for (int i = 0; i < Row; i++) {         //this equals to the row in our matrix.
        for (int j = 0; j < Column; j++) {   //this equals to the column in each row.
            printf("%d  ",Matrix_1[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < Row; i++) {         //this equals to the row in our matrix.
        for (int j = 0; j < Column; j++) {   //this equals to the column in each row.
            printf("%d ",Matrix_2[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < Row; i++) {         //this equals to the row in our matrix.
        for (int j = 0; j < Column; j++) {   //this equals to the column in each row.
            Matrix_sum[i][j]=Matrix_1[i][j]+Matrix_2[i][j];
        }
        printf("\n");
    }
    
    printf("The sum of Matrix_1 + Matrix_2 is \n");
    
    for (int i = 0; i < Row; i++) {         //this equals to the row in our matrix.
        for (int j = 0; j < Column; j++) {   //this equals to the column in each row.
            printf("%d ",Matrix_sum[i][j]);
        }
        printf("\n");
    }
    
}
