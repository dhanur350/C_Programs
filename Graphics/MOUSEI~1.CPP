#include <dos.h>
#include <iostream.h>
#include <conio.h>
// Header file for mouse detecting
union REGS in, out; // REGS is union
void detectmouse()	// function for mouse detection
{
	in.x.ax = 0;
	int86(0X33, &in, &out); // invoke interrupt

	if (out.x.ax == 0)
		cout << "\nMouse Fail To Initialize";
	else
		cout << "\nMouse Succesfully Initialize";
}
void main()
{
	detectmouse(); // function calling
	getch();
}
