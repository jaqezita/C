/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jaqueline Ribeiro <marvin@42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 08:06:37 by Jaqueline R       #+#    #+#             */
/*   Updated: 2022/08/09 08:06:37 by Jaqueline R      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Escreva uma função que mostre, em ordem crescente, todas as diferentes combinações de três números diferentes em ordem crescente - sim, a repetição é proposital.

#include<unistd.h>

void	ft_print_comb(void);

void	ft_print_comb(void)
{
	int	hundreds;
	int	tens;
	int	units;

	hundreds = '0';
	while (hundreds <= '7')
	{
		tens = hundreds + 1;
		while (tens <= '8')
		{
			units = tens + 1;
			while (units <= '9')
			{
				write(1, &hundreds, 1);
				write(1, &tens, 1);
				write(1, &units, 1);
				if (hundreds != '7' || tens != '8' || units != '9')
					write(1, ", ", 2);
				units++;
			}
			tens++;
		}
		hundreds++;
	}
}

/*
int	main(void)
{
	ft_print_comb();
	write(1, "\n", 1);
	return (0);
}
*/