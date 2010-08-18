#ifndef __INCLUDE_GUARD_POWER_CONSUMER_
#define __INCLUDE_GUARD_POWER_CONSUMER_

#include <vector>
#include <algorithm>

using namespace std;


class power_consumer;

class power_consumer {

public:
	uint64_t	accumulated_runtime;
	int	 	disk_hits;
	int		wake_ups;
	class power_consumer *waker;

	virtual double Witts(void) { return 0.0;};
	virtual const char * description(void) { return ""; };
};

extern vector <class power_consumer *> all_power;


#endif