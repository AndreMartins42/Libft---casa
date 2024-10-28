/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmendes <anmendes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:46:58 by anmendes          #+#    #+#             */
/*   Updated: 2024/10/28 18:10:02 by anmendes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar_fd(char c, int fd)
{
    write (fd, &c, 1);
}