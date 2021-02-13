#include<graphics.h>
#include<iostream>
using namespace std;
int main()
{   int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\TC\\BGI");
getch();
setcolor(6);
//code for slit
bar(175,100,190,150);
bar(175,250,190,275);
bar(175,375,190,500);
bar(700,100,730,150);
bar(700,875,730,500);
//code for semicircular waves
while(1)
{
for(int i=0;i<225;i+=12)
  {setcolor(4); 
     
    arc(200+i,200,270,90,50+i);
    arc (200+i,325,270,90,50+i);
       if(i>200)
          {arc(200+i,200,270,90,50+i);
		  }
		  setcolor(0);
		  for(int i=0;i<60;i++)
		     {     line(634+i,10,634+i,600);
			 }
			 setcolor(2);
			 if(i<201){
    arc(700+i,200,270,90,50+i);}
    delay(2);
} 

delay(40);

cleardevice();
bar(175,10,185,150);
bar(175,250,185,275);
bar(175,375,185,500);
bar(690,10,700,150);
bar(690,250,700,500);
setcolor(1);
line(633,10,633,600);
line(1133,10,1133,600);

outtextxy(150,500,"Double Slit");
outtextxy(750,500,"Single Slit");
}
getch();
closegraph();
return 0;
}
