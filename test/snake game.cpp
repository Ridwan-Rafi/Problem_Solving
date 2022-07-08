#include<stdio.h>
#include<windows.h>
using namespace std;

void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main()
{
    for(int i=0;i<100;i++)
    {
        system("cls");
        gotoxy(i,10);
        printf("-----:>");
        Sleep(100);
    }
}
