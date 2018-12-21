/*#include <stdio.h>
#include <stdlib.h>

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

int main (int argc, char const *argv[]) {
  printf(ANSI_COLOR_RED     "This text is RED!"     ANSI_COLOR_RESET "\n");
  printf(ANSI_COLOR_GREEN   "This text is GREEN!"   ANSI_COLOR_RESET "\n");
  printf(ANSI_COLOR_YELLOW  "This text is YELLOW!"  ANSI_COLOR_RESET "\n");
  printf(ANSI_COLOR_BLUE    "This text is BLUE!"    ANSI_COLOR_RESET "\n");
  printf(ANSI_COLOR_MAGENTA "This text is MAGENTA!" ANSI_COLOR_RESET "\n");
  printf(ANSI_COLOR_CYAN    "This text is CYAN!"    ANSI_COLOR_RESET "\n");

  return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("COLOR FC");
    printf("Welcome to the color changing application!\n");
    printf("Press any key to change the background color!\n");
    getch();
    system("COLOR 6C");
    printf("Now the background color is Yellow and Text Color is light Red\n");
    printf("Press any key to exit...");
    getch();
    return 0;
}
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
void SetColor(int value){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),  value);
}

int main(){
    SetColor(15);
    printf("Isso e um aplicativo de muita utilidade\n");
    SetColor(2);
    printf("lol\n");
    SetColor(3);
    printf("Colors\n");
    SetColor(4);
    printf("Colors\n");
    SetColor(5);
    printf("Colors\n");
    SetColor(7);
    printf("feito por juanmuscaria\n");
    SetColor(14);
    return 1;
}
