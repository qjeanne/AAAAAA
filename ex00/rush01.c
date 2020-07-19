/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjohnnie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 18:45:39 by tjohnnie          #+#    #+#             */
/*   Updated: 2020/07/19 20:08:15 by tjohnnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int j;
	int i;

	i = 1;
	j = 1;
	while (i <= y)
	{
		while (j <= x)
		{
			if ((i == 1 && j == 1) || (i == y && j == x && y > 1 && x > 1))
				ft_putchar('/');
			else if ((i == 1 && j == x) || (i == y && j == 1))
				ft_putchar('\\');
			else if ((i == 1 || i == y) || (j == 1 || j == x))
				ft_putchar('*');
			else
				ft_putchar(' ');
			j++;
		}
		j = 1;
		ft_putchar('\n');
		i++;
	}
}
