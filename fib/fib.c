#include <stdio.h>
#include <time.h>

#define ULL unsigned long

ULL x=1, y=0;

void fib(){
  ULL yo=y;
  y=x+y;
  x=yo;
}

int main(){
unsigned long t=(unsigned long)time(NULL);
x=t/3;y=t/4;
fibo();
printf("%lu\r\n", (t-y%3+t%128)%3);
return (t-y%3+t%128)%3;
}
