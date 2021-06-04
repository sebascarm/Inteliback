//######################################################//
// TreeView v1.1										//
//######################################################//
// ULTIMA MODIFICACION DOCUMENTADA                      //
// 04/06/2021                                           //
// Creacion												//
//######################################################//

#pragma once
#pragma comment(lib, "ComCtl32.lib") // Cargar libreria requerida
#include "C_Objeto.h"
#include <CommCtrl.h>	// Requerido para TreeView

class C_TreeView :public Win_TreeView, public C_Objeto {
private:
	
protected:
	
	bool	Uso_Dinamico = false;	// Revisar que es?

	
public:
	void Create(Win_Frame* pFrame, std::string Text, int x, int y, int ancho, int alto);
	// Propiedades			
	int		Get_ID() { return C_Objeto::Get_ID(); }
	// Metodos				
	void loadMyComputerToTreeView();
	// Asignar Eventos		
	
	// Evento				
	

};

