#include "globals.h"

/***************************************************************************
                          ccrypto.cpp  -  description
                             -------------------
    begin                : Fri Jul 20 2001
    copyright            : (C) 2001 by stephane (birdy57)
    email                : birdy57@multimania.com
 ***************************************************************************/ 
    
/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/ 
    
#include "ccrypto.h"
    
{



{



/** crypte une ligne */ 
char *CCrypto::encrypt(char *sKey, char *sLine) 
{
    
    
    
    
	
	    
	    
	    
		keyPos = 0;
	
	
	else
	    temp[i] = sLine[i];
    
    
    



/** decrypte une ligne */ 
char *CCrypto::decrypt(char *sKey, char *sLine) 
{
    
    
    
    
	
	    
	    
		temp[i] += 95;
	    
	    
		keyPos = 0;
	
	
	else
	    temp[i] = sLine[i];
    
    
    


