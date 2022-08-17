/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jaqueline Ribeiro <marvin@42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 15:19:30 by Jaqueline R       #+#    #+#             */
/*   Updated: 2022/08/16 15:19:30 by Jaqueline R      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Escreva uma função ft_ultimate_div_mod. Essa função divide os int apontados por a e b. O resultado da divisão está armazenado em no int apontado por a. O resultado do resto está armazenado no int apontado por b.

#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *a / *b;
	*b = aux % *b;
}

/*
int main(void)
{
	int x;
	int y;

	x = 15;
	y = 7;
	ft_ultimate_div_mod(&x, &y);
	printf("%d\n", x);
	printf("%d\n", y);
	return (0);
}
*/