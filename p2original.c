#include <stdio.h>
#include <math.h>
void
input_triangle (float *x1, float *y1, float *x2, float *y2, float *x3,
		float *y3) 
{
  printf ("enter the first point\n");
scanf ("%f %f", x1, y1);
printf ("enter the second point\n");
scanf ("%f%f", x2, y2);
printf ("enter the third point\n");
scanf ("%f%f", x3, y3);
} 
int
is_triangle (float x1, float y1, float x2, float y2, float x3, float y3) 
{
  
float dist1;
  
float dist2;
  
float dist3;
  
dist1 = sqrt (pow (x2 - x1, 2) + pow (y2 - y1, 2));
  
dist2 = sqrt (pow (x3 - x2, 2) + pow (y3 - y2, 2));
  
dist3 = sqrt (pow (x3 - x1, 2) + pow (y3 - y1, 2));
  
if (dist1 + dist2 > dist3 || dist3 + dist2 > dist1
       || dist1 + dist3 > dist2)
    
    {
      
return 1;
    
}
  else
    {
return 0;
    }
}
void
output (float x1, float y1, float x2, float y2, float x3, float y3,
	int istriangle) 
{
if (istriangle == 1)
    {
printf ("its forms a triangle\n");   
}
  else
    {
printf ("its doesnot form a triangle\n");   
}
}
int
main () 
{
  float x1, x2, x3, y1, y2, y3, dist1, dist2, dist3;
input_triangle (&x1, &y1, &x2, &y2, &x3, &y3);
int istriangle = is_triangle (x1, x2, x3, y1, y2, y3);
output (x1, x2, x3, y1, y2, y3, istriangle);
return 0;
}