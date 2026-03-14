include("/Users/s.liudvichenko/Library/Mobile Documents/com~apple~CloudDocs/Lessons/Pro/L20/build/Qt_6_10_1_for_macOS-Release/.qt/QtDeploySupport.cmake")
include("${CMAKE_CURRENT_LIST_DIR}/L20-plugins.cmake" OPTIONAL)
set(__QT_DEPLOY_I18N_CATALOGS "qtbase")

qt6_deploy_runtime_dependencies(
    EXECUTABLE "L20.app"
)
