set(TARGETNAME SampleFactory)

set(SRCS
	SampleFactory.cpp
	)

add_executable(${TARGETNAME} ${SRCS})
install(TARGETS ${TARGETNAME} DESTINATION ${EXECUTABLE_OUTPUT_PATH})