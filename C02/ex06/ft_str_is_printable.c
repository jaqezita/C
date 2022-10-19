/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jaqueline Ribeiro <marvin@42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 09:13:34 by Jaqueline R       #+#    #+#             */
/*   Updated: 2022/08/20 09:13:34 by Jaqueline R      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] < 31)
			return (0);
		str++;
	}
	return (1);
}

/*
int	main(void)
{

	printf ("%d\n", ft_str_is_printable("str"));		//1

	printf ("%d\n", ft_str_is_printable(""));			//1

	printf ("%d\n", ft_str_is_printable("ADSS"));		//1

	printf ("%d\n", ft_str_is_printable("TSusA"));		//1

	printf ("%d\n", ft_str_is_printable("s1tr"));		//1	

	printf ("%d\n", ft_str_is_printable("str1"));		//1

	printf ("%d\n", ft_str_is_printable("1str"));		//1

	printf ("%d\n", ft_str_is_printable("24511"));		//1

	printf ("%d\n", ft_str_is_printable(" "));			//1

	printf ("%d\n", ft_str_is_printable("!@da14"));		//1

	printf ("%d\n", ft_str_is_printable("\n"));			//0

	printf ("%d\n", ft_str_is_printable("\b"));			//0
	return (0);
}
*/