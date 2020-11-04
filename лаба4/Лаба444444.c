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
    char h = "#";
    x = 80;
    y = 24;
    gotoxy(1,25);
    printf("Press any key: ");
    scanf("Press any key: ");

    for (loops = 0; loops <= 12; loops++)
    {
    	for (j=x; j >= 1; j--)
		{
			gotoxy(j,y);
            printf("%c",h);
            usleep(2000);
    	}
    	for (i=y; i >= 0; i--; j--)
		{
    	 	gotoxy(80-x,i);
            printf("%c",h);
            usleep(2000);
		}
		for (k=1; k <= 80; k++)
		{
			gotoxy(k,80-x);
            printf("%c",h);
            usleep(2000);
    	}
    	for (m=1; m <=y; m++)
		{
    	 	gotoxy(x,m);
            printf("%c",h);
            usleep(2000);
		}
		h++;
		x--;
		y--;
	}

	gotoxy(1,25);
	printf("Thank you for your attention");

	return 0;
}
