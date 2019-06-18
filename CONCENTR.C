#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main(){
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
printf("\n Coloured concentric circles");
setbkcolor(WHITE);
//setcolor(BLACK);
circle(200,200,50);
circle(200,200,80);
circle(200,200,120);
circle(200,200,150);
//coloring
setfillstyle(SOLID_FILL,5);   //pink  (4th)
floodfill(200,54,WHITE);
setfillstyle(SOLID_FILL,14);   //yellow (3rd)
floodfill(200,84,WHITE);
setfillstyle(SOLID_FILL,7);   //lightgray  (2nd)
floodfill(200,124,WHITE);
setfillstyle(SOLID_FILL,6);  //brown (1st)
floodfill(200,154,WHITE);
getch();
closegraph();
}