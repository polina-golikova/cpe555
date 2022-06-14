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

/* global variables */
/* (Declare your global variables here) */

/* function prototypes */
/* (Add your function prototypes here) */
void ddToDMS(int type, float coordinates)
{

	int coord = int(coordinates);
	int minutes = int((coordinates - coord) * 60);
	int seconds = int((coordinates - coord - minutes/60) * 60);


	if (type == 0)
	{
		printf("Latitude:  %d, %d minutes, %d seconds\n", &coord, &minutes, &seconds);
	}
	else if (type == 1)
	{
		printf("Longitude:  %d, %d minutes, %d seconds\n", &coord, &minutes, &seconds);
	}
}

/* main application code */
int main( void )
{
	float lat;
	float lon;

	scanf("Enter latitude in decimal form: %f", &lat);
	scanf("Enter longitude in decimal form: %f", &lon);

	ddToDMS(0, lat);
	ddToDMS(1, lon);

	return 0;
}

