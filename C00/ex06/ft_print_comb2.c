/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jaqueline Ribeiro <marvin@42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 07:04:45 by Jaqueline R       #+#    #+#             */
/*   Updated: 2022/08/11 07:04:45 by Jaqueline R      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<unistd.h>

void	ft_print_comb2(void);

void	ft_print_combination(int first, int second)
{
	char	thousands;
	char	hundreds;
	char	tens;
	char	units;

	thousands = (first / 10) + '0'; 		//( + '0' ) → converte o int em char
	hundreds = (first % 10) + '0';
	tens = (second / 10) + '0';
	units = (second % 10) + '0';
	write (1, &thousands, 1);
	write (1, &hundreds, 1);
	write (1, " ", 1);
	write (1, &tens, 1);
	write (1, &units, 1);
	if (first != 98 || second != 99)
		write (1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	first;
	int	second;

	first = 0;
	while (first <= 98)
	{
		second = first + 1;
		while (second <= 99)
		{
			ft_print_combination(first, second);
			second++;
		}
		first++;
	}
}

/*
int	main(void)
{
	ft_print_comb2();
	write(1, "\n", 1);
	return (0);
}*/
