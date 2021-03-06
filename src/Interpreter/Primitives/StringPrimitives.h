#pragma once

#include "Expr.h"
#include "Macros.h"
#include "Object.h"
#include "Ref.h"
#include "FinchString.h"

namespace Finch
{
    // Primitive methods for string objects.
    PRIMITIVE(StringCount);
    PRIMITIVE(StringAt);
    PRIMITIVE(StringFromCount);
    PRIMITIVE(StringIndexOf);
    PRIMITIVE(StringHashCode);
}

