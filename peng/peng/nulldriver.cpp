#include "globals.h"

/***************************************************************************
                          CNullDriver.cpp  -  description
                             -------------------
    begin                : Sun Apr 29 2001
    copyright            : (C) 2001 by Birdy57 (Stephane)
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
#include <stdlib.h>
    
#include "nulldriver.h"
    
{
    
    
    



{



//  Connection
    bool CNullDriver::Connect() 
{
    



// Deconnection
    bool CNullDriver::Disconnect() 
{
    
    



// Lecture de nSize octet(s)
int CNullDriver::Read(char *pData, int nSize) 
{
    
}


// Ecriture de nSize octet(s),
// la fonction retourne le nombre d'octet reelement ecrit ou ERROR
int CNullDriver::Write(char *pData, int nSize) 
{
    



// Lecture du nr de l'erreur
int CNullDriver::GetErrorNbr() 
{
    



// on est connect� ?
    bool CNullDriver::IsConnected() 
{
    



/** Permet de tester la disponibilite du driver */ 
    bool CNullDriver::IsAvailable() 
{
    



{
    



/** Fournit la classe error */ 
void CNullDriver::SetMessage(CMsgError * Msgerror) 
{
    



/** Donne la vitesse de connection */ 
int CNullDriver::GetSpeed() 
{
    



/** efface tous les tampon */ 
void CNullDriver::Flush() 
{



/** recherche auto */ 
    bool CNullDriver::FindAuto()
{
    


