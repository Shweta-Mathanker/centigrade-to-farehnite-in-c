#include<stdio.h>
int main(){
    float c;
    printf("enter temp in centigrade:");
    scanf("%f",&c);
    printf("temp in farehnite is :%f",(1.8*c)+32);
    return 0;
}