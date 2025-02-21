--- chrome/browser/ui/webui/app_home/app_home_page_handler.cc.orig	2023-04-05 11:05:06 UTC
+++ chrome/browser/ui/webui/app_home/app_home_page_handler.cc
@@ -353,7 +353,7 @@ app_home::mojom::AppInfoPtr AppHomePageHandler::Create
 
   bool deprecated_app = false;
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || \
-    BUILDFLAG(IS_FUCHSIA)
+    BUILDFLAG(IS_FUCHSIA) || BUILDFLAG(IS_BSD)
   auto* context = extension_system_->extension_service()->GetBrowserContext();
   deprecated_app =
       extensions::IsExtensionUnsupportedDeprecatedApp(context, extension->id());
@@ -419,7 +419,7 @@ void AppHomePageHandler::FillExtensionInfoList(
     bool is_deprecated_app = false;
     auto* context = extension_system_->extension_service()->GetBrowserContext();
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || \
-    BUILDFLAG(IS_FUCHSIA)
+    BUILDFLAG(IS_FUCHSIA) || BUILDFLAG(IS_BSD)
     is_deprecated_app = extensions::IsExtensionUnsupportedDeprecatedApp(
         context, extension->id());
 #endif
