#include <stdio.h>
#include<math.h>
void input(float*x1,float *y1,float *x2, float *y2)
{
printf("enter the x1 value\n");
scanf(" %f",x1);
printf("enter the y1 value\n");
scanf(" %f",y1);
printf("enter the x2 value\n");
scanf(" %f",x2);
printf("enter the y2 value\n");
scanf(" %f",y2);
}
void find_distance(float x1, float y1, float x2, float y2, float *area)
{
    *area= sqrt(pow(x2 - x1,2)+pow(y2-y1,2));
}

void output(float x1, float y1,float x2, float y2, float area)
{
  printf("distance is %f",area);
}
int main ()
{
    float x1,y1,x2,y2;
 input(&x1,&y1,&x2,&y2);
 float area;
 find_distance(x1,y1,x2,y2,&area);
 output(x1,y1,x2,y2,area);
 return 0;
 }