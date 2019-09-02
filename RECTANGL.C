//dated march16,2019
//created by parulmathur
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main(){
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
//setcolor(WHITE);
setbkcolor(WHITE);
//outermost
line(100,180,400,180);
line(100,180,100,380);
line(400,180,400,380);
line(100,380,400,380);
//inner
line(120,198,120,360);
line(120,198,375,198);
line(375,198,375,360);
line(120,360,375,360);
//inner
line(150,220,150,340);
line(150,220,345,220);
line(345,220,345,340);
line(150,340,345,340);
//innermost
line(175,238,175,320);
line(175,238,315,238);
line(315,238,315,320);
line(175,320,315,320);
//coloring
//innermost
setfillstyle(SOLID_FILL,7);
floodfill(176,239,WHITE);
//after innermost
setfillstyle(SOLID_FILL,11);
floodfill(151,221,WHITE);
//then_next
setfillstyle(SOLID_FILL,BLUE);
floodfill(121,199,WHITE);
//outermost
setfillstyle(SOLID_FILL,14);
floodfill(101,181,WHITE);
getch();
closegraph();
}