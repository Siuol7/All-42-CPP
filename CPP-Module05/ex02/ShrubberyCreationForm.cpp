/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caonguye <caonguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 00:42:24 by siuol             #+#    #+#             */
/*   Updated: 2025/07/01 19:20:57 by caonguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 0, 145, 137),
                                                                    _target(target)
{LOG_GREEN("ShrubberyCreationForm : Constructor called");}

ShrubberyCreationForm::~ShrubberyCreationForm(){LOG_GREEN("ShrubberyCreationForm : Default destructor called");}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm(other),
                                                                                    _target(other._target)
{LOG_GREEN("ShrubberyCreationForm : Copy constructor called");}

std::string    ShrubberyCreationForm::getTarget(void) const
{return this->_target;}

void    ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
	AForm::execute(executor);
	std::ofstream	outf(this->_target + "_shrubbery");
	if (!outf)
		throw std::runtime_error("SCF : cannot create/open " + this->_target +"_shrubbery file.\n");
	std::string	tree = R"( .              .              ;%     ;;
                   ,           ,                :;%  %;
                    :         ;                   :;%;'     .,
           ,.        %;     %;            ;        %;'    ,;
             ;       ;%;  %%;        ,     %;    ;%;    ,%'
              %;       %;%;      ,  ;       %;  ;%;   ,%;'
               ;%;      %;        ;%;        % ;%;  ,%;'
                `%;.     ;%;     %;'         `;%%;.%;'
                 `:;%.    ;%%. %@;        %; ;@%;%'
                    `:%;.  :;bd%;          %;@%;'
                      `@%:.  :;%.         ;@@%;'
                        `@%.  `;@%.      ;@@%;
                          `@%%. `@%%    ;@@%;
                            ;@%. :@%%  %@@%;
                              %@bd%%%bd%%:;
                                #@%%%%%:;;
                                %@@%%%::;
                                %@@@%(o);  . '
                                %@@@o%;:(.,'
                            `.. %@@@o%::;
                               `)@@@o%::;
                                %@@(o)::;
                               .%@@@@%::;
                               ;%@@@@%::;.
                              ;%@@@@%%:;;;.
                          ...;%@@@@@%%:;;;;,..    Gilo97)";
	outf << tree;
	outf.close();
}

