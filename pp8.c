#include <stdio.h>

int main (void)
{
	int array[5] = {1,2,3,4,7};
	int zaehler=0, gesucht=0;

	printf("Bitte gesuchte Zahl eingeben!\n");
	scanf("%i",&gesucht);

	for(int i=0; i<=5; i++)
	{
		if(array[i]==gesucht){
			zaehler++;}
	}
	printf("Die gesuchte Zahl ist %i mal vorhanden\n",zaehler);

return 0;
}




