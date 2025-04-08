#include <stdio.h>

int main(){
    int bin, decimal = 0;
    scanf("%i", &bin);
    
    decimal=(bin/1000)*8+(((bin%1000)/100)*4)+((bin % 100)/10)*2+bin%10;

    printf("%d", decimal);
    return 0;
}