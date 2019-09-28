add_executable(app main.cpp)

#set(_app_SRCS
#)
#target_sources(app PRIVATE ${_app_SRCS})
target_compile_features(app PRIVATE cxx_std_14)

install(TARGETS app)
