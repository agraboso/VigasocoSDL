// Monje.h
//
//	Clase que representa a un monje del juego
//
/////////////////////////////////////////////////////////////////////////////

#ifndef _MONJE_H_
#define _MONJE_H_


#include "PersonajeConIA.h"

namespace Abadia {

class SpriteMonje;								// definido en SpriteMonje.h

class Monje : public PersonajeConIA
{
// campos
protected:
#ifndef __abadIA__
	int datosCara[2];							// direcci�n de los gr�ficos de la cara
#endif
	SpriteMonje *sprMonje;						// sprite del monje

	static DatosFotograma tablaAnimacion[8];	// tabla con los distintos fotogramas de animaci�n

// m�todos
public:
#ifdef __abadIA__
	int datosCara[2];							// direcci�n de los gr�ficos de la cara
#endif
	virtual DatosFotograma *calculaFotograma();

	// inicializaci�n y limpieza
	Monje(SpriteMonje *spr);
	virtual ~Monje();
};


}

#endif	// _MONJE_H_
