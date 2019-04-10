#include <stdio.h>

#include <stdlib.h>

int main(void)

{

   float Height,S,Weight,BMI; 

    printf("======該使用者的BMI資訊======\n"); 

    printf("你的身高為:");

    scanf("%f",&Height);

    printf("你的體重為:");

    scanf("%f",&Weight);

    printf("=============================\n");

    S=Height/100;

    BMI=Weight/(S*S);

    printf("BMI = %.2f\n\n",BMI);

    system("pause");

    return 0;

}
