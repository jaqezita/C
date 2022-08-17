/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jaqueline Ribeiro <marvin@42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 13:29:50 by Jaqueline R       #+#    #+#             */
/*   Updated: 2022/08/15 13:29:50 by Jaqueline R      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Escreva uma função que tenha um ponteiro para int em parâmetro e dê ao int o valor 42.

//#include<stdio.h>

void	ft_ft(int *nbr);

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

/*
int	main()
{
	int number;
	ft_ft(&number);

	printf ("%d\n\n", number);
	return (0);
}
*/