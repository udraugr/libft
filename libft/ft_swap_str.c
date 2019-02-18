/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: udraugr- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/05 12:41:17 by udraugr-          #+#    #+#             */
/*   Updated: 2019/02/05 12:43:28 by udraugr-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_swap_str(char **str1, char **str2)
{
	char		*tmp;

	tmp = *str1;
	*str1 = *str2;
	*str2 = tmp;
}
