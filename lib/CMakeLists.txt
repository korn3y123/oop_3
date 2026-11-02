add_library(CoffeeLibrary
        src/CoffeeMachine.cpp
        src/CoffeeMaker.cpp
        src/CapsuleCoffeeMaker.cpp
)

target_include_directories(CoffeeLibrary PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)