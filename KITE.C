#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main(){
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
setcolor(WHITE);
line(315,50,315,350);      //vertical line
line(190,160,455,160);     //horizontal line
line(315,50,190,160);
line(315,50,455,160);
line(190,160,315,350);
line(315,350,455,160);
//coloring
setfillstyle(SOLID_FILL,5);   //pink
floodfill(316,52,WHITE);
setfillstyle(SOLID_FILL,14);  //yellow
floodfill(452,162,WHITE);
setfillstyle(SOLID_FILL,5);   //pink
floodfill(192,161,WHITE);
setfillstyle(SOLID_FILL,14);  //yellow
floodfill(312,59,WHITE);

//left 3 lines
line(315,50,315,35);
line(315,50,310,35);
line(315,50,320,35);
//upper 3 lines
line(190,160,175,160);
line(190,160,175,155);
line(190,160,175,165);
//right 3 lines
line(455,160,470,160);
line(455,160,470,165);
line(455,160,470,155);
//small triangle
line(315,350,290,370);
line(315,350,340,370);
line(290,370,340,370);
setfillstyle(SOLID_FILL,5);
floodfill(292,369,WHITE);
//arc
arc(334,410,0,120,40);
getch();
closegraph();
}