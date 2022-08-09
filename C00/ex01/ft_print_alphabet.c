/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jaqueline Ribeiro <marvin@42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 09:06:15 by Jaqueline R       #+#    #+#             */
/*   Updated: 2022/08/08 09:06:15 by Jaqueline R      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Escreva uma função que mostre o alfabeto em minúsculo em apenas uma linha, em ordem crescente, começando pela letra 'a'. 

#include <unistd.h>

void	ft_print_alphabet(void);

void	ft_print_alphabet(void)
{
	char	c;

	c = 'a';
	while (c <= 'z')
	{
		write (1, &c, 1);
		c++;
	}
}

/*
int main (void)
{
	ft_print_alphabet();
	write (1, "\n", 1);
	return 0; 
}
*/