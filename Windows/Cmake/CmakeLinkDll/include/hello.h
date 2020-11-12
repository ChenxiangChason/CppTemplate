#ifndef _HELLO_H_
#define _HELLO_H_

#ifdef HELLOLIB_EXPORTS
#define HELLOLIB_API __declspec(dllexport)
#else
#define HELLOLIB_API __declspec(dllimport)
#endif // HELLOLIB_EXPORTS

namespace HelloLib
{
	class Functions
	{
	public:
		static HELLOLIB_API void hello();
	};
	
}
#endif