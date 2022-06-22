#include <stdio.h>

int main(void) {
    int i, j, k;
    int a[3][3], b[3][3];
    int add[3][3], sub[3][3], mul[3][3];

    /*数列a*/
    printf("a[1][1]からa[3][3]を入力してください。\n");
    scanf("%d %d %d %d %d %d %d %d %d",&a[0][0], &a[0][1], &a[0][2],&a[1][0], &a[1][1], &a[1][2], &a[2][0], &a[2][1], &a[2][2]);

    printf("\n");

    /*数列b*/
    printf("b[1][1]からb[3][3]を入力してください。\n");
    scanf("%d %d %d %d %d %d %d %d %d",&b[0][0], &b[0][1], &b[0][2],&b[1][0], &b[1][1], &b[1][2], &b[2][0], &b[2][1], &b[2][2]);

    printf("\n");

    /*数列a出力*/
    printf("a =\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    /*数列b出力*/
    printf("b =\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    /*足し算・引き算*/
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            add[i][j] = a[i][j] + b[i][j];
            sub[i][j] = a[i][j] - b[i][j];
        }
    }

    /*掛け算*/
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            mul[i][j] = 0;

            for(k = 0; k < 3; k++){
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    /*足し算出力*/
    printf("a + b =\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", add[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    /*引き算出力*/
        printf("a - b =\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", sub[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    /*掛け算出力*/
        printf("a * b =\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    return 0;
}