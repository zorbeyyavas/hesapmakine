#include <stdio.h>

//c dilinde hesap makinesi yapımı

char opertator;
double say1,say2,sonuc;

printf("lutfen yaomak stediginiz islemi giriniz (+ - * /)\n");
scanf("%c",&opertator);

printf("\n lütfen birinci saiyi giriniz");
scanf("%lf",&say1);

printf("\n lütfen ikinci saiyi giriniz");
scanf("%lf",&say2);

switch (opertator)
{
case '+':
    sonuc=say1 + say2;
    printf("\n sonuc = %.2lf",sonuc);
    break;
case '-':
    sonuc=say1 - say2;
    printf("\n sonuc = %.2lf",sonuc);
    break;
case '*':
    sonuc=say1 * say2;
    printf("\n sonuc = %.2lf",sonuc);
    break;
case '/':
    sonuc=say1 / say2;
    printf("\n sonuc = %.2lf",sonuc);
    break;    
default:
printf("\n grdiginiz opertaör yanlis aq%c",opertator);
    break;
}