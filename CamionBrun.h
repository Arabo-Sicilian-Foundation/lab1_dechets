#ifndef CAMIONBRUN_H
#define CAMIONBRUN_H

#include "Camion.h"
#include "DechetTraiteCompostable.h"

class CamionBrun :
	public Camion
{
public:
	CamionBrun();
	~CamionBrun();
	bool ajouterDechetTraite(DechetTraiteCompostable* _dechetTraite);
};

#endif