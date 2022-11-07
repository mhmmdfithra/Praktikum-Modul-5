#include <stdio.h>
void Biodata(int tahun,char A[20], char B[15]){
  int tahun_sekarang=2020; 
printf("Perkenalkan Nama Saya :%s\n", A);
printf("Umur Saya :%d\n", tahun_sekarang-tahun);
printf("Saya Adalah Angkatan :%d\n",tahun_sekarang);
printf("Asal Saya dari :%s\n",B);

}
int main() {
int tahunLahir;
char A[20], B[15];
scanf(" %d",&tahunLahir);
scanf("%s",&A);
scanf("%s",&B);
Biodata(tahunLahir,A,B);
return 0;
}