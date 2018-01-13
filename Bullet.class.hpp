/* ************************************************************************** */
/*                                                                            */
/*    Bullet.class.hpp       _             _              :::      ::::::::   */
/*    By: mlu               | |           | |           :+:      :+:    :+:   */
/*     ___  __ _  __ _ _ __ | | __ _ _ __ | |_        +:+ +:+         +:+     */
/*    / _ \/ _` |/ _` | '_ \| |/ _` | '_ \| __|     +/+  +:+       +/+        */
/*   |  __/ (_| | (_| | |_) | | (_| | | | | |_    +/+/+/+/+/+   +/+           */
/*    \___|\__, |\__, | .__/|_|\__,_|_| |_|\__|        /+/    /+/             */
/*          __/ | __/ | |                             ///   ////////.fr       */
/*         |___/ |___/|_|                                                     */
/* ************************************************************************** */

#ifndef BULLET_H
# define BULLET_H

#include <iostream>

class	Bullet {

	public:

		Bullet(void);
		Bullet(int x, int y);
		Bullet(Bullet &obj);
		virtual ~Bullet(void);
		Bullet &operator=(Bullet const &r);

		int			getX(void);
		int			getY(void);

		void		moveDown(void);
		void		moveUp(void);

	protected:
		int		_x;
		int		_y;

};

#endif