add_executable(SimpleFactory simple_static_factory.cpp)
install(TARGETS SimpleFactory DESTINATION ${EXECUTABLE_OUTPUT_PATH})

add_executable(AbstractFactoryMethod abstract_factory_method.cpp)
install(TARGETS AbstractFactoryMethod DESTINATION ${EXECUTABLE_OUTPUT_PATH})

add_executable(AbstractFactory abstract_factory.cpp)
install(TARGETS AbstractFactory DESTINATION ${EXECUTABLE_OUTPUT_PATH})