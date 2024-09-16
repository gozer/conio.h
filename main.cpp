#include "conio.h"

int main(int argc, char *argv[]) {
  int key = 0;
  textbackground(BLUE);
  clrscr();
  textcolor(WHITE);
  gotoxy(30, 5);
  cprintf("Hello World WHITE");
  textcolor(YELLOW);
  gotoxy(30, 6);
  cprintf("Hello World YELLOW");
  for (int i = 0; i < 16; i++) {
    textcolor(i);
    gotoxy(1, 2 + i);
    cprintf("Hello World");
  }
  key = getch();
  printf("You entered %d\n", key);
  return 0;
}
