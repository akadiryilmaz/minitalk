/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayilmaz <42istanbul.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 16:09:36 by ayilmaz           #+#    #+#             */
/*   Updated: 2022/06/13 16:09:39 by ayilmaz          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <signal.h>
# include <unistd.h>
# include <stdlib.h>

char	*ft_strchr(const char *s, int c);
void	ft_itoa(int pid);
int		ft_atoi(char *str);
size_t	ft_strlen(char *str);
void	chartobit(int c, int pid);
void	zerone(int signal);
void	bitochar(int d);

#endif
