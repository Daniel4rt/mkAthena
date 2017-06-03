// Copyright (c) Athena Dev Teams - Licensed under GNU GPL
// For more information, see LICENCE in the main folder

#ifndef _MAPINDEX_H_
#define _MAPINDEX_H_

#include "../config/renewal.h"

#define MAX_MAPINDEX 2000

//Some definitions for the mayor city maps.
#define MAP_PRONTERA "chry_fld"
#define MAP_GEFFEN "chry_fld"
#define MAP_MORROC "chry_fld"
#define MAP_ALBERTA "chry_fld"
#define MAP_PAYON "chry_fld"
#define MAP_IZLUDE "chry_fld"
#define MAP_ALDEBARAN "chry_fld"
#define MAP_LUTIE "chry_fld"
#define MAP_COMODO "chry_fld"
#define MAP_YUNO "chry_fld"
#define MAP_AMATSU "chry_fld"
#define MAP_GONRYUN "chry_fld"
#define MAP_UMBALA "chry_fld"
#define MAP_NIFLHEIM "chry_fld"
#define MAP_LOUYANG "chry_fld"
#define MAP_JAWAII "chry_fld"
#define MAP_AYOTHAYA "chry_fld"
#define MAP_EINBROCH "chry_fld"
#define MAP_LIGHTHALZEN "chry_fld"
#define MAP_EINBECH "chry_fld"
#define MAP_HUGEL "chry_fld"
#define MAP_RACHEL "chry_fld"
#define MAP_VEINS "chry_fld"
#define MAP_JAIL "chry_fld"
#ifdef RENEWAL
	#define MAP_NOVICE "chry_fld"
#else
	#define MAP_NOVICE "chry_fld"
#endif
#define MAP_MOSCOVIA "chry_fld"
#define MAP_MIDCAMP "chry_fld"
#define MAP_MANUK "chry_fld"
#define MAP_SPLENDIDE "chry_fld"
#define MAP_BRASILIS "chry_fld"
#define MAP_DICASTES "chry_fld"
#define MAP_MORA "chry_fld"
#define MAP_DEWATA "chry_fld"
#define MAP_MALANGDO "chry_fld"
#define MAP_MALAYA "chry_fld"
#define MAP_ECLAGE "chry_fld"
#define MAP_ECLAGE_IN "chry_fld"

const char* mapindex_getmapname(const char* string, char* output);
const char* mapindex_getmapname_ext(const char* string, char* output);

unsigned short mapindex_name2idx(const char* name, const char *func);
#define mapindex_name2id(mapname) mapindex_name2idx((mapname), __FUNCTION__)

const char* mapindex_idx2name(unsigned short id, const char *func);
#define mapindex_id2name(mapindex) mapindex_idx2name((mapindex), __FUNCTION__)

int mapindex_addmap(int index, const char* name);
int mapindex_removemap(int index);

void mapindex_check_mapdefault(const char *mapname);

void mapindex_init(void);
void mapindex_final(void);

#endif /* _MAPINDEX_H_ */
