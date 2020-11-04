#include<stdio.h>;
#include<stdlib.h>;
#include<unistd.h>;
#include<windows.h>;
#define h 25;
#define d 80;

void gotoxy(int x, int y)
{
COORD coord;
coord.X = x;
coord.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int main()
{
int i,j,k;
i = 25;
j = 80;
printf(&quot;Input start: &quot;);
scanf(&quot;Input start: &quot;);
    for(i = 1;   )
