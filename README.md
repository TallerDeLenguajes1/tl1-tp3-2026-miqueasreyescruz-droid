# Sistema de Gestión y Búsqueda de Nombres en C

Este programa es un ejemplo de cómo gestionar cadenas de caracteres utilizando **memoria dinámica** y punteros en C. Permite al usuario cargar una lista de nombres y realizar búsquedas mediante palabras clave o identificadores numéricos.

## 🚀 Funcionalidades

El programa presenta un menú interactivo con las siguientes opciones:

1.  **Carga Dinámica:** Al inicio, solicita 5 nombres. Utiliza `malloc` para asignar exactamente el espacio necesario en memoria para cada nombre, evitando el desperdicio de bytes.
2.  **Buscar por Clave:** Implementa la función `strstr` para localizar un nombre que contenga una secuencia específica de caracteres.
3.  **Buscar por ID:** Permite acceder a un nombre directamente a través de su posición en el vector (índice 1-5).
4.  **Gestión de Memoria:** Incluye un ciclo de liberación de memoria (`free`) al finalizar el programa para prevenir fugas (memory leaks).

## 🛠️ Conceptos Técnicos Utilizados

* **Punteros y Arreglos:** Uso de un arreglo de punteros `char *V[5]` para manejar múltiples cadenas.
* **Librería `<string.h>`:** * `strlen`: Para calcular el tamaño del buffer.
    * `strcpy`: Para copiar el contenido del buffer al bloque de memoria dinámica.
    * `strstr`: Para la búsqueda de subcadenas dentro de los nombres.
* **Memoria Dinámica:** Uso de `malloc` y `free` para la gestión eficiente del Heap.



## 📋 Requisitos

* Compilador de C (GCC, Clang, MSVC).
* Librerías estándar: `stdio.h`, `stdlib.h`, `string.h`.

## 📖 Ejemplo de Uso

1. El programa solicitará el ingreso de 5 nombres (ej. "Carlos", "Juan", "Maria", "Ana", "Pedro").
2. Se mostrará el menú.
3. Si elige la opción 1 e ingresa la clave "ar", el sistema devolverá "Carlos" (o "Maria"), ya que ambos contienen esa secuencia.
4. Al salir (opción 3), el programa limpia la memoria automáticamente.

---
*Desarrollado como ejercicio de manipulación de cadenas y punteros en C.*
*Archivo README.md redactado por IA (gracias por todo chat gpt, y perdon por tan poco...).*