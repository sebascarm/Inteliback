//******************************************************************************************************************//
// CONFIGURACION APLICADA																							//
//******************************************************************************************************************//
// All Configuration // All Platform (La base es un Empty Proyect)													//
//																													//
// General	>	Dir Salida		> $(SolutionDir)Bin\																//
//			>	Dir Intermed	> $(SolutionDir)Tmp\																//
//			>	Nomb Destino	> $(ProjectName)		- (Release / 64 Bits)										//
//			>	Nomb Destino	> $(ProjectName)_d		- (Debug   / 64 Bits)										//
//			>	Nomb Destino	> $(ProjectName)_32		- (Release / 32 Bits)										//
//			>	Nomb Destino	> $(ProjectName)_32d	- (Debug   / 32 Bits)										//
//																													//
// Advanced >	Juego de caract	> Multibyte																			//
// C/C++	>	General			> Multi-Proc Compilation	> YES													//
//				Optimization	> Favor Size or Speed		> FAVOR FAST CODE										//
//				Preprocessor	> Prepr Definitions			> NDEBUG;  %(PreprocessorDefinitions) - (Rel 64)		//
//				Preprocessor	> Prepr Definitions			> _NDEBUG; %(PreprocessorDefinitions) - (Deb 64)		//
//				Preprocessor	> Prepr Definitions			> WIN32; NDEBUG;  %(PreprocessorDefinitions) - (Rel 64) //
//				Preprocessor	> Prepr Definitions			> WIN32; _NDEBUG; %(PreprocessorDefinitions) - (Deb 64) //
//				Code Generation > Runtime Library			> Multi - threaded(/ MT)  - Estatico(Solo en Release)	//
//								> Runtime Library			> DLL Multi - threaded(/ MTd) - Dinamico(Debug)	******	//
//								> Floating Point Model		> FAST													//
//				Languaje		> C++ Lang Standard			> LAST COMPILER											//
// Linker	>	System			> SubSystem					> Windows												//
//																													//
// Pendiente:																										//	
// C/C++																											//	
//				Code Generation > Runtime Library			> Multiproceso( /MT )  - (En Release)					//
// 				Code Generation > Runtime Library			> DLL de depuracion multiproceso( /MDd )  - (En Debug)	//
// Linker	>	General			> Directorio de Bib Adic	> $(SolutionDir)Bin\									//
//******************************************************************************************************************//
// Plantilla con la configuración minima necesaria recomendada por chilli, se incuyen los directores de salida,		//
// especial para crear proyectos C++																				//
// Ubicacion: C:\Users\sebas\Documents\Visual Studio 2019\My Exported Templates\Plantilla_WinApi_exe_v2.0.zip		//
//******************************************************************************************************************//
//######################################################//
// PLANTILLA V 2.0										//
//######################################################//
// ULTIMA MODIFICACION DOCUMENTADA                      //
// 03/06/2021                                           //
// Re-Creacion                                          //
//######################################################//

#include <Windows.h>	//Obligatorio para DLL

#include "Frame.h"
#include "Eventos.h"


#ifdef _DEBUG
#pragma comment (lib, "WinApi_d.lib")
#else
#pragma comment (lib, "WinApi.lib")
#endif

int CALLBACK WINAPI WinMain(
	_In_ HINSTANCE hInstance,
	_In_opt_ HINSTANCE hPrevInstance,
	_In_ LPSTR lpszCmdParam,
	_In_ int nCmdShow)
{
	CrearObjetos(hInstance);
	WinApi->Draw();

	Configurar_objetos();
	Eventos();

	WinApi->Loop();

}

