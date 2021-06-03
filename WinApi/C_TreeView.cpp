#include "C_TreeView.h"

void C_TreeView::Create(Win_Frame* pFrame, std::string Text, int x, int y, int ancho, int alto) {
	// Crear y contener
	C_Objeto::Create(pFrame, Text, x, y, ancho, alto);
	C_Objeto::Contener(*this);
	//Detalles del objeto
	Tipo = "BUTTON";
	//Estilo = BS_PUSHBUTTON | BS_NOTIFY | WS_CHILD | WS_VISIBLE | WS_TABSTOP | BS_FLAT;
	Estilo = WS_VISIBLE | WS_CHILD | TVS_HASLINES | TVS_HASBUTTONS | TVS_LINESATROOT;
		
}


//*********************************************
//*** ASIGNACION DE EVENTO					***
//*********************************************


//*********************************************
//*** EVENTO CLICK (El loop debe llamarlo)	***
//*** No se activa solo						***
//*********************************************

