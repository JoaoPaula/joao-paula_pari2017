#My CMakeLists.txt
cmake_minimum_required (VERSION 2.8)
project (Aula12-git)
set(PROG myf)


set(SOURCES src/main.c src/myf.c src/callbacks.c) #alternative command for wildcards: file(GLOB SOURCES "src/*.c")
add_executable(${PROG} ${SOURCES})

find_package(OpenCV 2 REQUIRED)  #necessary for next command to work
pkg_check_modules(GTK REQUIRED gtk+-2.0)

include_directories(${OpenCV_INCLUDE_DIRS})
link_directories(${GTK_LIBRARY_DIRS})

target_link_libraries(${PROG} ${GTK_LIBRARIES} )

add_custom_target( cpfiles
                COMMAND cp "${PROJECT_SOURCE_DIR}/src/*.glade" "${PROJECT_BINARY_DIR}"
                COMMAND cp "${PROJECT_SOURCE_DIR}/src/*.png" "${PROJECT_BINARY_DIR}"
                 )

#Add dependencies
add_dependencies(${PROG} cpfiles)
