#include<stdio.h>
#include<math.h>
#include <stdlib.h>

int main(){
    int found = 0, i=0;
    double a=0, alan=0, passos = 0, cap=0;
    scanf("%lf %lf", &a, &alan);

    while(found == 0){
        if(i%2==0){
            if(pow(2,i) >= abs(a-alan)){
                cap = a + (pow(2,i)-(pow(2,i)-abs(a-alan)));
                passos += abs(cap-(a - pow(2, i-1)));
                // printf("%lf = %lf + %lf %lf \n", cap, a, (pow(2,i)-(pow(2,i)-abs(a-alan))), passos);
            }else{
                cap = a + pow(2, i);
                passos += abs(cap-(a - pow(2, i-1)));
                // printf("%lf = %lf + %lf %lf \n", cap, a, pow(2, i), passos);
            }
        }else{
            if(pow(2,i) >= abs(a-alan)){
                cap = a - (pow(2, i)-(pow(2,i)-abs(a-alan)));
                passos += abs(cap-(a + pow(2, i-1)));
                // printf("%lf = %lf - %lf %lf \n", cap, a, (pow(2,i)-(pow(2,i)-abs(a-alan))), passos);
            }else{
                cap = a - pow(2, i);
                passos += abs(cap-(a + pow(2, i-1)));
                // printf("%lf = %lf - %lf %lf \n", cap, a, pow(2, i), passos);
            }
        }
        if(cap==alan || i>=10){
            found = 1;
        }
        i++;
    }
    printf("%d \n", (int)passos);
}