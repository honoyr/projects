/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   closestsquare.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlypai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/25 15:23:09 by mlypai            #+#    #+#             */
/*   Updated: 2017/12/25 15:23:11 by mlypai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		square(int i)
{
	int b;

	if (i == 0)
		err();
	b = 1;
	while (b * b < i)
		b++;
	return (b);
}
