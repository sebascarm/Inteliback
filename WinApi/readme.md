# WINAPI V 5.1	

    - Frame         v1.1 
    - GroupBox      v1.0 
    - Menu          v1.1
    - MessageBox    v1.0
    - Button        v2.0
    - Label         v2.1 
    - TextBox       v2.3 
    - ListBox       v2.3 
    - MultiLine     v1.3 
    - RichText      v1.0 
    - Shape         v1.6
    - Graphic       v1.0
    - TreeView      v1.1 (funciona)04/06/2021

## ULTIMA MODIFICACION DOCUMENTADA          

## 03/06/2021
    - TreeView  v1.0 (Creado)

## 30/06/2020 
    - Graphic   v1.0 (Creado)

## 16/07/2020 
    - ListBox   v2.3 (Clear List)

## 08/07/2020                                          
    - Frame     v1.1 (Opcion Hide)
    - Graphic   v1.0 (Nuevo)
    - Label     v2.1 (Color de texto)
    - ListBox   v2.2 (Set Row / Opcion Sort)
    - MultiLine v1.3 (Set_Font / Agregar texto sin salto de linea)
    - Shape     v1.6 (Mejoras varias)
    - TextBox   v2.3 (Mejoras varias)
    - C_WinApi  v2.0 (Tecla Tab)

### 13/06/2020    
    - Multiline v1.2 (Agregar texto sin salto de linea)
    - Shape     v1.5 (Cambiar grosor del borde)
    - TextBox   v2.2 (Admite Enter y Cambiar tamaño de texto)
### 10/06/2020    
    - TextBox v2.0 (Evento Text Change + ID)
### 04/06/2020
    - Button v2.0 (Eventos Press y Release + ID)
### 02/06/2020
    - Shape v1.2 (Cambio de color)
### 28/05/2020
    - Shape v1.0 (Final)
### 28/05/2020
    - Shape     v0.6 (Cont)
### 27/05/2020
    - Shape     v0.5 (Creacion)
### 21/03/2020
    - ListBox   v2.1 (Doble Click)
### 18/03/2020
    - RichText  v2.4 (RichText con SetFont)
### 17/03/2020
    - RichText  v2.3 (RichText)
### 15/03/2020
    - MultiLine v1.1 (Correccion al resize)
    - Objeto    v2.1 (habilitar y deshabilitar objetos)
### 08/03/2020
    - ListBox   v2.0 (SetFont)
    - ListBox   v2.0 (Event ChangeCell)
    - Objeto    v2.0 (SetFont)
### 06/02/2020
    - ListBox   v1.0 (ListBox)



## Pasos para crear objeto

    - CREACION
    - DRAW
    - CONFIG / EVENTOS
    - LOOP

### CREACION
      - Instancia de variable
      - Create
    
### Objeto
  - CREATE    
    - Create Padre
      - Puntero a Padre
      - Propiedades de dimension
    - Contener
      - Datos de contenedor
    - Definicion de "Tipo y Estilo

    ---
  - DRAW    
    - Objeto Draw
      - hWnd = CreateWindowEx
        - Asignacion de propiedades
      - Seteo Fuente
        - Envio de Mensaje de asignacion de Fuente  
    
    ---
  - LOOP
    - CallBack
