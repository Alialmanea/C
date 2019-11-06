#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {

	    int times=100;
        int frequency=0;
        int Random_numbers[times];
        int frequent_numbers[times];
        int i;

        //srand(time(NULL));

        for(i=0;i<times;i++){  //create Random numbers
        Random_numbers[i]=(rand()%7)    ;
        }


        printf("[");
        for(i=0;i<times;i++){     //Showing the array after be sortd it ;
        if(i==times-1)
        {
            printf("%d",Random_numbers[i]);
        }
        else
        {
            printf("%d,",Random_numbers[i]);
        }
         frequent_numbers[i] = -1;      //TO Make The frequent_numbers Empty;
        }
printf("]");
printf("\n");

        for(i=0; i<times; i++)
        {
        frequency = 1;
        for(int j=i+1; j<times; j++)
        {
            if(Random_numbers[i]==Random_numbers[j])
            {
                frequency++;
                frequent_numbers[j] = 0;
            }
        }

        if(frequent_numbers[i]!=0)
        {
            frequent_numbers[i] = frequency;
        }


    }

    printf("The frequency of all elements of array :\n");

    for(i=0; i<times; i++)
    {
        if(frequent_numbers[i]!=0)
        {
            printf("The frequency of Number: %d",Random_numbers[i]);
            printf(" is %d%c.\n",(frequent_numbers[i]*100)/times,37);
        }
    }



}

