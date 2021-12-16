#include<stdio.h>
#include "header_file.h"

int sensor1_value=0;

void sensor1_send_value()
{


	for(int i=0;i<100;i++)
	{
		sensor1_value=sensor1_value+2;
		sec_delay(1);
	}
	return(0);


}
