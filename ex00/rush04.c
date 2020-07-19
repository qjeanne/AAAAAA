/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguadalu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 18:52:56 by mguadalu          #+#    #+#             */
/*   Updated: 2020/07/19 19:52:13 by mguadalu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
			if (i == 1 && j == 1 || i == y && j == x && i > 1 && j > 1)
				ft_putchar('A');
			else if (i == 1 && j == x || i == y && j == 1)
				ft_putchar('C');
			else if (j == 1 || j == x || i == 1 || i == y)
				ft_putchar('B');
			else
				ft_putchar(' ');
			j++;
		}
		j = 1;
		ft_putchar('\n');
		i++;
	}
}
