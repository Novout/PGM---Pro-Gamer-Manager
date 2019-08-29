set(APP_NAME PGM)
include_directories("${ULTRALIGHT_INCLUDE_DIR}")
link_directories("${ULTRALIGHT_LIBRARY_DIR}")
link_libraries(UltralightCore AppCore Ultralight WebCore)

set(SOURCES "src/API/PGM_API.h" 
            "src/API/PGM_API.cpp"
            "src/base/JogadorBase.h"
            "src/base/JogadorBase.cpp"
            "src/LOL/LOLJogador.h"
            "src/LOL/LOLJogador.cpp"
            "src/base/TimeBase.h"
            "src/base/TimeBase.cpp"
            "src/LOL/LOLTime.h"
            "src/LOL/LOLTime.cpp"
            "src/engine/EngineBase.h"
            "src/engine/EngineBase.cpp"
            "src/engine/LOLEngine.h"
            "src/engine/LOLEngine.cpp"
            "src/interface/LOLInterface.h"
            "src/interface/LOLInterface.cpp"
            "src/interface/interface_jogador.h"
            "src/interface/interface_jogador.cpp"
            "src/interface/interface_manager.h"
            "src/interface/interface_manager.cpp"
            "src/interface/interface_base.h"
            "src/interface/interface_base.cpp"
            "src/ultralight/ultralight.h"
            "src/ultralight/ultralight.cpp"
            "src/main.cpp")

add_executable(${APP_NAME} WIN32 MACOSX_BUNDLE ${SOURCES})

if (APPLE)
  # Enable High-DPI on macOS through our custom Info.plist template
  set_target_properties(${APP_NAME} PROPERTIES MACOSX_BUNDLE_INFO_PLIST ${CMAKE_CURRENT_SOURCE_DIR}/Info.plist.in) 
endif()

if (MSVC)
  # Tell MSVC to use main instead of WinMain for Windows subsystem executables
  set_target_properties(${APP_NAME} PROPERTIES LINK_FLAGS "/ENTRY:mainCRTStartup")
endif()

# Copy all binaries to target directory
add_custom_command(TARGET ${APP_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_directory "${ULTRALIGHT_BINARY_DIR}" $<TARGET_FILE_DIR:${APP_NAME}>)  

if (NOT APPLE)
    # Copy assets to target directory
    add_custom_command(TARGET ${APP_NAME} POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_directory "${CMAKE_CURRENT_SOURCE_DIR}/assets/" "$<TARGET_FILE_DIR:${APP_NAME}>/assets")
else()
    # Copy assets to target directory
    add_custom_command(TARGET ${APP_NAME} POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_directory "${CMAKE_CURRENT_SOURCE_DIR}/assets/" "$<TARGET_FILE_DIR:${APP_NAME}>/../Resources")
endif ()

# Copy inspector to assets directory
add_custom_command(TARGET ${APP_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_directory "${ULTRALIGHT_INSPECTOR_DIR}" "$<TARGET_FILE_DIR:${APP_NAME}>/assets/inspector")

