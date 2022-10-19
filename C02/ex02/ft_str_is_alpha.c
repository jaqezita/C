/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Jaqueline Ribeiro <marvin@42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 08:23:41 by Jaqueline R       #+#    #+#             */
/*   Updated: 2022/08/19 08:23:41 by Jaqueline R      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
			return (0);
		str++;
	}
	return (1);
}

/*
int	main(void)
{

	printf ("%d\n", ft_str_is_alpha("str"));	//1

	printf ("%d\n", ft_str_is_alpha(""));		//1

	printf ("%d\n", ft_str_is_alpha("ADSS"));	//1

	printf ("%d\n", ft_str_is_alpha("TSusA"));	//1

	printf ("%d\n", ft_str_is_alpha("s1tr"));	//0	

	printf ("%d\n", ft_str_is_alpha("str1"));	//0

	printf ("%d\n", ft_str_is_alpha("1str"));	//0

	printf ("%d\n", ft_str_is_alpha("24511"));	//0

	printf ("%d\n", ft_str_is_alpha(" "));		//0

	printf ("%d\n", ft_str_is_alpha("!@da14"));	//0
	return (0);
}
*/