#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

int	ft_print_char(int chr)
{
	write(1, &chr, 1);
	return (1);
}
int	ft_count_hex(unsigned int num)
{
	int		hex_count;

	hex_count = 0;
	while (num > 16)
	{
		hex_count++;
		num = num / 16;
	}
	hex_count++;
	return (hex_count);
}
int	ft_print_low_hex(unsigned int num)
{
	if (num >= 16)
		ft_print_low_hex(num / 16);
	if (num % 16 >= 10)
		ft_print_char((num % 16 - 10) + 'a');
	else
		ft_print_char((num % 16) + '0');
	return (ft_count_hex(num));
}

int main() {
    int num;
    char    *str = "string";
    num = ft_print_low_hex(&str);
    printf("return : %d", num);
}
