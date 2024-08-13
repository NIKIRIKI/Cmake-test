# Указываем минимально необходимую версию CMake для проекта
cmake_minimum_required(VERSION 3.5)

# Определяем проект с его именем, версией и описанием
project(
    HelloApp 
    VERSION 1.0.0
    DESCRIPTION "Это приложение выводит 'Hello world'"
    LANGUAGES CXX  # Указываем, что проект написан на C++
)

# Создаем исполняемый файл с именем HelloBinary, используя указанные исходные файлы
add_executable(
    HelloBinary main.cpp  # Основной файл программы
    src/dog              # Другой файл исходного кода
    src/oper.cpp         # Дополнительный файл исходного кода
)

# Устанавливаем стандарт C++ для компиляции (в данном случае C++20)
target_compile_features(HelloBinary PRIVATE cxx_std_20)

# Указываем директорию для заголовочных файлов, которые будут использоваться в проекте
target_include_directories(HelloBinary PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)