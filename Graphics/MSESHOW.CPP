#include <dos.h>
#include <iostream.h>
#include <conio.h>
union REGS in, out;
void detectmouse()
{
  in.x.ax = 0;
  int86(0X33, &in, &out);
  if (out.x.ax == 0)
    cout << "\nMouse Fail To Initialize";
  else
    cout << "\nMouse Succesfully Initialize";
}
void showmousetext()
{
  in.x.ax = 1;            // Input
  int86(0X33, &in, &out); // Invoke intrrupt
}
void main()
{
  detectmouse();
  showmousetext();
  getch();
}
