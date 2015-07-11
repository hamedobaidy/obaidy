/*
 * RectChannel.cpp
 *
 *  Created on: Jul 12, 2015
 *      Author: hamed
 */

#include "RectChannel.h"

namespace obaidy {

RectChannel::RectChannel() {
	// TODO Auto-generated constructor stub
	base = 0.0;
}

RectChannel::~RectChannel() {
	// TODO Auto-generated destructor stub
}

} /* namespace obaidy */

double obaidy::RectChannel::getBase() const {
	return base;
}

void obaidy::RectChannel::setBase(double base) {
	this->base = base;
}
