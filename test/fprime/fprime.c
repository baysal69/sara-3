/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 16:53:47 by sel-khao          #+#    #+#             */
/*   Updated: 2025/02/27 17:02:37 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void fprime(int n)
{
	int index = 2;
	
	if (n == 1)
		printf("1");
	if (n < 1)
		return ;
	while (index <= n)
	{
		if (n % index == 0)
		{
			printf("%i", index);
			n /= index;
			index = 1;
			if (n == 1)
				return ;
			else
				printf ("*");
		}
		index++;
	}
	return ;
}

int main(int argc, char **argv)
{
	if (argc == 2)
		fprime(atoi(argv[1]));
	printf("\n");
	return (0);
}