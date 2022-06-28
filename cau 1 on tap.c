#include <stdio.h>
#include <string.h>

struct {
    char name[50];
    char id[15];
    float avg;
} list[100] ;

int main(){
    int n;
    float x,max=0;

    printf("\na/ Nhap so sinh vien : ");    scanf("%d",&n);

    for (int i = 1; i<=n ; i++ ){
        printf("\nNhap ho ten sinh vien thu %d :",i);
        fflush(stdin);

        fgets(list[i].name,sizeof(list[i].name), stdin);

        printf("\nNhap ma sinh vien thu %d :",i);

        fflush(stdin);

        fgets(list[i].id , sizeof(list[i].id), stdin);

        printf("\nNhap Diem Trung Binh sinh vien thu %d :",i);

        fflush(stdin);

        scanf("%f",&list[i].avg);
    }


    printf("\nb/ Nhap x : ");   scanf("%f",&x);

    printf("\nCac sinh vien co diem trung binh lon hon %f",x);

    for (int i=1; i<=n; i++ )

        if (list[i].avg>x )

            printf("\nHo va ten: %s, Ma sinh vien: %s, DTB: %f",list[i].name,list[i].id,list[i].avg);

    printf("\n--------------------------------------------------------------------------------------");


    printf("\nc/");
    for (int i=1; i<=n ; i++ )
        if (list[i].avg>max)
            max=list[i].avg;

    printf("\nCac sinh vien co diem trung binh cao nhat:");
    for (int i=1; i<=n; i++ )
        if (list[i].avg==max )
            printf("\nHo va ten: %s, Ma sinh vien: %s, DTB: %f",list[i].name,list[i].id,list[i].avg);
    printf("\n-------------------------------------------------------------------------------------");


    return 0;
}


