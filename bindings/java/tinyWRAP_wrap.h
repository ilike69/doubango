/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 1.3.39
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef SWIG_tinyWRAP_WRAP_H_
#define SWIG_tinyWRAP_WRAP_H_

class SwigDirector_SipCallback : public SipCallback, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_SipCallback(JNIEnv *jenv);
    virtual ~SwigDirector_SipCallback();
    virtual int OnRegistrationChanged(RegistrationEvent const *e);
    virtual int OnSubscriptionChanged(SubscriptionEvent const *e);
public:
    bool swig_overrides(int n) {
      return (n < 2 ? swig_override[n] : false);
    }
protected:
    bool swig_override[2];
};

class SwigDirector_SipDebugCallback : public SipDebugCallback, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_SipDebugCallback(JNIEnv *jenv);
    virtual ~SwigDirector_SipDebugCallback();
    virtual int OnDebugInfo(char const *message);
    virtual int OnDebugWarn(char const *message);
    virtual int OnDebugError(char const *message);
    virtual int OnDebugFatal(char const *message);
public:
    bool swig_overrides(int n) {
      return (n < 4 ? swig_override[n] : false);
    }
protected:
    bool swig_override[4];
};


#endif
