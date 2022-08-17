/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jaqueline Ribeiro <marvin@42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 14:52:11 by Jaqueline R       #+#    #+#             */
/*   Updated: 2022/08/16 14:52:11 by Jaqueline R      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Escreva uma função ft_div_mod. Essa função divide os dois parâmetros a e b e armazena o resultado no int apontado por div. Ela também armazena o resto da divisão de a e b no int apontado por mod.

//#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int	main(void)
{
	int	x;
	int	y;
	int	div;
	int	mod;

	x = 45;
	y = 3;
	ft_div_mod(x, y, &div, &mod);
	printf("%d\n", div);
	printf("%d\n", mod);
	return (0);
}
*/