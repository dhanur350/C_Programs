#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include <dos.h>
#include <math.h>
#include <stdlib.h>
/* For a piece of information this program will only work in Turbo Compiler because header files and functions specially defined in Turbo Compiler */
void planefig(); // Movement of plane define function above
void planefig()
{ // Warning this'll only run in Turbo C++
    // Plane movement
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "c:\\tc\\bgi");
    // Plane movement from top left to top right
    for (int i = 0; i < 550; i++)
    {
        // plane body
        setcolor(10);                            // To set color of below diagram
        rectangle(150 + i, 100, 170 + i, 130);   // To draw rectangle
        ellipse(150 + i, 115, 90, 270, 127, 15); // to draw oval shape ellipse
        // ellipse(int x, int y, int stangle, int endangle, int xradius, int yradius)
        ellipse(116 + i, 104, 10, 170, 24, 12); // to draw oval shape ellipse
        // ellipse(int x, int y, int stangle, int endangle, int xradius, int yradius)
        //  plane wings
        setcolor(14);                          // To set color of below diagram
        line(120 + i, 120, 70 + i, 166);       // To draw line {int x1, int y1, int x2, int y2}
        line(90 + i, 120, 60 + i, 160);        // To draw line {int x1, int y1, int x2, int y2}
        ellipse(77 + i, 160, 180, 250, 16, 8); // to draw oval shape ellipse
        // ellipse(int x, int y, int stangle, int endangle, int xradius, int yradius)
        line(120 + i, 93, 89 + i, 62); // To draw line {int x1, int y1, int x2, int y2}
        line(96 + i, 101, 76 + i, 62); // To draw line {int x1, int y1, int x2, int y2}
        line(76 + i, 63, 89 + i, 63);  // To draw line {int x1, int y1, int x2, int y2}
        // plane tail
        setcolor(11);                          // To set color of below diagram
        line(30 + i, 80, 50 + i, 110);         // To draw line {int x1, int y1, int x2, int y2}
        line(10 + i, 85, 30 + i, 120);         // To draw line {int x1, int y1, int x2, int y2}
        line(10 + i, 85, 30 + i, 80);          // To draw line {int x1, int y1, int x2, int y2}
        setcolor(14);                          // To set color of below diagram
        rectangle(170 + i, 110, 175 + i, 120); // To set rectangle
        // rectangle(int left, int top, int right, int bottom)
        setcolor(14);
        settextstyle(7, 0, 2); // to set font style with these parameters
        // settextstyle(int font, int direction, int charsize)
        if (i % 2 == 0)
        {
            setcolor(11);                        // To set color of below diagram
            ellipse(178 + i, 94, 0, 360, 3, 18); // to draw oval shape ellipse
            // ellipse(int x, int y, int stangle, int endangle, int xradius, int yradius)
        }
        else
        {
            setcolor(11);                         // To set color of below diagram
            ellipse(178 + i, 136, 0, 360, 3, 18); // to draw oval shape ellipse
            // ellipse(int x, int y, int stangle, int endangle, int xradius, int yradius)
        }
        delay(30);
        cleardevice();
    }
}
void main()
{
    // Game Plane which will hit but it'll show dots as planes
    int gd = DETECT, gm;
    // gd=DETECT is used to call out The various graphics drivers gm is Graphics mode
    float x1, x2, y1, y2, dx, co, j;
    int flag = 0;
    float distance, B_SPEED, F_SPEED;   // B_SPEED is bomber Speed and P_SPEED is plane speed
    initgraph(&gd, &gm, "C:\\TC\\BGI"); // This is used to initialize graphics driver
    // initgraph(int *graphdriver, int *graphmode, char *pathtodriver)
    cleardevice();
    textcolor(RED); // Text color function is to set text color below written
    // Set speed of plane and bomber
    printf("Enter the Speed of Bomber Plane(1 to 20):");
    scanf("%f", &B_SPEED);
    printf("Enter the Speed of Fighter Plane(1 to 20):");
    scanf("%f", &F_SPEED);
    j = 120;
    x1 = 20.0;
    y1 = 400.0;
    x2 = 20.0;
    y2 = 200.0;
    while (x1 < 600)
    {
        cleardevice();             // To clear device output
        sound(j);                  // Inbuilt function to get sound
        setfillstyle(1, RED);      // Setting color dot RED of Bomber
        fillellipse(x1, y1, 5, 5); // Ellipse oval shape but with filled color
        // void fillellipse(int x, int y, int xradius, int yradius)
        outtextxy(x1 + 20, y1, "BOMBER"); // Whem bomber will run it'll show as RED Dot
        // circle(x1,y1,10);
        x1 = x1 + B_SPEED;
        dx = x1 - x2;
        gotoxy(1, 1);
        printf("BOMBER  X1:%2f, Y1:%f", x1, y1);
        gotoxy(1, 2);
        printf("FIGHTER X2:%2f, Y2:%2f", x2, y2);
        distance = pow((x1 - x2), 2) + pow((y1 - y2), 2);
        distance = sqrt(distance);
        gotoxy(1, 3);
        printf("DISTANCE BETWEEN BOTH PLANE:%f", distance);
        co = dx / distance;
        x2 = x2 + F_SPEED * co;
        y2 = y2 + F_SPEED * sqrt(1 - co * co);
        // circle(x2,y2,10);
        setfillstyle(1, GREEN); // Setting color dot GREEN of fighter
        fillellipse(x2, y2, 5, 5);
        outtextxy(x2 + 20, y2, "FIGHTER"); // Whem fighter will chase it'll show as GREEN Dot
        if (distance <= 50)
        {
            flag = 1;
            // Movement if fighter catches the bomber according to our setting coordinates
            for (int i = 0; i < 15; i++)
            {
                sound(i * 180);
                delay(50);
            }
            outtextxy(220, 150, "Bomber Plane crashed");
            nosound();
            getch();
            break;
        }
        delay(500);
    }
    // If fighter coordinates loo far away from bomber
    if (flag == 0)
    {
        outtextxy(220, 250, " Sorry:Bomber Plane has Passed away Safely!");
        for (int i = 120; i < 1000; i++)
        {
            sound(i); // To create sound according to coordinates
            delay(8);
        }
        delay(50);
    }
    nosound();
    planefig(); // Calling of plane movement function which is defined and declared above
    getch();
}
