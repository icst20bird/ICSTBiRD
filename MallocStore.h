#ifndef MALLOCSTORE_H_
#define MALLOCSTORE_H_

#include "definitions.h"

class MallocStore{
	public:
		MallocStore(ADDRINT effectiveAddr);

		ADDRINT addr;
		ADDRINT size;

		bool includesAddress(ADDRINT effectiveAddr);
};

#endif
