#include <stdio.h>
typedef struct triangle
{
  float base, altitude,area;
}triangle;
int input_n()
{
  int n;
  printf("Enter number of triangles:\n");
  scanf("%d",&n);
  return n;
}
triangle input_triangle()
{
  triangle a;
  printf("Enter the base and altitude of the triangle\n");
  scanf("%f%f",a.base,a.altitude);
  return a;
}
void input_n_triangles(int n,triangle t[n])
{
  for(int i=0;i<n;i++)
  {
    t[i]=input_triangle();
  }
}
void find_area(triangle *t)
{
  t.area=0.5*t.base*t.altitude;
}
void find_areas_n(int n, Triangle t[n])
{
  for(int i=0;i<n;i++)
  {
    find_area(&t[i]);
  }
}
Triangle find_smallest_triangle(int n, Triangle t[n])
{
triangle small.area=10000000;
  for(int i=1;i<n;i++)
  {
    if(small.area>t[i].area)
    {
      small=t[i];
    }
  }
  return small;
}
void output(int n, triangle t[n], triangle smallest)
{
  printf("triangle with area %f is the smallest triangle",smallest.area);
}
int main()
{
  int n;
  n=input_n();
  triangle t[n];
  input_n_triangles(n,t);
  find_areas_n(n,t);
  triangle small=find_smallest_triangle(n,t);
  output(n,t,small);
  return 0;
}