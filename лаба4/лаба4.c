#include stdio.h;
#include &lt;stdlib.h&gt;
#include &lt;unistd.h&gt;
#include &lt;windows.h&gt;
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
printf(&quot;Input start: &quot;);
scanf(&quot;Input start: &quot;);
    for(i = 1;   )
