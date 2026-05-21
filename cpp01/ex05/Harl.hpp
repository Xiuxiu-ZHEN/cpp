/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 18:29:28 by xzhen             #+#    #+#             */
/*   Updated: 2026/05/03 18:44:38 by xzhen            ###   ########.fr       */
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
        Harl();
        ~Harl();
        void complain(std::string level);
};

#endif