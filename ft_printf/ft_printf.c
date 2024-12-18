/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 15:36:51 by sel-khao          #+#    #+#             */
/*   Updated: 2024/12/09 23:31:49 by waissi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_type(va_list args, char c)
{
	if (c == '%')
		return ((ft_putchar('%')));
	else if (c == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(args, unsigned char *)));
	else if (c == 'i' || c == 'd')
		return (ft_putnbr(va_arg(args, int)));
	else if (c == 'u')
		return (ft_putnbr(va_arg(args, unsigned int)));
	else if (c == 'x' || c == 'X')
		return (ft_puthex(va_arg(args, unsigned int), c));
	else if (c == 'p')
		return (ft_putaddr((unsigned long)va_arg(args, void *)));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;
	int i = 0;

	len = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format != '%')
			len += ft_putchar(*format);
		else
		{
			format++;
			if (*format != '\0')
				len += check_type(args, *format);
		}
		format++;
		i++;
	}
	va_end(args);
	return (len);
}

int main()
{
	char *baysal = "ajbdkawndadkaw";
	int sara = 1;
    ft_printf("\nreturn: %d \n",ft_printf("%p", baysal));
}

