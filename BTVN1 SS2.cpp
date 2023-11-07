#include <stdio.h>
int main(){
    float canh_hinh_vuong;
    float chieu_dai_hinh_chu_nhat;
    float chieu_rong_hinh_chu_nhat;
    float ban_kinh_hinh_tron;
    const float PI = 3.14;
    //Tinh chu vi và dien tich cua hinh vuong
    float chu_vi_hinh_vuong = 4 * canh_hinh_vuong;
    float dien_tich_hinh_vuong = canh_hinh_vuong * canh_hinh_vuong;
    //Tinh chu vi và dien tich cua hinh chu nhat
    float chu_vi_hinh_chu_nhat = 2 * (chieu_dai_hinh_chu_nhat + chieu_rong_hinh_chu_nhat);
    float dien_tich_hinh_chu_nhat = chieu_dai_hinh_chu_nhat * chieu_rong_hinh_chu_nhat;
    //Tinh chu vi và dien tich cua hinh tron
    float chu_vi_hinh_tron = 2 * PI * ban_kinh_hinh_tron;
    float dien_tich_hinh_tron = PI * ban_kinh_hinh_tron * ban_kinh_hinh_tron;
    //In ket qua ra man hinh
    printf("Chu vi hinh vuong: %f\n", chu_vi_hinh_vuong);
    printf("Dien tich hinh vuong: %f\n", dien_tich_hinh_vuong);
    printf("Chu vi hinh chu nhat: %f\n", chu_vi_hinh_chu_nhat);
    printf("Dien tich hinh chu nhat: %f\n", dien_tich_hinh_chu_nhat);
    printf("Chu vi hinh tron: %f\n", chu_vi_hinh_tron);
    printf("Dien tich hinh tron: %f\n", dien_tich_hinh_tron);
}

