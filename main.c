// Online C compiler to run C program online
#include <stdio.h>

# include<math.h>

int main ()
{
   float a,b,c,x,x1;
   int d;
   printf ("enter the values of\n a b c");
   scanf ("%f %f %f", &a, &b, &c);

   d= b*b - 4*a*c;

   if (d==0)
   {
      x = -b/(2*a);
      x1 = -b/(2*a);
      printf ("roots are equal =%f %f", x, x1);

   }
   else if (d>0){
      x = -b+sqrt (d) / (2*a);
      x1= -b-sqrt (d) / (2*a);
      printf ("The real roots = %f %f", x, x1);
   }
   else
      printf("No Roots");

    return 0;
}
