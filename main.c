/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 11:34:51 by mreis-me          #+#    #+#             */
/*   Updated: 2022/08/17 22:30:13 by mreis-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char *argv[])
{
    if (argc < 2)
        return (0);

    /* Verificar se o input está correto (se são números) */
    
    handler_args(argc, argv);
    return (0);
}
