/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jaqueline Ribeiro <marvin@42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 15:20:34 by Jaqueline R       #+#    #+#             */
/*   Updated: 2022/08/15 15:20:34 by Jaqueline R      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Escreva uma função que troque o conteúdo de dois inteiros cujos endereços são dados em parâmetros.

#include<stdio.h>

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

/*
int main (void)
{
	int a; 
	int b;

	a = 5;
	b = 1;

	ft_swap(&a, &b);

	printf("%d\n%d\n", a, b);
	return (0);
}
*/