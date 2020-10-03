#include<stdio.h>
#include<graphics.h>
void main()
{
long x,y,x_center=300,y_center=300;
long a_sqr,b_sqr, fx,fy, d,a,b,tmp1,tmp2;
int g_driver=DETECT,g_mode;
clrscr();
initgraph(&g_driver,&g_mode,"C:\\TURBOC3\\BGI");
printf("Abhinav santosh Pandey 17SCSE101425 \n");
 printf("\n Enter value a and b = ");
	  scanf("%ld%ld",&a,&b);
	  x=0;
	  y=b;
	  a_sqr=a*a;
	  b_sqr=b*b;
	  fx=2*b_sqr*x;
	  fy=2*a_sqr*y;
  d=b_sqr-(a_sqr*b)+(a_sqr*0.25);
  do
   {
	putpixel(x_center+x,y_center-y,5);

   if(d<0)
    {
	d=d+fx+b_sqr;
    }
   else
	{
	y=y-1;
	d=d+fx+-fy+b_sqr;
	fy=fy-(2*a_sqr);
	}
	x=x+1;
	fx=fx+(2*b_sqr);
	delay(10);

   }
   while(fx<fy);
   getch();
   closegraph();
}
