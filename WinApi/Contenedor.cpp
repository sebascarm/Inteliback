#include "Contenedor.h"
#include "General.h"

#include "C_Frame.h"
#include "C_Button.h"
#include "C_Label.h"
#include "C_GroupBox.h"
#include "C_TextBox.h"
#include "C_Menu.h"
#include "C_MultiLine.h"
#include "C_ListBox.h"
#include "C_RichText.h"
#include "C_Shape.h"
#include "C_Graphic.h"
#include "C_TreeView.h"

int Contenedor::Elementos = 100;

void Contenedor::Agregar() {
	++Elementos;
	Element_ID = Elementos;
}

//CREACION DE ELEMENTOS										
void Contenedor::New_Object(C_Frame& _Objeto) {
	Agregar();
	pFrame = &_Objeto;
	this->Tipo = TipoObjeto::T_FRAME;
}
void Contenedor::New_Object(C_Button& _Objeto) {
	Agregar();
	pButton = &_Objeto;
	this->Tipo = TipoObjeto::T_BUTTON;
}
void Contenedor::New_Object(C_Label& _Objeto) {
	Agregar();
	pLabel = &_Objeto;
	this->Tipo = TipoObjeto::T_LABEL;
}
void Contenedor::New_Object(C_GroupBox& _Objeto) {
	Agregar();
	pGroupBox = &_Objeto;
	this->Tipo = TipoObjeto::T_GROUPBOX;
}
void Contenedor::New_Object(C_TextBox& _Objeto) {
	Agregar();
	pTextBox = &_Objeto;
	this->Tipo = TipoObjeto::T_TEXTBOX;
}
void Contenedor::New_Object(C_Menu& _Objeto) {
	Agregar();
	pMenu = &_Objeto;
	this->Tipo = TipoObjeto::T_MENU;
}
void Contenedor::New_Object(C_MultiLine& _Objeto) {
	Agregar();
	pMultiLine = &_Objeto;
	this->Tipo = TipoObjeto::T_MULTILINE;
}
void Contenedor::New_Object(C_ListBox& _Objeto) {
	Agregar();
	pListBox = &_Objeto;
	this->Tipo = TipoObjeto::T_LISTBOX;
}
void Contenedor::New_Object(C_RichText& _Objeto) {
	Agregar();
	pRichText = &_Objeto;
	this->Tipo = TipoObjeto::T_RICHTEXT;
}
void Contenedor::New_Object(C_Shape& _Objeto) {
	Agregar();
	pShape = &_Objeto;
	this->Tipo = TipoObjeto::T_SHAPE;
}
void Contenedor::New_Object(C_Graphic& _Objeto) {
	Agregar();
	pGraphic = &_Objeto;
	this->Tipo = TipoObjeto::T_GRAPHIC;
}
void Contenedor::New_Object(C_TreeView& _Objeto) {
	Agregar();
	pTreeView = &_Objeto;
	this->Tipo = TipoObjeto::T_TREEVIEW;
}


//Show Frame													
void Contenedor::Show() {
	switch (Tipo) {
	case  TipoObjeto::T_FRAME:
		pFrame->Show(); break;
	}
}

// GET hWnd (todos			)									
HWND Contenedor::Get_hWnd() {
	switch (Tipo) {
	case TipoObjeto::T_FRAME: return pFrame->hWnd; break;
	case TipoObjeto::T_BUTTON: return pButton->hWnd; break;
	case TipoObjeto::T_MULTILINE: return pMultiLine->hWnd; break;
	case TipoObjeto::T_TEXTBOX: return pTextBox->hWnd; break;
	case TipoObjeto::T_MENU: return pMenu->hWnd; break;
	case TipoObjeto::T_LABEL: return pLabel->hWnd; break;
	case TipoObjeto::T_GROUPBOX: return pGroupBox->hWnd; break;
	case TipoObjeto::T_LISTBOX: return pListBox->hWnd; break;
	case TipoObjeto::T_RICHTEXT: return pRichText->hWnd; break;
	case TipoObjeto::T_SHAPE: return pShape->hWnd; break;
	case TipoObjeto::T_GRAPHIC: return pGraphic->hWnd; break;
	case TipoObjeto::T_TREEVIEW: return pTreeView->hWnd; break;
	default:
		return 0;
	}
}

//Cambiar color (para label tranparente)						
HBRUSH Contenedor::ColorEdit(WPARAM wParam) {
	switch (Tipo) {
	case TipoObjeto::T_LABEL:
		return pLabel->ColorEdit(wParam);
		break;
	default:
		return (HBRUSH)wParam;
	}
}

//Dibujar														
void Contenedor::Draw() {
	switch (Tipo) {
	case TipoObjeto::T_FRAME: pFrame->Draw(); break;
	case TipoObjeto::T_BUTTON: pButton->Draw();	break;
	case TipoObjeto::T_LABEL: pLabel->Draw(); break;
	case TipoObjeto::T_GROUPBOX: pGroupBox->Draw();	break;
	case TipoObjeto::T_TEXTBOX:	pTextBox->Draw(); break;
	case TipoObjeto::T_MENU: pMenu->Draw();	break;
	case TipoObjeto::T_MULTILINE: pMultiLine->Draw(); break;
	case TipoObjeto::T_LISTBOX:	pListBox->Draw(); break;
	case TipoObjeto::T_RICHTEXT: pRichText->Draw();	break;
	case TipoObjeto::T_SHAPE: pShape->Draw(); break;
	case TipoObjeto::T_GRAPHIC: pGraphic->Draw(); break;
	case TipoObjeto::T_TREEVIEW: pTreeView->Draw(); break;
	}
}

int Contenedor::Get_ID() {
	switch (Tipo) {
	case TipoObjeto::T_BUTTON: return pButton->Get_ID(); break;
	case TipoObjeto::T_LABEL: return pLabel->Get_ID(); break;
	case TipoObjeto::T_GROUPBOX: pGroupBox->Get_ID();	break;
	case TipoObjeto::T_TEXTBOX:	pTextBox->Get_ID(); break;
	case TipoObjeto::T_MENU: return pMenu->Get_ID(); break;
	case TipoObjeto::T_MULTILINE: pMultiLine->Get_ID(); break;
	case TipoObjeto::T_LISTBOX:	return pListBox->Get_ID(); break;
	case TipoObjeto::T_RICHTEXT: pRichText->Get_ID(); break;
	case TipoObjeto::T_SHAPE: pShape->Get_ID(); break;
	case TipoObjeto::T_GRAPHIC: pGraphic->Get_ID(); break;
	case TipoObjeto::T_TREEVIEW: pTreeView->Get_ID(); break;
	default:
		return 0;
	}
}