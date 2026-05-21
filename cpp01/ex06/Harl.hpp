/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 19:29:27 by xzhen             #+#    #+#             */
/*   Updated: 2026/05/03 20:09:17 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl{
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
    public:
        void complain(int levelnumber);
        int level_to_number(std::string level);
};


#endif