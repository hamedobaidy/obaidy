/*
 * Channel.h
 *
 *  Created on: Jul 11, 2015
 *      Author: hamed
 */

#ifndef CHANNEL_H_
#define CHANNEL_H_

namespace obaidy {

class Channel {
public:
	Channel();
	virtual ~Channel();

	double compute_normal_depth();
};

} /* namespace obaidy */

#endif /* CHANNEL_H_ */
