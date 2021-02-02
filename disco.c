#include<stdio.h>
#include<stdlib.h>
#include<windows.h>


void gotoxy(int,int);
int main(){
    int i;
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    system("cls");

    x:for(i=0;i<16;i++)
    {
        gotoxy(36,14);
        SetConsoleTextAttribute(h,i);
        printf("DISCO\n");
        system("cls");
    }

    goto x;
    SetConsoleTextAttribute(h,7);
    gotoxy(0,30);

    return 0;
}

void gotoxy(int x,int y){
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition( GetStdHandle(STD_OUTPUT_HANDLE),coord);
}