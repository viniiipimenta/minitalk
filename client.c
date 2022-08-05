#include <stdio.h>
#include <stdlib.h>

static char printing(char teste)
{
	char bits[9];
	int j;
	char ret;

	j = 8;
	while (j)
	{
		bits[--j] = (teste % 2) + 48;
		teste = teste / 2;
	}
	bits[8] = '\0';
	//printf("%s\n", bits);
	j = 8;
	ret = 0;
	if (bits[7] == '1')
			ret = ret + 1;
	if (bits[6] == '1')
		ret = ret + 2;
	if (bits[5] == '1')
		ret = ret + 4;
	if (bits[4] == '1')
		ret = ret + 8;
	if (bits[3] == '1')
		ret = ret + 16;
	if (bits[2] == '1')
		ret = ret + 32;
	if (bits[1] == '1')
		ret = ret + 64;
	if (bits[0] == '1')
		ret = ret + 128;
	//printf("%c\n", ret);
	return (ret);
}

int main(void)
{
	char str[6] = "teste";
	int i = 0;
	char ret;

	while (str[i] != '\0')
	{
		ret = printing(str[i]);
		i++;
		printf("%c", ret);
	}
	printf("\n");	
	return (0);
}
