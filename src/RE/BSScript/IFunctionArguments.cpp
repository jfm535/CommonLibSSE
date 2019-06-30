#include "RE/BSScript/IFunctionArguments.h"

#include "skse64/PapyrusVM.h"  // IFunctionArguments::Output


namespace RE
{
	namespace BSScript
	{
		IFunctionArguments::IFunctionArguments()
		{}


		IFunctionArguments::~IFunctionArguments()
		{}


		bool IFunctionArguments::ResizeArguments(BSScrapArray<BSScriptVariable>& a_dst, UInt32 a_size)
		{
			using func_t = function_type_t<decltype(&IFunctionArguments::ResizeArguments)>;
			func_t* func = EXTRACT_SKSE_MEMBER_FN_ADDR(::IFunctionArguments::Output, Resize, func_t*);
			return func(a_dst, a_size);
		}
	}
}