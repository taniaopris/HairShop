cmake_minimum_required(VERSION 3.10)

set(PROJECT_SRC_DIR ./src)
set(CMAKE_CXX_COMPILER "/usr/bin/g++")

project(HairShop_project)

add_executable( HairShop_project 
                ${PROJECT_SRC_DIR}/main.cpp
                ${PROJECT_SRC_DIR}/product.cpp
                ${PROJECT_SRC_DIR}/product.h
                ${PROJECT_SRC_DIR}/hairShop.cpp
                ${PROJECT_SRC_DIR}/hairShop.h
                ${PROJECT_SRC_DIR}/electricProduct.cpp
                ${PROJECT_SRC_DIR}/electricProduct.h)
