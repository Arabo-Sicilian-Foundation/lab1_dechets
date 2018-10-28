#include "CreationDechetTraiteNonRecyclable.h"



CreationDechetTraiteNonRecyclable::CreationDechetTraiteNonRecyclable(UsineTraitement* _usineTraitement)
{
	usineTraitement = _usineTraitement;
}


CreationDechetTraiteNonRecyclable::~CreationDechetTraiteNonRecyclable()
{
}

bool CreationDechetTraiteNonRecyclable::effectuerOperation(Dechet* dechet)
{

	creerDechetTraiteCompostable(dechet);
	return true;
}