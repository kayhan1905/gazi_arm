#include <stdio.h>

int x,y;
char z;

int main(void)
{
      printf("bir sayi grin");    scanf("%d", &x);
      printf("bir sayi grin");    scanf("%d", &y);
      printf("bir islem sec");   scanf("%s", &z);
      int sonuc;

    switch (z) {
    case '+': sonuc=x+y;      break;
    case '-':  sonuc=x-y;     break;
    case '*':  sonuc=x*y;       break;
    case '/':  sonuc=x/y;       break;
    default:          printf("islem hatalı");    break;
    }
    printf("sonuc:%d", sonuc);

}
