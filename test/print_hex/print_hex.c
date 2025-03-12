#include <unistd.h>

unsigned int ft_atoii(char *str)
{
	int num;
	int i = 0;

	num = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num);
}

void print_hex(int nbr)
{
	char *digit = "0123456789abcdef";

	if (nbr >= 16)
		print_hex(nbr / 16);
	write (1, &digit[nbr % 16], 1);
	
}
int main(int argc, char **argv)
{
	if (argc == 2)
		print_hex(ft_atoii(argv[1]));
	write (1, "\n", 1);
}