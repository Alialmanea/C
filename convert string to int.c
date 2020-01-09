#include <stdio.h>
#include <stdlib.h>

int lenstr(char s[]) {
    int c = 0;
    while (s[c] != '\0')
    c++;
    
    return c;
}

int convert_int(char str[]){
    int n=0,i=0,strln=lenstr(str);
    
    while (i<strln) {
          n*=10;
        
          switch (str[i]) {
            case '1':
             n+=1;
             i+=1;
            break;
        
            case '2':
             i+=1;
             n+=2;
            break;
        
            case '3':
             n+=3;
             i+=1;
            break;
        
            case '4':
             n+=4;
             i+=1;
            break;
        
            case '5':
             n+=5;
             i+=1;
            break;
        
            case '6':
             n+=6;
             i+=1;
            break;
        
            case '7':
             n+=7;
             i+=1;
            break;
        
            case '8':
             n+=8;
             i+=1;
            break;
        
            case '9':
             n+=9;
             i+=1;
            break;
        
            case '0':
             n+=0;
             i+=1;
             break;
        
            default:
              return -1;
             break;
    }
}
    return n;
}

int main(void) {
    
    char str[10] = "2344";
    int x = convert_int(str);

    printf("Converting %s: %d\n",str, x);
    
    return 0;
    
}
