#include "globals.h"

/***************************************************************************
                          CAolHeader30.cpp  -  description
                             -------------------
    begin                : Sat May 26 2001
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
    
#include "caolheader30.h"
    
{



{



/** Fournit le header � traiter */ 
void CAolHeader30::SetHeader(char *pHeader) 
{
    



/** Fournit le premier octet (generalement 0x5a) */ 
char *CAolHeader30::GetStartByte() 
{
    



/** Fournit le checksum */ 
unsigned short CAolHeader30::GetCheckSum() 
{
    
// copie la valeur dans la variable Temporaire
	memcpy(&m_nTmpVal, &m_sHeader[1], 2);
    



/** Donne la taille total de la trame */ 
unsigned short CAolHeader30::GetTotalSize() 
{
    
// copie la valeur dans la variable Temporaire
	memcpy(&m_nTmpVal, &m_sHeader[3], 2);
    



/** Donne le numero se sequence */ 
unsigned char CAolHeader30::GetSeq() 
{
    



/** Donne le Ack */ 
unsigned char CAolHeader30::GetAck() 
{
    



/** Donne le type */ 
unsigned char CAolHeader30::GetTyp() 
{
    



/** donne le code : 0x7961 ou 0x7963 */ 
unsigned short CAolHeader30::GetCode() 
{
    
// copie la valeur dans la variable Temporaire
	memcpy(&m_nTmpVal, &m_sHeader[8], 2);
    



/** Donne le numero de sequence inet */ 
unsigned char CAolHeader30::GetInNum() 
{
    



/** Donne la longueur du payload */ 
unsigned short CAolHeader30::GetIpLen() 
{
    
    
    
    
	
	
	
	
	
    
    else
	
    



/** Donne le debut des donnees ip */ 
char *CAolHeader30::GetPayload() 
{
    
    
	
    
    else
	
    
	
    



/** Verifie le checksum et repond true si c correct */ 
    bool CAolHeader30::IsValid() 
{
    
    
	 AOChkSum((unsigned char *) &m_sHeader[3],
		  (GetTotalSize() + 2)) == GetCheckSum())
	
    



/** Assigne le byte de depard */ 
void CAolHeader30::SetStartByte(unsigned char Start) 
{
    



/** Assigne le checksum */ 
void CAolHeader30::SetCheckSum(unsigned short Checksum) 
{
    
    



/** Assigne la taille total du payload */ 
void CAolHeader30::SetTotalSize(unsigned short Size) 
{
    
    



/** Assigne le numero de sequence */ 
void CAolHeader30::SetSeq(unsigned char Seq) 
{
    



/** Assigne le Ack */ 
void CAolHeader30::SetAck(unsigned char Ack) 
{
    



/** Assigne le type */ 
void CAolHeader30::SetTyp(unsigned char Typ) 
{
    



/** assigne le code */ 
void CAolHeader30::SetCode(unsigned short Code) 
{
    
    



/** Assigne le numero de sequence Inet */ 
void CAolHeader30::SetInNum(unsigned char Num) 
{
    



/** assigne la longueur */ 
void CAolHeader30::SetIpLen(unsigned short IpLen) 
{
    
	
	
	
	
    
    else
	



/** Calcul le checksum et le place */ 
void CAolHeader30::CalculateChkSum() 
{
    
		  AOChkSum((unsigned char *) &m_sHeader[3],
			   (GetTotalSize() + 2)));



/** donne le 2 eme playload */ 
char *CAolHeader30::GetNextPayload() 
{
    



/** donne la taille des donees contenue */ 
int CAolHeader30::GetPayloadSize() 
{
    
    
	
    
    else
	
    



/** trame normale */ 
void CAolHeader30::SetNormal() 
{
    



/** trame extra */ 
void CAolHeader30::SetExtra() 
{
    


