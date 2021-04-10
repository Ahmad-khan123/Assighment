#include<stdio.h>
#include<math.h>>
int main()
{
     // declare variables
     float radius, area,len, wid, h, b, a, c, s=0;

     
     printf("Enter Radius of Circle (in cm) :");
     scanf("%f", &radius);
     area = 3.14 * radius * radius;

     // display result
     printf("Area of Circle = %.2f cm\n",radius,area);

     printf("Enter length & width of Rectangle (in cm): ");
     scanf("%f %f",&len,&wid);

     // calculate area
     area = len * wid;

    
     printf("Area of Rectangle= %.3f cm\n",area);

     printf("Enter base and height (in cm): ");
     scanf("%f %f", &b, &h);

     // calculate area
     area = (0.5 * b * h);

    
     printf("Area of triangle= %.2f cm\n",area );
    
	
	 printf("Enter a,b and c value: ");
     scanf("%f %f %f",&a,&b,&c);
     s = (a+b+c)/2;
     area = sqrt( s*(s-a)*(s-b)*(s-c) );
     printf("Area = %.2f\n",area);

     return 0;
}


