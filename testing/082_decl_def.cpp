// objective: test for declation and definition order independence: def first
// check: namespace_n.xml
// config: INPUT = $INPUTDIR/082_decl_def.cpp $INPUTDIR/decl_def.h
#include "test.h"

/** Namespace */
namespace N
{

/** Detailed docs. */
int var;

/** Detailed docs. */
void foo(int param)
{
}

}
