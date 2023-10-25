/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_help.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmatsuba <rmatsuba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:34:48 by rmatsuba          #+#    #+#             */
/*   Updated: 2023/10/25 22:07:48 by rmatsuba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_count_int(int num)
{
	int		digit_count;
	long	long_num;

	digit_count = 0;
	long_num = num;
	if (num == 0)
		return (1);
	if (long_num < 0)
	{
		digit_count++;
		long_num *= -1;
	}
	while (long_num > 0)
	{
		digit_count++;
		long_num = long_num / 10;
	}
	return (digit_count);
}

int	ft_count_unsigned_int(unsigned int num)
{
	int		digit_count;

	digit_count = 0;
	while (num > 0)
	{
		digit_count++;
		num = num / 10;
	}
	return (digit_count);
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
