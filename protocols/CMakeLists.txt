# protocols/CMakeLists.txt
cmake_minimum_required(VERSION 3.10)
# project(protocols)

# 设置proto文件目录和生成文件目录
set(PROTO_DIR ${CMAKE_CURRENT_SOURCE_DIR})
set(GENERATED_DIR ${CMAKE_CURRENT_SOURCE_DIR}/generated)  # GENERATED_DIR为proto产物的根目录

# 查找所有proto文件
file(GLOB_RECURSE PROTO_FILES "${PROTO_DIR}/*.proto")
message(STATUS "PROTO_FILES: ${PROTO_FILES}")

# 生成的.h和.cc文件列表
set(GENERATED_SRCS)
set(GENERATED_HDRS)

# 遍历所有proto文件，生成相应的.h和.cc文件
foreach(PROTO_FILE ${PROTO_FILES})
    # 获取proto文件的名称和路径
    get_filename_component(PROTO_NAME ${PROTO_FILE} NAME_WE)
    get_filename_component(PROTO_PATH  ${PROTO_FILE} PATH)

    message(STATUS "PROTO_PATH : ${PROTO_PATH}")

    # 构建输出路径
    file(RELATIVE_PATH REL_PROTO_PATH ${PROTO_DIR} ${PROTO_PATH})  # 这里是先求出PROTO_PATH对于PROTO_DIR的相对路径，存放在REL_PROTO_PATH中
    # 检查REL_PROTO_PATH是否为空，并根据情况拼接路径，得到proto产物的路径OUTPUT_PROTO_PATH
    if(REL_PROTO_PATH STREQUAL "")
        set(OUTPUT_PROTO_PATH "${GENERATED_DIR}")
    else()
        set(OUTPUT_PROTO_PATH "${GENERATED_DIR}/${REL_PROTO_PATH}")
    endif()
    message(STATUS "OUTPUT_PROTO_PATH : ${OUTPUT_PROTO_PATH}")

    # 确保输出目录存在
    file(MAKE_DIRECTORY ${OUTPUT_PROTO_PATH})

    # 定义生成的文件路径变量
    set(GENERATED_CC_FILE "${OUTPUT_PROTO_PATH}/${PROTO_NAME}.pb.cc")
    set(GENERATED_H_FILE "${OUTPUT_PROTO_PATH}/${PROTO_NAME}.pb.h")

    # 添加生成的文件到列表
    list(APPEND GENERATED_SRCS ${GENERATED_CC_FILE})
    list(APPEND GENERATED_HDRS ${GENERATED_H_FILE})

    # 添加自定义命令来生成.h和.cc文件
    add_custom_command(
        OUTPUT ${GENERATED_CC_FILE} ${GENERATED_H_FILE}
        COMMAND protoc
        ARGS --cpp_out=${GENERATED_DIR} -I ${PROTO_DIR} ${PROTO_FILE}  # 这里核心是--cpp_out=${GENERATED_DIR}，而不能设置为${OUTPUT_PROTO_PATH}
        DEPENDS ${PROTO_FILE}
        COMMENT ">>> Running protoc on ${PROTO_FILE}"
        VERBATIM
    )
endforeach()

# 将生成的文件添加到一个目标中
add_custom_target(generate_protos ALL
    COMMAND echo "Detected that the product has been updated"
    DEPENDS ${GENERATED_SRCS} ${GENERATED_HDRS}
)

# 产物编译得到protocols库
add_library(protocols ${GENERATED_SRCS})
target_include_directories(protocols PUBLIC ${GENERATED_DIR})
target_link_libraries(protocols PUBLIC protobuf)  # 依赖protobuf官方库

message(STATUS "Generated Proto Source Files: ${GENERATED_SRCS}")
message(STATUS "Generated Proto Header Files: ${GENERATED_HDRS}")