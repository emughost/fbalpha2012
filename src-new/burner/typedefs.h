#if defined(__LIBSNES__) || defined(SN_TARGET_PS3) || defined(__CELLOS_LV2__)
//stupid typedefs for types
#define TCHAR char

//typedefs for Win32 functions
#define bprintf(...) {}
#define _strnicmp(s1, s2, n) strncasecmp(s1, s2, (n))
#define _stricmp(x, y) strcasecmp(x,y)
#define _T(x) x
#define _tcstol strtol
#define _tfopen fopen
#define _fgetts fgets
#define _tcslen strlen
#define _stprintf sprintf
#define _istspace(x) isspace(x)
#define _tcsncmp strncmp
#define _tcsncpy strncpy
#define _stscanf sscanf
#define _ftprintf fprintf
//define lstrlen			what does lstrlen correspond to?

#undef __fastcall
#undef _fastcall
#define __fastcall			//what does this correspond to?
#define _fastcall			//same as above - what does this correspond to?
#endif

// for Windows / Xbox 360 (below VS2010) - typedefs for missing stdint.h types such as uintptr_t?

//FBA defines
#define PUF_TEXT_NO_TRANSLATE	(0)
#define PUF_TYPE_ERROR		(1)
