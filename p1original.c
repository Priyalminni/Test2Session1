#include <stdio.h>
#include <math.h>
void input(float*x1,float *y1,float *x2, float *y2)
{
   printf("Enter coordinates of a point\n");
  scanf("%f%f",x1,y1);
  printf("Enter coordinates of another point\n");
  scanf("%f%f",x2,y2);
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