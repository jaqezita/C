/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jaqueline Ribeiro <marvin@42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 08:00:39 by Jaqueline R       #+#    #+#             */
/*   Updated: 2022/08/18 08:00:39 by Jaqueline R      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Escreva uma função que ordene uma matriz de inteiros em ordem crescente. 

//#include<stdio.h>

void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int	index;
	int	position;
	int	aux;
	
	/*bubble sort*/
	position = 0;
	while (position < size - 1)  //percorre as posições
	{ 
		index = 0;
		while (index < size - 1) //compara as posições 
		{
			if(tab[index] > tab[index + 1])	//realiza as trocas necessárias
			{
				aux = tab[index];
				tab[index] = tab[index + 1];
				tab[index + 1] = aux;
			}
		index++;
		}
	position++;
	}
}


/*
int	main(void)
{
	int	tab[6] = {80, 20, 100, 0, 5, 0};
	int	size;
	int	index;

	size = 6;
	ft_sort_int_tab(tab, size);
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

/*
int main()
{
    int vetor[9] = {5, 4, 3, 9, 11, 99, 75, 1, 0};

    for(int i = 0; i < 9; i++)
        printf("%d ", vetor[i]);

	 ft_sort_int_tab(&vetor[0], 9);

    printf("\n\n");
    for(int i = 0; i < 9; i++)
        printf("%d ", vetor[i]);

	 printf("\n\n");
}
*/
