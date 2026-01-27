LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)
LOCAL_MODULE    := Nino
LOCAL_LDFLAGS := $(LOCAL_PATH)/Dobby/libdobby.a

LOCAL_CFLAGS := -w -s -Wno-error=format-security -fvisibility=hidden -fpermissive -fexceptions
LOCAL_LDFLAGS += -Wl,--gc-sections,--strip-all,-llog
LOCAL_CPPFLAGS += -w -s -Wno-error=format-security -fvisibility=hidden -Werror -std=c++17
LOCAL_CPPFLAGS += -Wno-error=c++11-narrowing -fpermissive -Wall -fexceptions

LOCAL_C_INCLUDES += $(LOCAL_PATH)/imgui
LOCAL_C_INCLUDES += $(LOCAL_PATH)/App
LOCAL_SRC_FILES := $(FILE_LIST:$(LOCAL_PATH)/%=%)

LOCAL_SRC_FILES := \
    main.cpp \
    imgui/imgui.cpp \
    imgui/imgui_draw.cpp \
    imgui/imgui_tables.cpp \
    imgui/imgui_widgets.cpp \
    imgui/imgui_impl_android.cpp \
    imgui/imgui_impl_opengl3.cpp \
    SDK/PUBGM_Basic.cpp \
    SDK/PUBGM_Basic_functions.cpp \
    SDK/PUBGM_CoreUObject_functions.cpp \
    SDK/PUBGM_Engine_functions.cpp \
    SDK/PUBGM_ShadowTrackerExtra_functions.cpp \
    SDK/PUBGM_Client_functions.cpp \ 
    LOCAL_CPPFLAGS  += -mllvm --polly #字符串混淆
LOCAL_LDLIBS := -lm -ldl -lz -llog -landroid -lEGL -lGLESv1_CM -lGLESv2 -lGLESv3

LOCAL_LDLIBS := -llog -landroid -lEGL -lGLESv1_CM -lGLESv2 -lGLESv3
LOCAL_STATIC_LIBRARIES=android_native_app_glue
include $(BUILD_SHARED_LIBRARY)
$(call import-module,android/native_app_glue)