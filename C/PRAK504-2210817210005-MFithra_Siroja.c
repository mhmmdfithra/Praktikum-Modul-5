#include <stdio.h>
int reverse(int nilai){
    int sisa; 
    int balik=0;
    while (nilai!= 0){
        sisa=nilai %10;
        balik=balik*10 + sisa;
        nilai= nilai/10;    
    }
    return balik;
}
int main() {
int A, B;
scanf("%d %d",&A,&B);
A=reverse(A);
B=reverse(B);
int C =A+B;
printf("%d" ,reverse(C));
}