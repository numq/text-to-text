#include <jni.h>
#include <iostream>
#include <shared_mutex>
#include <mutex>
#include <unordered_map>
#include <memory>
#include <vector>
#include "llama.h"
#include "llama-cpp.h"

#ifndef _Included_com_github_numq_ttt_llama_NativeLlamaTextToText
#define _Included_com_github_numq_ttt_llama_NativeLlamaTextToText
#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jlong JNICALL Java_com_github_numq_ttt_llama_NativeLlamaTextToText_initNative
        (JNIEnv *, jclass, jstring);

JNIEXPORT jstring JNICALL Java_com_github_numq_ttt_llama_NativeLlamaTextToText_generateNative
        (JNIEnv *, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_com_github_numq_ttt_llama_NativeLlamaTextToText_freeNative
        (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif
