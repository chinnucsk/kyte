#include "Monitor.h"

namespace RG {
	Monitor::Monitor() {
		pthread_condattr_init(&_CVA);
		pthread_cond_init(&_CV, &_CVA);
	}
	Monitor::~Monitor() {
		pthread_cond_destroy(&_CV);
		pthread_condattr_destroy(&_CVA);
	}

	void Monitor::Wait(Mutex& m) {
		pthread_cond_wait(&_CV, &m._Mutex);
	}
	void Monitor::Pulse() {
		pthread_cond_signal(&_CV);
	}

}