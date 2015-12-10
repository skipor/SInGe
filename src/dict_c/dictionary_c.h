//
// Created by  Vladimir Skipor on 03/12/15.
//

#ifndef SINGE_DICTIONARY_C_H
#define SINGE_DICTIONARY_C_H

// foo.h
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef void* SInGe;

struct SInGeDict {
    const char * data;
    const size_t length;
};

SInGe SInGeInit(
    size_t maxDict,
    size_t minLen,
    char stopSymbol,
    size_t maxAutomatonSize,
    double automatonCoef,
    size_t minDocsOccursIn
);

void SInGeFree(SInGe gen);

void SInGeAddDocument(SInGe gen, const char* doc, size_t length);

void SInGeAddDocumentViaStopSymbol(SInGe gen, const char* doc, size_t length);

struct SInGeDict SInGeGetDict(SInGe gen);



#ifdef __cplusplus
}
#endif

#endif //SINGE_DICTIONARY_C_H
