/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nattia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 18:03:31 by nattia            #+#    #+#             */
/*   Updated: 2022/02/23 18:03:32 by nattia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	main(int ac, char **av)

{
	int	hash[255];
	int	i;
	int	j;

	i = 0;
	while (hash[i])
		hash[i++] = 0;
	if (ac == 3)
	{
		i = 1;
		while (i < ac)
		{
			j = 0;
			while (av[i][j])
			{
				if (hash[(unsigned int)av[i][j]] == 0)
				{
					hash[(unsigned int)av[i][j]] = 1;
					write(1, &av[i][j], 1);
				}
				j++;
			}
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
