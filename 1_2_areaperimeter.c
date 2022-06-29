// Page no. 19, question no. 2.

#include <stdio.h>
int main()
{
  int length,breadth, areaofcircle, perimeter,radius;
  float pi=3.141;
  printf("Enter the length of rectangle: \n");
  printf("Enter the breadth of rectangle: \n");
  printf("Enter the radius of circle: \n");
  scanf("%d %d %d" , &length,&breadth,&radius);
  perimeter=2*(length+breadth);
  areaofcircle=pi*radius*radius;
  printf("The perimeter of rectangle is %d \n",perimeter);
  printf("The area of circle is %d \n",areaofcircle);
  return 0;
}