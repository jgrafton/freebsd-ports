--- v8/src/api/api.cc.orig	2023-04-05 11:05:06 UTC
+++ v8/src/api/api.cc
@@ -142,7 +142,7 @@
 #include "src/wasm/wasm-serialization.h"
 #endif  // V8_ENABLE_WEBASSEMBLY
 
-#if V8_OS_LINUX || V8_OS_DARWIN || V8_OS_FREEBSD
+#if V8_OS_LINUX || V8_OS_DARWIN || V8_OS_FREEBSD || V8_OS_OPENBSD
 #include <signal.h>
 
 #if V8_ENABLE_WEBASSEMBLY
@@ -6343,7 +6343,7 @@ bool v8::V8::Initialize(const int build_config) {
   return true;
 }
 
-#if V8_OS_LINUX || V8_OS_DARWIN
+#if V8_OS_LINUX || V8_OS_DARWIN || V8_OS_FREEBSD || V8_OS_OPENBSD
 bool TryHandleWebAssemblyTrapPosix(int sig_code, siginfo_t* info,
                                    void* context) {
 #if V8_ENABLE_WEBASSEMBLY && V8_TRAP_HANDLER_SUPPORTED
