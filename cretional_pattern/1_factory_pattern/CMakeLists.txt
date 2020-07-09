add_executable(Singleton 0_singleton.cpp)
install(TARGETS Singleton DESTINATION ${EXECUTABLE_OUTPUT_PATH})

add_executable(SimpleStaticFactory 1_simple_static_factory.cpp)
install(TARGETS SimpleStaticFactory DESTINATION ${EXECUTABLE_OUTPUT_PATH})

add_executable(AbstractFactoryMethod 2_abstract_factory_method.cpp)
install(TARGETS AbstractFactoryMethod DESTINATION ${EXECUTABLE_OUTPUT_PATH})

add_executable(AbstractFactory 3_abstract_factory.cpp)
install(TARGETS AbstractFactory DESTINATION ${EXECUTABLE_OUTPUT_PATH})
