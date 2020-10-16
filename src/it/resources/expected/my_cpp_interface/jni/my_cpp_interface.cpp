// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from my_cpp_interface.djinni

#include "my_cpp_interface.hpp"  // my header
#include "Marshal.hpp"

namespace djinni_generated {

MyCppInterface::MyCppInterface() : ::djinni::JniInterface<::MyCppInterface, MyCppInterface>("djinni/it/MyCppInterface$CppProxy") {}

MyCppInterface::~MyCppInterface() = default;


CJNIEXPORT void JNICALL Java_djinni_it_MyCppInterface_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::MyCppInterface>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_djinni_it_MyCppInterface_00024CppProxy_native_1methodReturningNothing(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jint j_value)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::MyCppInterface>(nativeRef);
        ref->method_returning_nothing(::djinni::I32::toCpp(jniEnv, j_value));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jint JNICALL Java_djinni_it_MyCppInterface_00024CppProxy_native_1methodReturningSomeType(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jstring j_key)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::MyCppInterface>(nativeRef);
        auto r = ref->method_returning_some_type(::djinni::String::toCpp(jniEnv, j_key));
        return ::djinni::release(::djinni::I32::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jint JNICALL Java_djinni_it_MyCppInterface_00024CppProxy_getVersion(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::MyCppInterface::get_version();
        return ::djinni::release(::djinni::I32::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

}  // namespace djinni_generated
