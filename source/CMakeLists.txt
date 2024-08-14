# Указываем минимально необходимую версию CMake для проекта
cmake_minimum_required(VERSION 3.5)

# Определяем проект с его именем, версией и описанием
project(
    HelloApp 
    VERSION 1.0.0
    DESCRIPTION "Это приложение выводит 'Hello world'"
    LANGUAGES CXX  # Указываем, что проект написан на C++
)

# Создаем статическую библиотеку с именем 'operations' из файла 'src/oper.cpp'
add_library(operations STATIC oper/src/oper.cpp)

# Указываем директорию для заголовочных файлов библиотеки 'operations'
target_include_directories(operations PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

# Устанавливаем стандарт C++20 для библиотеки 'operations'
target_compile_features(operations PUBLIC cxx_std_20)

# Создаем исполняемый файл с именем 'HelloBinary', используя указанные исходные файлы
add_executable(
    HelloBinary main.cpp  # Основной файл программы
    src/dog.cpp              # Другой файл исходного кода
)

# Переменная для хранения всех файлов .cpp в директории src (закомментировано)
# file(GLOB SOURCES
#     "src/*.cpp"  # Находим все файлы с расширением .cpp в директории src
# )
# add_executable(
#     HelloBinary main.cpp  # Основной файл программы
#     ${SOURCES}            # Добавляем все найденные файлы .cpp
# )

# Устанавливаем стандарт C++20 для исполняемого файла 'HelloBinary'
target_compile_features(HelloBinary PUBLIC cxx_std_20)

# Указываем директорию для заголовочных файлов, которые будут использоваться в проекте
target_include_directories(HelloBinary PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

# Связываем исполняемый файл 'HelloBinary' с библиотекой 'operations'
target_link_libraries(HelloBinary PUBLIC operations)

# Схема работы конфигурационного файла:
# 1. Устанавливаем минимальную версию CMake, необходимую для работы проекта.
# 2. Определяем проект с его именем, версией и языком программирования.
# 3. Создаем статическую библиотеку 'operations', которая будет содержать функции из файла 'src/oper.cpp'.
# 4. Указываем директорию для заголовочных файлов, чтобы другие файлы могли их использовать.
# 5. Устанавливаем стандарт C++20 для библиотеки 'operations'.
# 6. Создаем исполняемый файл 'HelloBinary', который будет использовать 'main.cpp' и 'src/dog.cpp'.
# 7. Закомментированный код позволяет автоматически находить все файлы .cpp в директории 'src' и добавлять их в исполняемый файл.
# 8. Устанавливаем стандарт C++20 для исполняемого файла 'HelloBinary'.
# 9. Указываем директорию для заголовочных файлов, которые будут использоваться в проекте.
# 10. Связываем исполняемый файл 'HelloBinary' с библиотекой 'operations', чтобы использовать её функции.