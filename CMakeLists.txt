cmake_minimum_required(VERSION 3.5)
project(animalparser CXX)

set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake")

#find_package(Iconv REQUIRED)

add_custom_command(
	OUTPUT animal_record.cpp animal_record.h
	PRE_BUILD
    COMMAND kaitai-struct-compiler -t cpp_stl ${PROJECT_SOURCE_DIR}/specs/animal_record_single.ksy
)

set_property(SOURCE main.cpp APPEND PROPERTY OBJECT_DEPENDS animal_record.h)


set(SOURCES
	kaitai/kaitaistream.cpp
	src/main.cpp
	${CMAKE_CURRENT_BINARY_DIR}/animal_record.cpp

)

set(HEADERS
	kaitai/kaitaistream.h
    kaitai/kaitaistruct.h
   	${CMAKE_CURRENT_BINARY_DIR}/animal_record.h
)

add_executable(${PROJECT_NAME} ${HEADERS} ${SOURCES})

target_include_directories(
	${PROJECT_NAME}
	PRIVATE
	${PROJECT_SOURCE_DIR}
	${CMAKE_CURRENT_BINARY_DIR}
)

target_link_libraries(
	${PROJECT_NAME}
	${Iconv_LIBRARIES}
)

target_compile_definitions(
	${PROJECT_NAME}
	PRIVATE
	-DKS_STR_ENCODING_NONE
)
