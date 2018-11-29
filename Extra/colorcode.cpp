#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("COLOR FC");
    printf("Welcome to the color changing application!\n");
    printf("Press any key to change the background color!\n");

    system("COLOR 6C");
    printf("Now the background color is Yellow and Text Color is light Red\n");
    printf("Press any key to exit...");
    return 0;
}


HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    
SetConsoleTextAttribute(hConsole, 11); // text color will the light CYAN

Name         | Value
             |
Black        |   0
Blue         |   1
Green        |   2
Cyan         |   3
Red          |   4
Magenta      |   5
Brown        |   6
Light Gray   |   7
Dark Gray    |   8
Light Blue   |   9
Light Green  |   10
Light Cyan   |   11
Light Red    |   12
Light Magenta|   13
Yellow       |   14
White        |   15

