//######################################################//
// WIN API v4.1											//
//######################################################//
// ULTIMA MODIFICACION DOCUMENTADA                      //
// 16/07/2020                                           //
// ListBox (Clear) 
// Frame (Show / Hide)									//
// Label (Set_TextColor)								//
// TextBox (TextID / Set_TextSize / Event Change ID)	//
// MultiLine (Add_Text)									//
// ListBox (Set_Row)									//				
// Shape (BorderSize)									//
// Graphic (New)										//
// Shape 1.0											//
// List Box con doble click								//
// RichText con SetFont									//
// Habilitar y deshabilitar objetos						//
// ListBox v2.0											//
// Creacion                                             //
//######################################################//

#pragma once

#ifdef BUILDING_DLL
#define DLLIMPORT __declspec(dllexport) 
#else
#define DLLIMPORT __declspec(dllimport) 
#endif

#include "Windows.h"
#include <string>
#include "General.h"
#include <vector> // Para los menus

using namespace std;

//GENERAL
class Win_Api {
public:
	virtual void Create(HINSTANCE h_Instancia) = 0;
	virtual void Draw() = 0;
	virtual int  Loop()  = 0;
	virtual void Exit()  = 0;
	// Metodos
	virtual HINSTANCE Get_Instance() = 0;
	virtual string    GetClass()     = 0;
};

