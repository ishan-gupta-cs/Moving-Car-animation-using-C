#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void sceneOne();
void sceneTwo();

int main()
{
	int gdriver=DETECT,gmode,i;
	initgraph(&gdriver,&gmode,(char)*"");
	int h=GetSystemMetrics(SM_CYSCREEN);
	int w=GetSystemMetrics(SM_CXSCREEN);
	initwindow(w,h,"CPROJECT");
	
	sceneTwo();
cleardevice();
delay(500);
sceneOne();

	for(i=0;i<2500;)
	{
	setcolor(WHITE);
	setfillstyle(SOLID_FILL,BLUE);
	ellipse(400+i,105,0,180,30,25);
	ellipse(430+i,130,285,90,40,30);
	ellipse(415+i,160,210,360,25,30);
	ellipse(380+i,150,180,300,30,30);
	ellipse(370+i,130,85,235,30,25);
	floodfill(400+i,140,WHITE);
	setcolor(WHITE);
	setfillstyle(SOLID_FILL,BLUE);
	ellipse(-400+i,155,0,180,30,25);
	ellipse(-370+i,180,285,90,40,30);
	ellipse(-385+i,210,210,360,25,30);
	ellipse(-420+i,200,180,300,30,30);
	ellipse(-430+i,180,85,235,30,25);
	floodfill(-400+i,190,WHITE);
	setcolor(WHITE);
	setfillstyle(SOLID_FILL,BLUE);
	ellipse(-200+i,105,0,180,30,25);
	ellipse(-170+i,130,285,90,40,30);
	ellipse(-185+i,160,210,360,25,30);
	ellipse(-220+i,150,180,300,30,30);
	ellipse(-230+i,130,85,235,30,25);
	floodfill(-200+i,140,WHITE);
	setcolor(WHITE);
	setfillstyle(SOLID_FILL,BLUE);
	ellipse(800+i,55,0,180,30,25);
	ellipse(830+i,80,285,90,40,30);
	ellipse(815+i,110,210,360,25,30);
	ellipse(780+i,100,180,300,30,30);
	ellipse(770+i,80,85,235,30,25);
	floodfill(800+i,90,WHITE);
	//triangle
	line(20+i,480,60+i,430);
	line(60+i,430,100+i,480);
	line(20+i,480,100+i,480);
	//flag
	line(100+i,480,100+i,430);
	rectangle(80+i,430,100+i,440);
	//tires
	circle(38+i,491,10);
	circle(80+i,491,10);
	//road
	line(0,500,2500,500);
	//color
	
	
	setfillstyle(8,3);
	floodfill(61+i,440,WHITE);
	delay(70);
	cleardevice();
	i=i+3;
}
	getch();
	closegraph();
	
}
//SCENE2

void sceneTwo() {
    outtextxy(110,180,"MOVING CAR USING C GRAPHICS.");
    outtextxy(120,250,"press any key to continue!");
    getch();
}	
	//SCENE1

void sceneOne() {

int i, xi;

/* opening credits */

outtextxy(120,180,"CODED BY");
delay(2700);

settextstyle(DEFAULT_FONT,HORIZ_DIR,4);
outtextxy(120,206,"SAMRADH SRIVASTAVA");
outtextxy(120,235,"ISHAN GUPTA");
outtextxy(120,265,"HARSH GUPTA");

delay(6000);
cleardevice();
delay(750);
//loading animation
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
xi=170;
outtextxy(170,180,"PROCESSING...");
for(i=0;i<150;i++)
{
delay(50);
bar(xi,200,xi,220);
xi += 2;

}
cleardevice();
delay(1600);
}

