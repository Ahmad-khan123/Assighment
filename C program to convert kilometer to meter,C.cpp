/** C program to convert kilometer into meter. 
/ * centimeter and millimeter
*/
#include<stdio.h>
#include<conio.h>


int main ()
{
float meter=0,centimeter=0, millimeter=0, kilometer;
	char opt;
	
	/*
* Take length in kilimeter as input from user
*/

	start:
	printf("Enter length in Kilometer (km) \n");
	scanf("%f", &kilometer);
	/*
	* 1 km = 1000 m, 1 km = 100000 cm, 1 km = 1000000 mm
	*/
	meter = kilometer*1000;
	centimeter  = kilometer*100000;
	millimeter  = kilometer*1000000;
	

	printf("%.4f kilometer = %.0f Meter\n" , kilometer, meter);
	printf("%.4f Kilometr =  %.0f Centimeter\n", kilometer, centimeter);
	printf("%.4f kilometr =  %.0f Millimetr\n" , kilometer, millimeter ); 
	
	printf("Do you want to continue? Y/N \n");
	opt=getche();
		
	if(opt=='y') {
		
	goto start;	
	} 

	else {
		
		
		printf("Sorry for entry......");
		return 0;
	}

}

