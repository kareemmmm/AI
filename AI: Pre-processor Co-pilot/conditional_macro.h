#ifndef MAX_MACRO_H
#define MAX_MACRO_H

#ifdef DEBUG
#include <stdio.h>
#define MAX(a, b) \
    (printf("Comparing %d and %d\n", (a), (b)), ((a) > (b) ? (a) : (b)))
#else
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#endif

#endif /* MAX_MACRO_H */
