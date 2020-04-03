// #include <stdio.h>
// int main()
// {
//     double perimeter, area;
//     double height = 12;
//     double width = 12;
     
//      perimeter = 2.0 * (height + width);
//      area = width * height;

//     printf("perimeter is %e\n", perimeter);
//     printf("area is %e\n", area);
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

int main()
{
   // declaring variables
   double width = 34.2;
   double height = 65.5;
   double perimeter = 0.0;
   double area = 0.0;

   // performing perimeter calculation
   perimeter = 2.0 * (height + width);
   area = width * height;

   // displaying input
   printf("Width is:  %.2f, Height is: %.2f, Perimeter is: %f\n", width, height, perimeter);
   printf("Area is: %f\n", area);

   return 0;
}