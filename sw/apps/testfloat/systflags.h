
/*
===============================================================================

This C header file is part of TestFloat, Release 2a, a package of programs
for testing the correctness of floating-point arithmetic complying to the
IEC/IEEE Standard for Floating-Point.

Written by John R. Hauser.  More information is available through the Web
page `http://HTTP.CS.Berkeley.EDU/~jhauser/arithmetic/TestFloat.html'.

THIS SOFTWARE IS DISTRIBUTED AS IS, FOR FREE.  Although reasonable effort
has been made to avoid it, THIS SOFTWARE MAY CONTAIN FAULTS THAT WILL AT
TIMES RESULT IN INCORRECT BEHAVIOR.  USE OF THIS SOFTWARE IS RESTRICTED TO
PERSONS AND ORGANIZATIONS WHO CAN AND WILL TAKE FULL RESPONSIBILITY FOR ANY
AND ALL LOSSES, COSTS, OR OTHER PROBLEMS ARISING FROM ITS USE.

Derivative works are acceptable, even for commercial purposes, so long as
(1) they include prominent notice that the work is derivative, and (2) they
include prominent notice akin to these four paragraphs for those parts of
this code that are retained.

Modified for use with or1ksim's testsuite.

Contributor Julius Baxter <julius.baxter@orsoc.se>

===============================================================================
*/

/*
-------------------------------------------------------------------------------
Target-specific function for clearing the system's IEC/IEEE floating-point
exception flags.  The previous value of the flags is returned.
-------------------------------------------------------------------------------
*/
int8 syst_float_flags_clear( void );

// Extern flags value - stored in softfloat's format, not OR1K's fpcsr format
extern int8 fpcsr_flags;
