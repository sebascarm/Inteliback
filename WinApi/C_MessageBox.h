#pragma once
//######################################################//
// MessageBox v1.0										//
//######################################################//
// ULTIMA MODIFICACION DOCUMENTADA                      //
// Sin Fecha											//
// Creacion                                             //
//######################################################//
#include "C_Objeto.h"

// No requiere crear como general
class C_MessageBox :public Win_MessageBox {
public:
	int Create(string Titulo, string Message, M_Message Tipo);
};

