#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <string.h>
#define MAX 10

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student {
    char ad[MAX];
    char soyad[MAX];
    int id;
    int vize,final;
    double ort;
    bool durum;
    
};
typedef struct student student_t ;

int main(void) {
    int n=0,i=0;
    printf("Ogrenci sayisi kac: ");
    scanf("%d",&n);
    student_t Ogrenci[n];
    
    for(i=0;i<n;i++){
        printf("\n%d.Ogrencinin adi : ",i+1);
        scanf("%s",Ogrenci[i].ad);
        printf("\n%d.Ogrencinin soyadi : ",i+1);
        scanf("%s",Ogrenci[i].soyad);
        printf("\n%d.Ogrencinin Numarasi : ",i+1);
        scanf("%d",&Ogrenci[i].id);
        printf("\n%d.Ogrenci Vize notu : ",i+1);
        scanf("%d",&Ogrenci[i].vize);
        printf("\n%d.Ogrenci final notu : ",i+1);
        scanf("%d",&Ogrenci[i].final);
        Ogrenci[i].ort=(Ogrenci[i].vize)*(0.40+Ogrenci[i].final*0.60);
        if(Ogrenci[i].ort>=60)
            Ogrenci[i].durum=1;
        else
            Ogrenci[i].durum=0;
    }
    printf("\nOgrencinin Numarasi   Ogrencinin adi    Ogrencinin soyadi  Vize   final  ortralma   durum ");
    
    for(i=0;i<n;i++){
        printf("\n%d                     %s                  %s       %d      %d      %f.2   ",Ogrenci[i].id,Ogrenci[i].ad,Ogrenci[i].soyad,Ogrenci[i].vize,Ogrenci[i].final,Ogrenci[i].ort);
        printf("  %s", Ogrenci[i].durum  ?  "gecti" : "kaldi\n");
    }
    
    
}
