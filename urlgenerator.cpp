#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BUF_SIZE 200

int main()
{
	// Assume that we have lattitude and longitude variables as follows
	float lattitude = 52.52, longitude = 13.41;
	
	char finalURLBuff[MAX_BUF_SIZE];	
	
	snprintf(finalURLBuff, MAX_BUF_SIZE, "https://api.open-meteo.com/v1/forecast?latitude=%f&longitude=%f&current_weather=True", lattitude, longitude); 
	
	fprintf(stderr, "The final URL is %s\n", finalURLBuff);

	return 0;
}