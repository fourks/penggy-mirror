#include "globals.h"

/***************************************************************************
                          caolcmd30.cpp  -  description
                             -------------------
    begin                : Sun Jun 10 2001
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
    
#include "caolcmd30.h"
    
{



{



/** depard */ 
void CAolCmd30::Main() 
{
    
    
    
    
    
    
    
    
    
    
    
    
	
	
	      || !(m_CKernel->m_cDriverIn->IsConnected()))
	    
	
// gestion de l'IDLE
	    
	    
	    
	    
	    
	
	
	    
	    
	    
	    
	
	    
	    
	    
		 || (nSaveSeq != m_CKernel->m_nNeedSeq))
		
		
		
		
		
	    
	
// Ack recut
	    if (m_CKernel->m_bAckTrame)
	    
	    
	    
	    
	
	
	    
	    
	    
		
	    
	    
	    
	    
	    
	    
		nLon =
		    m_CKernel->HexToSeq(sBuffer,
					(char *) m_CKernel->CData->dat17,
					nSaveSeq, nSaveAck);
		
		
	    
	    
	    
		nLon =
		    m_CKernel->HexToSeq(sBuffer,
					(char *) m_CKernel->CData->dat17,
					nSaveSeq, nSaveAck);
		
		
		    m_CKernel->HexToSeq(sBuffer,
					(char *) m_CKernel->CData->dat19,
					nSaveSeq, nSaveAck);
		
		
	    
		nLoop = 0;
		
		
	    
	
	
}


/** declare l'appelant */ 
void CAolCmd30::SetHost(class Kernel30 * Kernel) 
{
    


