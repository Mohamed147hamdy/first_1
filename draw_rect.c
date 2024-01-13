#include <stdio.h>
void drawRect(int length, int width);
void main(void)
{
	printf("\nLiving room:\n "); /* print room name */
	drawRect (22, 12);

	printf("\nCloset:\n");

	drawRect(50, 50);
	printf("\nKitchen:\n");

	drawRect (16, 16);
	printf("\nBathroom:\n");
	drawRect(6,8);
	printf("\nBedroom:\n");
	drawRect( 12, 12);
}
void drawRect(int length, int width)
{
int j, k;
length /= 2;     /* horizontal scale factor */ 
width  /= 4;     /*vertical scale factor */

for (j=1;j<=width;j++)
{	/* number of lines*/
  printf("\t\t\xDB");       /* tab over */
  for (k= 1; k<=length; k++) /* line of rectangles */
    printf("\xDB");     /* print one rectangle */
  printf("\n");         /* next line */
}
}
