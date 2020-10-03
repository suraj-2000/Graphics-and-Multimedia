#include<bits/stdc++.h>
using namespace std;
#include<graphics.h>
int main()
{
	int gd=DETECT,gm;
	int xs,xe,ys,ye;
	cout<<"Enter starting coordinates"<<endl;
	cin>>xs>>xe;
	cout<<"Enter ending coordinates"<<endl;
	cin>>ys>>ye;
	initgraph(&gd,&gm,NULL);
	int dx=abs(xe-xs);
	int dy=abs(ye-ys);
	int dx2=2*dx;
	int dy2=2*dy;
	int p=dy2-dx;
	int x=xs;
	int y=ys;
	putpixel(x,y,WHITE);
	for(int i=0;i<dx;i++)
	{
		if(p<0)
		{
			x+=1;
			putpixel(x,y,WHITE);
			p=p+dy2;
			delay(50);
		}
		else
		{
			x+=1;
			y+=1;
			putpixel(x,y,WHITE);
			p=p+dy2-dx2;
			delay(50);
		}
	}
	getch();
	closegraph();
}

