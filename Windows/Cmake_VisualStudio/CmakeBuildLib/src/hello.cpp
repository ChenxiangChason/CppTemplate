#include <stdio.h>
#include "hello.h"
#include "good.h"

namespace HelloLib
{
	void Functions::hello()
	{
		Good::Functions::good();
		printf("Hello Nimade\n");
	}
}