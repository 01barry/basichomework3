#include <stdio.h>

#include <stdlib.h>

int main(void)

{

   float Height,S,Weight,BMI; 

    printf("======�ӨϥΪ̪�BMI��T======\n"); 

    printf("�A��������:");

    scanf("%f",&Height);

    printf("�A���魫��:");

    scanf("%f",&Weight);

    printf("=============================\n");

    S=Height/100;

    BMI=Weight/(S*S);

    printf("BMI = %.2f\n\n",BMI);

    system("pause");

    return 0;

}
