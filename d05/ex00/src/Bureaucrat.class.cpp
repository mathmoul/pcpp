/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <mmoullec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 19:01:22 by mmoullec          #+#    #+#             */
/*   Updated: 2018/10/08 19:16:19 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.class.hpp"

Bureaucrat::Bureaucrat() : _name("none"), _grade(150) {}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
  if (grade > 150)
    throw Bureaucrat::GradeTooLowException();
  else if (grade < 1)
    throw Bureaucrat::GradeTooHighException();
  else
    this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) : _name(src._name) {
  *this = src;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &cpy) {
  this->_grade = cpy._grade;
  return *this;
}

std::string Bureaucrat::getName() const { return this->_name; }

int Bureaucrat::getGrade() const { return this->_grade; }

void Bureaucrat::downGrade(int const num) {
  if ((this->_grade + num) > 150)
    throw Bureaucrat::GradeTooLowException();
  else
    this->_grade += num;
}

void Bureaucrat::upGrade(int const num) {
  if ((this->_grade - num) < 1)
    throw Bureaucrat::GradeTooHighException();
  else
    this->_grade -= num;
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &src) {
  o << src.getName() << ", bureaucrat grade " << src.getGrade() << "."
    << std::endl;
  return o;
}

Bureaucrat::GradeTooHighException::GradeTooHighException() {}

Bureaucrat::GradeTooHighException::GradeTooHighException(
    GradeTooHighException const &src) {
  *this = src;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {}

Bureaucrat::GradeTooHighException &Bureaucrat::GradeTooHighException::
operator=(GradeTooHighException const &) {
  return *this;
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
  return ("Error : This Bureaucrat cant be upgraded");
}

Bureaucrat::GradeTooLowException::GradeTooLowException() {}

Bureaucrat::GradeTooLowException::GradeTooLowException(
    GradeTooLowException const &src) {
  *this = src;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {}

Bureaucrat::GradeTooLowException &Bureaucrat::GradeTooLowException::
operator=(GradeTooLowException const &) {
  return *this;
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
  return ("Error : This Bureaucrat cant be downgraded");
}