/****************************************************************************
 * Copyright (C) 2012 FIX94
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 ****************************************************************************/
#ifndef _GCDISC_HPP_
#define _GCDISC_HPP_

#include <gccore.h>
#include "banner/AnimatedBanner.h"
#include "banner/BannerWindow.hpp"

enum
{
	TYPE_ISO = 0,
	TYPE_FST,
};

class GC_Disc
{
public:
	void init(char *path);
	void clear();
	u8 *GetGameCubeBanner();
private:
	void Read_FST(FILE *f, u32 FST_size);
	char GamePath[1024];
	u8 GameType;
	u8 *FSTable;
	u32 FSTEnt;
	char *FSTNameOff;
	u8 *opening_bnr;
};

#endif