#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <windows.h>

void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main()
{
    int i,j,x,y,loops,k,m;
    x = 80;
    y = 24;
    gotoxy(1,25);
    printf("Press any key: ");
    scanf("Press any key: ");

    for (loops = 0; loops <= 12; loops++)
    {
     for (j=1; j <= x; j++)
  {
   gotoxy(j,y);
            printf("#");
            usleep(2000);
     }
     for (i=y; i >= 1; i--)
  {
       gotoxy(x,i);
            printf("#");
            usleep(2000);
  }
  for (k=x; k >= 0; k--)
  {
   gotoxy(k,80-x);
            printf("#");
            usleep(2000);
     }
     for (m=1; m <=y; m++)
  {
       gotoxy(24-y,m);
            printf("#");
            usleep(2000);
  }
  x--;
  y--;
 }

 gotoxy(1,25);
 printf("Thank you for your time! You can go home!");

 return 0;
}
