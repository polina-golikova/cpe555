/*
 * CPE-555 Real-Time and Embedded Systems
 * Stevens Institute of Technology
 * Summer 2022
 *
 * Homework 3, DD to DMS
 *
 * Name: Polina Golikova
 */

/* Standard includes */
#include <stdio.h>
#include <math.h>

/* function */
void DDtoDMS(int type, float coordinates)
{
	// convert coordinates into coordinates, minutes, and seconds
	int coord = coordinates;
	int minutes = (coordinates - coord) * 60;
	float seconds = (coordinates - coord - (minutes/60.0)) * 3600;

	// depending on what direction, print different strings
	if (type == 0)
	{
		printf("Latitude:  %d degrees, %d minutes, %f seconds\n", coord, minutes, seconds);
	}
	else if (type == 1)
	{
		printf("Longitude:  %d degrees, %d minutes, %f seconds\n", coord, minutes, seconds);
	}
}

/* main application code */
int main( void )
{
	/* set STDOUT to be non-buffered to that printf() messages display immediately */
	setbuf(stdout, NULL);

	float lat = 0;
	float lon = 0;

	// user input for coordinates
	printf( "Enter latitude in decimal form: ");
	scanf("%f", &lat);
	printf( "Enter longitude in decimal form: ");
	scanf("%f", &lon);

	// function call to convert coordinates
	DDtoDMS(0, lat);
	DDtoDMS(1, lon);

	return 0;
}

