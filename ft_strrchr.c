/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmendes <anmendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 14:38:30 by anmendes          #+#    #+#             */
/*   Updated: 2024/10/30 11:59:29 by anmendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*temp;
	char	temp_c;

	temp_c = (char)c;
	temp = NULL;
	while (*s)
	{
		if (*s == temp_c)
			temp = (char *)s;
		s++;
	}
	if (temp_c == '\0')
		return ((char *)s);
	return (temp);
}
