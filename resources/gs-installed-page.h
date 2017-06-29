/* -*- Mode: C; tab-width: 8; indent-tabs-mode: t; c-basic-offset: 8 -*-
 *
 * Copyright (C) 2013 Richard Hughes <richard@hughsie.com>
 *
 * Licensed under the GNU General Public License Version 2
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef __GS_INSTALLED_PAGE_H
#define __GS_INSTALLED_PAGE_H

#include "gs-page.h"

G_BEGIN_DECLS

#define GS_TYPE_INSTALLED_PAGE (gs_installed_page_get_type ())

G_DECLARE_FINAL_TYPE (GsInstalledPage, gs_installed_page, GS, INSTALLED_PAGE, GsPage)

GsInstalledPage	*gs_installed_page_new	(void);

G_END_DECLS

#endif /* __GS_INSTALLED_PAGE_H */

/* vim: set noexpandtab: */
Contact GitHub API Training Shop Blog About
