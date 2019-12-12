
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Max 100
typedef struct char10 { char c[10]; } String;

char* Roman_Numeral_Converter(int num){
    String *Roman;
    Roman = malloc (sizeof (String));
    strcpy(Roman->c, "");
    
    while(num != 0)
    {
        if (num >= 1000)       // 1000 - m
        {
            strncat(Roman->c,"M",1);
            num -= 1000;
        }
        else if (num >= 900)   // 900 -  cm
        {
            strncat(Roman->c,"CM", 2);
            num -= 900;
        }
        
        else if (num >= 500)   // 500 - d
        {
            strncat(Roman->c,"D", 1);
            num -= 500;
        }
        
        else if (num >= 400)   // 400 -  cd
        {
            strncat(Roman->c,"CD", 2);
            num -= 400;
        }
        
        else if (num >= 100)   // 100 - c
        {
            strncat(Roman->c,"C", 2);
            num -= 100;
        }
        
        else if (num >= 90)    // 90 - xc
        {
            strncat(Roman->c,"XC", 2);
            num -= 90;
        }
        
        else if (num >= 50)    // 50 - l
        {
            strncat(Roman->c,"I", 1);
            num -= 50;
        }
        
        else if (num >= 40)    // 40 - xl
        {
            strncat(Roman->c,"XI", 2);
            num -= 40;
        }
        
        else if (num >= 10)    // 10 - x
        {
            strncat(Roman->c,"X", 1);
            num -= 10;
        }
        
        else if (num >= 9)     // 9 - ix
        {
            strncat(Roman->c,"IX", 2);
            num -= 9;
        }
        
        else if (num >= 5)     // 5 - v
        {
            strncat(Roman->c,"V", 1);
            num -= 5;
        }
        
        else if (num >= 4)     // 4 - iv
        {
            strncat(Roman->c,"IV",2);
            num -= 4;
        }
        
        else if (num >= 1)     // 1 - i
        {
            strncat(Roman->c,"I", 1);
            num -= 1;
        }
        
    }
    return Roman;
}

int main(void)
{
    int i=0,count=0;
    FILE *InputFile;
    char pathofinput[Max],pathofoutput[Max];
    printf("============Roman Numeral Converter==========\n");
    printf("Enterd a valid number should be from 1 to 3,999\n\n");
    
    printf("Enter The path of input file");
    printf("\n For Example /Users/dabbaghie/Desktop/input.txt");
    printf("\nHere ==> ");
    scanf("%s",pathofinput);
    
    printf("============Roman Numeral Converter==========\n");
    printf("Enterd a valid number should be from 1 to 3,999\n\n");
    
    printf("Enter The path of output file");
    printf("\n For Example /Users/dabbaghie/Desktop/output.txt");
    printf("\nHere ==> ");
    scanf("%s",pathofoutput);
    strncat(pathofoutput,"/output.txt",11);
    
    InputFile =fopen(pathofinput,"r");
    char *Roman;
    int numberArray[Max];
    if (InputFile == NULL){        //Condition statement for  the path and  file
        printf("Error Reading File\n");
        exit (0);//Exit form the App
    }
    for (int i = 0; i < Max; i++){ // get The numbers by using ((,)) which Separated numbers
        fscanf(InputFile, "%d,", &numberArray[i] );
    }
    fclose(InputFile);
    
    while (numberArray[i]!=0){  //Count The Numbers
        count++;
        i++;
    }
    
    for (int i = 0; i < count; i++){  //
        Roman=Roman_Numeral_Converter(numberArray[i]);
        printf("%d.%d ==>%s\n",i+1,numberArray[i],Roman);
    }
    
    InputFile =fopen(pathofoutput,"w"); //Writing the result on file.txt
    
    for (int i = 0; i < count; i++){
        fprintf(InputFile,"%s,",
                Roman_Numeral_Converter(numberArray[i])); //For Example :XV,IV,II
    }
    fprintf(InputFile,"\n\n\n The Count of Numbers is: %d.",count);
    fprintf(InputFile,"\n\n\n                                         Ali.Almanea</>");
    fclose(InputFile);
    return 0;
}