//FRAME			
class Win_Frame {
public:
	virtual void Create(Win_Api* MFrame, string Titulo, int x, int y, int ancho, int alto, bool Resize = false) = 0;
	//Metodos (propiedades)
	virtual void  Show()		= 0;
	virtual void  Hide()		= 0;
	virtual HWND& Get_hWnd()	= 0;
	virtual int   Get_Height()	= 0;
	virtual int   Get_Width()	= 0;
	virtual bool  Get_Visible() = 0;
	// Asignacion de eventos
	virtual void Assign_Event_Resize(void(*Function)()) = 0;
};
//BUTTON			
class Win_Button {
public:
	virtual void	Create(Win_Frame* _Frame, string Text, int x, int y, int ancho = 60, int alto = 20) = 0;
	virtual int		Get_ID() = 0;
	virtual string	Get_Text()  = 0;
	virtual int		Get_Pos_X() = 0;
	virtual int		Get_Pos_Y() = 0;
	virtual void	Set_Text(string Text) = 0;
	virtual void	Set_Pos(int x = -1, int y = -1, int ancho = -1, int alto = -1) = 0; //El -1 mantiene el tama�o actual
	virtual void	Set_Enable() = 0;
	virtual void	Set_Disable() = 0;
	// Asignacion de eventos
	virtual void	Assign_Event_Click(void(*Function)()) = 0;	// Se Ejecuta al soltar el boton	
	virtual void	Assign_Event_Press(void(*Function)()) = 0;	// se Ejecuta al presionar el boton	
	virtual void	Assign_Event_Click_ID(void(*Function)(int ID)) = 0; // Con Envio de ID			
	virtual void	Assign_Event_Press_ID(void(*Function)(int ID)) = 0; // Con Envio de ID			
};
// LABEL			
class Win_Label {
public:
	virtual void Create(Win_Frame* _Frame, string Text, int x, int y, int ancho = 60, int alto = 20, W_Align Align = W_Align::A_IZQ) = 0;
	virtual string	Get_Text()  = 0;
	virtual int		Get_Pos_X() = 0;
	virtual int		Get_Pos_Y() = 0;
	virtual void	Set_Text(string Text) = 0;
	virtual void	Set_Text_Size(int Text_Size) = 0;
	virtual void	Set_Pos(int x = -1, int y = -1, int ancho = -1, int alto = -1) = 0;
	virtual void	Set_Enable() = 0;
	virtual void	Set_Disable() = 0;
	virtual void	Set_TextColor(COLORREF Color) = 0;
	virtual void	Set_BackColor(COLORREF Color)= 0;
};
// GROUPBOX			
class Win_GroupBox {
public:
	virtual void Create(Win_Frame* _Frame, string Text, int x, int y, int ancho = 100, int alto = 100) = 0;
	virtual string	Get_Text()  = 0;
	virtual int		Get_Pos_X() = 0;
	virtual int		Get_Pos_Y() = 0;
	virtual void	Set_Text(string Text) = 0;
	virtual void	Set_Pos(int x = -1, int y = -1, int ancho = -1, int alto = -1) = 0;
	virtual void	Set_Enable() = 0;
	virtual void	Set_Disable() = 0;
};
// TEXTBOX			
class Win_TextBox {
public:
	virtual void	Create(Win_Frame* _Frame, string Text, int x, int y, int ancho = 60, int alto = 20) = 0;
	virtual int		Get_ID() = 0;
	virtual string	Get_Text()  = 0;
	virtual void	Set_Text_Size(int Text_Size) = 0;
	virtual int		Get_Pos_X() = 0;
	virtual int		Get_Pos_Y() = 0;
	virtual void	Set_Text(string Text) = 0;
	virtual void	Set_Pos(int x = -1, int y = -1, int ancho = -1, int alto = -1) = 0;
	virtual void	Set_Enable() = 0;
	virtual void	Set_Disable() = 0;
	// Asignacion de eventos
	virtual void	Assign_Event_Text_Change_ID(void(*Function)(int ID)) = 0;
};
// MENU				
class Win_Menu {
public:
	virtual void Create(Win_Frame* _Frame, string Titulo, std::vector <std::string> MenuText) = 0;
	// Asignacion de eventos
	virtual void Assign_Event_Click(void(*Function)(), int Menu_Item) = 0;
};
// MULTILINE		
class Win_MultiLine {
public:
	virtual void	Create(Win_Frame* _Frame, string Text, int x, int y, int ancho = 100, int alto = 100) = 0;
	virtual int		Get_Pos_X() = 0;
	virtual int		Get_Pos_Y() = 0;
	virtual void	Set_Pos(int x = -1, int y = -1, int ancho = -1, int alto = -1) = 0;
	virtual void	Set_Font(string Fuente) = 0;
	virtual void	Set_Enable() = 0;
	virtual void	Set_Disable() = 0;
	virtual void	Add_Text(string Texto) = 0; // Agrega texto sin salto de linea
	virtual void	Add_Line(string Texto) = 0; // Agrega texto con salto de linea
};
// MESSAGE BOX		
class Win_MessageBox {
public:
	virtual int Create(string Titulo, string Message, M_Message Tipo = M_Message::M_OK) = 0;
};
// LIST BOX			
class Win_ListBox {
public:
	virtual void	Create(Win_Frame* _Frame, int x, int y, int ancho = 60, int alto = 20, bool Sort = true) = 0;
	virtual string	Get_Text() = 0;
	virtual int		Get_Pos_X() = 0;
	virtual int		Get_Pos_Y() = 0;
	virtual int		Get_Row()	= 0;		// Columna actual
	virtual int		Get_Rows()  = 0;		// Cantidad de columnas
	virtual void	Set_Font(string Fuente) = 0;
	virtual void	Set_Pos(int x = -1, int y = -1, int ancho = -1, int alto = -1) = 0;
	virtual void	Set_Enable() = 0;
	virtual void	Set_Disable() = 0;
	virtual void	Add_Line(string Texto) = 0;
	virtual void	Set_Row(int Row) = 0;
	virtual void	Clear() = 0;
	// Asignacion de evento				
	virtual void	Assign_Event_ChangeCell(void(*Function)()) = 0;
	virtual void	Assign_Event_DobleClick(void(*Function)()) = 0;
};
// RICH TEXT		
class Win_RichText {
public:
	virtual void Create(Win_Frame* _Frame, string Text, int x, int y, int ancho = 60, int alto = 20) = 0;
	// Propiedades comunes	
	virtual int	Get_Pos_X() = 0;
	virtual int	Get_Pos_Y() = 0;
	// Metodos comunes		
	virtual void Set_Font(string Fuente) = 0;
	virtual void Set_Pos(int x, int y, int ancho, int alto) = 0;
	virtual void Set_Enable() = 0;
	virtual void Set_Disable() = 0;
	// Metodos propios		
	virtual void ChangeColor(COLORREF Color)=0;
	virtual void TextLine(string Text)=0;
	virtual void ColorText(string Text, COLORREF Color) = 0;
	virtual void ColorTextEnd(string Text, COLORREF Color) = 0;
};
// Formas			
class Win_Shape {
public:
	virtual void Create(Win_Frame* _Frame, S_Style Style, int x, int y, int ancho = 60, int alto = 20) = 0;
	// Propiedades comunes	
	virtual string	Get_Text()  = 0;
	virtual int		Get_Pos_X() = 0;
	virtual int		Get_Pos_Y() = 0;
	// Metodos comunes		
	virtual void Set_Text(string Text) = 0;
	virtual void Set_Pos(int x, int y, int ancho, int alto) = 0;
	virtual void Set_Enable() = 0;
	virtual void Set_Disable() = 0;
	// Metodos propios		
	virtual void Set_Color(COLORREF Color) = 0;
	virtual void Set_Border_Size(int Size) = 0;
	virtual void Set_BackColor(COLORREF Color) = 0;
	virtual void Set_FreePoints(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, int x5, int y5) = 0;
};
// Graficos			
class Win_Graphic {
public:
	virtual void Create(Win_Frame* _Frame, string Image_bmp, int x, int y, int ancho = 60, int alto = 20) = 0;
	// Propiedades comunes	
	virtual int		Get_Pos_X() = 0;
	virtual int		Get_Pos_Y() = 0;
	// Metodos comunes		
	virtual void Set_Enable() = 0;
	virtual void Set_Disable() = 0;
};
//TREEVIEW
class Win_TreeView {
public:
	virtual void	Create(Win_Frame* _Frame, string Text, int x, int y, int ancho = 60, int alto = 20) = 0;
	virtual int		Get_ID() = 0;
	// Asignacion de eventos
	
};


extern DLLIMPORT Win_Api* New_Api();
extern DLLIMPORT Win_Frame* New_Frame();
extern DLLIMPORT Win_Button* New_Button();
extern DLLIMPORT Win_Label* New_Label();
extern DLLIMPORT Win_GroupBox* New_GroupBox();
extern DLLIMPORT Win_TextBox* New_TextBox();
extern DLLIMPORT Win_Menu* New_Menu();
extern DLLIMPORT Win_MultiLine* New_MultiLine();
extern DLLIMPORT Win_MessageBox* New_MessageBox();
extern DLLIMPORT Win_ListBox* New_ListBox();
extern DLLIMPORT Win_RichText* New_RichText();
extern DLLIMPORT Win_Shape* New_Shape();
extern DLLIMPORT Win_Graphic* New_Graphic();
extern DLLIMPORT Win_TreeView* New_TreeView();