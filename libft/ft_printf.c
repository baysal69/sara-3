/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 15:36:51 by sel-khao          #+#    #+#             */
/*   Updated: 2024/12/21 15:05:54 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	va_list	args;//stores the list of arguments
	int		len;//tracks n of char printed

	len = 0;
	va_start(args, format);//lst variabl name, last fixed arg bfr ...
	if (!format)
		return (-1);
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
	}
	va_end(args);
	return (len);
}

/* int main()
{
    ft_printf("ciao %s\n", NULL);
    return 0;
}  */