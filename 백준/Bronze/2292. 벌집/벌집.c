//벌집
#include <stdio.h>
//1, 1
//2,  2 ~ 7  (1)  2+6*0  ~ 1+6*1    (1)
//3,  8 ~ 19 (3) 2+6*1  ~ 1+6*3    (1+2)
//4, 20 ~ 37 (6) 2+6*3  ~ 1+6*6    (1+2+3)
//5, 38 ~ 61 (10) 2+6*6  ~ 1+6*10   (1+2+3+4)
//6, 62 ~ 91 (15) 2+6*10 ~ 1+6*15   (1+2+3+4+5) 

int main(){
    int N;
    scanf("%d", &N);
    int range=1, count=1;

    while(N>range){
        range += 6*count;
        count++;
    }
    printf("%d", count);
    return 0;
}