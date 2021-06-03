#pragma once

#include "WinApi.h"

//******************************************************************//
//**** VARIABLES GLOBALES										****//
//******************************************************************//


//******************************************************************//
//**** OBJETOS GLOBALES											****//
//******************************************************************//
Win_Api* WinApi = New_Api();
Win_Frame* Frame1 = New_Frame();
Win_Menu* Menu1 = New_Menu();

// Mensajes Generales
Win_MessageBox* Mensaje = New_MessageBox();
// Objetos			
Win_Button*		Boton_Conectar	= New_Button();
Win_TreeView* Arbol1 = New_TreeView();

//******************************************************************//
//**** CREAR OBJETOS											****//
//******************************************************************//
void CrearObjetos(HINSTANCE hInstance) {
	//Principal
	WinApi->Create(hInstance);
	Frame1->Create(WinApi, "InteliBack v1.0", 0, 50, 800, 600, true);
	Menu1->Create(Frame1, "Menú", { "Menu 1", "-", "Salir" });
	//Grupo1
	Boton_Conectar->Create(Frame1, "Conectar", 10, 10);
	Arbol1->Create(Frame1, "Arbol", 10, 40, 100, 100);
}


