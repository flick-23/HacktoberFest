#include<stdio.h>

// int power(int b, int p){
//     if(p == 0){
//         return 1;
//     }else{
//         return power(b, p-1) * b;
//     }
// }


// 2^9 = 2 * (2*2)^4
// 2^8 = (2*2)^4
int power(int b, int p){
    if(p == 0){
        return 1;
    }
    if(p%2 == 0){
        return power(b*b, p/2);
    }

    if(p%2 == 1){
        return b * power(b*b, p/2);
    }
}

int main(){
    int base = 9, pow = 3;

    printf("%d^%d = %d\n", base, pow, power(base, pow));

    return 0; 
}
