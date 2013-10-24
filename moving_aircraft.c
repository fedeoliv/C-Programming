/* Move anaircraft in the axis X.
    ATTENTION: This code will only run on Windows, because it uses the library windows.h!
*/

#include <windows.h>
#include <stdio.h>
#include <stdlib.h>

void gotoxy(int targetX, int targetY){
     HANDLE stdoutHandle = GetStdHandle(STD_OUTPUT_HANDLE);
     COORD position;
     position.Y = targetY;
     position.X = targetX;
     SetConsoleCursorPosition(stdoutHandle, position);
}

int main (){
    int x = 0, y = 0;

    for(x = 0; x < 76; x++){
        system("CLS");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);

        gotoxy(x + 2, y);
        printf("^");

        gotoxy(x + 2, y + 1);
        printf("^");

        gotoxy( x + 1, y + 2);
        printf("^^^");

        gotoxy( x, y + 3);
        printf("^^^^^");

        sleep (300);
   }

   getch();
   return 0;
}
