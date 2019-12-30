#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static const char alphabet[]="ABCDEFGHIKLMNOPQRSTVXYZ"
"abcdefghijklmnopqrstuvwxyz"
"1234567890";

static const int alphabet_size=sizeof(alphabet);

void bruteForce_impl(char* str,int index,int max_depath){
    int i;
    for(i=0;i<alphabet_size;i++){
        str[index]=alphabet[i];
        if(index==max_depath){
            printf("%s\n",str);
        }
        else{
            bruteForce_impl(str,index+1,max_depath);
    }
}
}

void bruteForce_sequential(int max_len){
    char *buf=malloc(sizeof(max_len));
    for(int i=0;i<max_len;i++){
        memset(buf,0,max_len);
        bruteForce_impl(buf,0,i);
    }
    free(buf);
}

int main() {
    bruteForce_sequential(3);
    
    return 0;
}
