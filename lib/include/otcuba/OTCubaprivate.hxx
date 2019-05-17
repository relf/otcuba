
#ifndef OTCUBA_PRIVATE_HXX
#define OTCUBA_PRIVATE_HXX

/* From http://gcc.gnu.org/wiki/Visibility */
/* Generic helper definitions for shared library support */
#if defined _WIN32 || defined __CYGWIN__
#define OTCUBA_HELPER_DLL_IMPORT __declspec(dllimport)
#define OTCUBA_HELPER_DLL_EXPORT __declspec(dllexport)
#define OTCUBA_HELPER_DLL_LOCAL
#else
#if __GNUC__ >= 4
#define OTCUBA_HELPER_DLL_IMPORT __attribute__ ((visibility ("default")))
#define OTCUBA_HELPER_DLL_EXPORT __attribute__ ((visibility ("default")))
#define OTCUBA_HELPER_DLL_LOCAL  __attribute__ ((visibility ("hidden")))
#else
#define OTCUBA_HELPER_DLL_IMPORT
#define OTCUBA_HELPER_DLL_EXPORT
#define OTCUBA_HELPER_DLL_LOCAL
#endif
#endif

/* Now we use the generic helper definitions above to define OTCUBA_API and OTCUBA_LOCAL.
 * OTCUBA_API is used for the public API symbols. It either DLL imports or DLL exports (or does nothing for static build)
 * OTCUBA_LOCAL is used for non-api symbols. */

#ifndef OTCUBA_STATIC /* defined if OT is compiled as a DLL */
#ifdef OTCUBA_DLL_EXPORTS /* defined if we are building the OT DLL (instead of using it) */
#define OTCUBA_API OTCUBA_HELPER_DLL_EXPORT
#else
#define OTCUBA_API OTCUBA_HELPER_DLL_IMPORT
#endif /* OTCUBA_DLL_EXPORTS */
#define OTCUBA_LOCAL OTCUBA_HELPER_DLL_LOCAL
#else /* OTCUBA_STATIC is defined: this means OT is a static lib. */
#define OTCUBA_API
#define OTCUBA_LOCAL
#endif /* !OTCUBA_STATIC */


#endif // OTCUBA_PRIVATE_HXX

