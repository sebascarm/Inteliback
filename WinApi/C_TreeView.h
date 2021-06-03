//######################################################//
// TreeView v1.0										//
//######################################################//
// ULTIMA MODIFICACION DOCUMENTADA                      //
// 03/06/2021                                           //
// Creacion												//
//######################################################//

#pragma once

#include "C_Objeto.h"
#include <CommCtrl.h>

class C_TreeView :public Win_TreeView, public C_Objeto {
protected:
	bool	Uso_Dinamico = false;	// Revisar que es?
public:
	void Create(Win_Frame* pFrame, std::string Text, int x, int y, int ancho, int alto);
	// Propiedades			
	int		Get_ID() { return C_Objeto::Get_ID(); }
	// Metodos				
	
	// Asignar Eventos		
	
	// Evento				
	

};

