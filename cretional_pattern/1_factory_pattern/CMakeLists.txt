add_executable(SampleFactory SampleFactory.cpp)
install(TARGETS SampleFactory DESTINATION ${EXECUTABLE_OUTPUT_PATH})

add_executable(AbstractFactoryMethod AbstractFactoryMethod.cpp)
install(TARGETS AbstractFactoryMethod DESTINATION ${EXECUTABLE_OUTPUT_PATH})