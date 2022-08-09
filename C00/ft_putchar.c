/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jaqueline Ribeiro <marvin@42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 09:06:26 by Jaqueline R       #+#    #+#             */
/*   Updated: 2022/08/08 09:06:26 by Jaqueline R      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Escreva uma função que mostre o caractere passado como parâmetro.

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
int main (char c)
{
	ft_putchar(c);
	return 0;
}
*/