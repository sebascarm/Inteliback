#include "C_TreeView.h"

void C_TreeView::Create(Win_Frame* pFrame, std::string Text, int x, int y, int ancho, int alto) {
	// Crear y contener
	C_Objeto::Create(pFrame, Text, x, y, ancho, alto);
	C_Objeto::Contener(*this);
	//Detalles del objeto
	Tipo = WC_TREEVIEW;
	// Estilo = BS_PUSHBUTTON | BS_NOTIFY | WS_CHILD | WS_VISIBLE | WS_TABSTOP | BS_FLAT;
	// Estilo = WS_VISIBLE | WS_CHILD | TVS_HASLINES | TVS_HASBUTTONS | TVS_LINESATROOT;
	Estilo = WS_CHILD | WS_VISIBLE | WS_BORDER | WS_SIZEBOX | WS_VSCROLL | WS_TABSTOP | TVS_HASLINES | TVS_LINESATROOT | TVS_HASBUTTONS | TVS_SHOWSELALWAYS;
	// Asegurar que se cargo el control
	INITCOMMONCONTROLSEX CargaControl;
	CargaControl.dwSize = sizeof(INITCOMMONCONTROLSEX);
	CargaControl.dwICC = ICC_LISTVIEW_CLASSES | ICC_TREEVIEW_CLASSES;
	InitCommonControlsEx(&CargaControl);
	// llamar luego de creado
	loadMyComputerToTreeView();
}


//*********************************************
//*** ASIGNACION DE EVENTO					***
//*********************************************


//*********************************************
//*** EVENTO CLICK (El loop debe llamarlo)	***
//*** No se activa solo						***
//*********************************************

void C_TreeView::loadMyComputerToTreeView() {
	HWND g_treeView = hWnd;
	TV_INSERTSTRUCT tvInsert;
	tvInsert.hParent = nullptr;
	tvInsert.hInsertAfter = TVI_ROOT;
	tvInsert.item.mask = TVIF_TEXT | TVIF_IMAGE | TVIF_SELECTEDIMAGE | TVIF_PARAM;
	tvInsert.item.pszText = (LPSTR)"Desktop";
	tvInsert.item.lParam = (LPARAM)("Desktop");
	//tvInsert.item.iImage = IDI_DEKSTOP;
	//tvInsert.item.iSelectedImage = IDI_DEKSTOP;
	HTREEITEM hDesktop = TreeView_InsertItem(g_treeView, &tvInsert);

	tvInsert.hParent = hDesktop;
	tvInsert.hInsertAfter = TVI_LAST;
	//tvInsert.item.iImage = IDI_COMPUTER;
	//tvInsert.item.iSelectedImage = IDI_COMPUTER;
	tvInsert.item.pszText = (LPSTR)("My Computer");
	tvInsert.item.lParam = (LPARAM)("MyComputer");
	HTREEITEM hMyComputer = TreeView_InsertItem(g_treeView, &tvInsert);
}