/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jaqueline Ribeiro <marvin@42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 16:59:22 by Jaqueline R       #+#    #+#             */
/*   Updated: 2022/08/16 16:59:22 by Jaqueline R      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	aux;

	index = 0;
	while (index < (size / 2))
	{
		aux = tab [index];
		tab[index] = tab [size - index - 1]; 
		tab [size - index - 1] = aux;
		index++;
	}
}

//[size - index - 1] → -1, pois apesar de size ser igual a x queremos acessar a posição x-1, uma vez que o vetor inicia em 0. 

/*
int	main(void)
{
	int	tab[5] = {0, 20, 30, 8, 100};
	int	size;
	int	index;

	size = 5;
	ft_rev_int_tab(tab, size);
	index = 0;
	while (index < size)
	{
		printf ("%d ", tab[index]);
		index++;
	}
	printf("\n");
	return (0);
}
*/