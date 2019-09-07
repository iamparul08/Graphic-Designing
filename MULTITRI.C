//triangles
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main(){
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
setcolor(RED);
setfillstyle(SOLID_FILL,WHITE);
floodfill(20,20,RED);
line(250,50,50,330);
line(50,330,450,330);
line(450,330,250,50);
setfillstyle(SOLID_FILL,YELLOW);
floodfill(251,55,RED);
line(250,100,100,300);
line(100,300,400,300);
line(400,300,250,100);
setfillstyle(SOLID_FILL,BROWN);
floodfill(251,150,RED);
line(250,150,160,270);
line(160,270,340,270);
line(340,270,250,150);
setfillstyle(SOLID_FILL,7);
floodfill(251,155,RED);
getch();
closegraph();
}