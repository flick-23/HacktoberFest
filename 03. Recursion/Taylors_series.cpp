#include<stdio.h>

// double e(int x, int n){
//     static double p = 1, f = 1;
//     double ans;

//     if(n == 0)
//         return 1;
//     ans = e(x, n-1); 
//     p = p*x;
//     f = f*n;
//     return (ans+p/f);
// }

double e(int x, int n){
    static double s;
    //double ans;

    if(n == 0){
        return s;
    }

    s = (1 + s*x/n);
    return e(x, n-1);
}

int main(){
    
    printf("%lf\n", e(1, 10));

    return 0;
}
