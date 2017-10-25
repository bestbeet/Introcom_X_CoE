#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
  int r;
  float c,a,v,s;
  scanf("%d",&r);
  c=2*M_PI*r;
  a=M_PI*pow(r,2);
  s=4*M_PI*pow(r,2);
  v=(4*M_PI*pow(r,2))/3;
  printf("M_PI= %.10f\n",M_PI);
  printf("Circle Circumference : %.4f\n",c);
  printf("Circle Area : %.4f\n",a);
  printf("Sphere Volume : %.4f\n",v);
  printf("Sphere Surface : %.4f\n",s);
  exit(EXIT_SUCCESS);
}
