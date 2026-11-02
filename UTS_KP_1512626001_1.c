#include <stdio.h>

struct biodata
{
    char nama[50];
    char kota[30];
    char provinsi[30];
    int umur;
    float beratBadan;
    float tinggiBadan;
    // Penambahan jumlah karakter jenis kelamin karna buffer overflow
    char jenisKelamin[12];
    char golonganDarah[5];
};
struct biodata orang[3];
int main(int argc, char const *argv[])
{
    float rataRataBB = 0;
    float rataRataTB = 0;
    for (int i = 0; i < 3; i++)
    {
        printf("Biodata Orang Ke %d\n",i+1);
        printf("Masukkan Nama Anda : ");
        fgets(orang[i].nama,sizeof(orang[i].nama),stdin);
        printf("Masukkan Kota Anda : ");
        fgets(orang[i].kota,sizeof(orang[i].kota),stdin);
        printf("Masukkan Provinsi Anda : ");
        fgets(orang[i].provinsi,sizeof(orang[i].provinsi),stdin);
        printf("Masukkan Umur Anda : ");
        scanf("%d",&orang[i].umur);
        getchar();
        printf("Masukkan Berat Badan Anda : ");
        scanf("%f",&orang[i].beratBadan);
        getchar();
        printf("Masukkan Tinggi Badan Anda : ");
        scanf("%f",&orang[i].tinggiBadan);
        getchar();
        printf("Masukkan Jenis Kelamin Anda : ");
        fgets(orang[i].jenisKelamin,sizeof(orang[i].jenisKelamin),stdin);
        printf("Masukkan Golongan Darah Anda : ");
        fgets(orang[i].golonganDarah,sizeof(orang[i].golonganDarah),stdin);
        rataRataBB += orang[i].beratBadan;
        rataRataTB += orang[i].tinggiBadan;

    }
    float hasilBB = rataRataBB / 3;
    float hasilTB = rataRataTB / 3;

    printf("========BIODATA ORANG========\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Biodata Orang Ke %d\n",i+1);
        printf("Nama Anda : %s\n",orang[i].nama);
        printf("Kota Anda : %s\n",orang[i].kota);
        printf("Provinsi Anda : %s\n",orang[i].provinsi);
        printf("Umur Anda : %d\n",orang[i].umur);
        printf("Tinggi Badan Anda : %.2f\n",orang[i].tinggiBadan);
        printf("Berat Badan Anda : %.2f\n",orang[i].beratBadan);
        printf("Jenis Kelamin Anda : %s\n",orang[i].jenisKelamin);
        printf("Golongan Darah Anda : %s\n",orang[i].golonganDarah);
    }
    printf("Berat Badan Anda %.2f KG\n",hasilBB);
    printf("Tinggi Badan Anda %.2f CM\n",hasilTB);
    
    
    return 0;
}

