#include <jni.h>
#include <string>
extern "C"{
#include "libavcodec/avcodec.h"
#include "libavfilter/avfilter.h"
#include "libavformat/avformat.h"
#include "libavutil/avutil.h"
}
extern "C" JNIEXPORT jstring JNICALL
Java_com_example_androidffmpeg_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(avformat_configuration());
}
extern "C" JNIEXPORT jstring JNICALL
Java_com_example_androidffmpeg_MainActivity_StringForAVcode(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(avcodec_configuration());
}
extern "C" JNIEXPORT jstring JNICALL
Java_com_example_androidffmpeg_MainActivity_StringForAVutil(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(avutil_configuration());
}

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_androidffmpeg_MainActivity_StringForAVformat(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(avformat_configuration());
}
extern "C" JNIEXPORT jstring JNICALL
Java_com_example_androidffmpeg_MainActivity_StringForAVfilter(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(avfilter_configuration());
}