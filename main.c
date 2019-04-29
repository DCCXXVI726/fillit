/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfalmer- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/26 20:34:48 by bfalmer-          #+#    #+#             */
/*   Updated: 2019/04/29 14:29:12 by thorker          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int ac, char **av)
{
	char	*result;

	if (ac != 2)
	{
		write(1, "usage: ./fillit file_name\n", 26);
		exit(0);
	}
	result = ft_rdch(av[1]);
	if (!result)
	{
		write(1, "error\n", 6);
		return (0);
	}
	brute_field(result);
	free(result);
	return (0);
}
