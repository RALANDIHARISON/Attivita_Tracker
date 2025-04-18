set(TEST_SOURCE_FILES
        run_ALLTests.cpp
        AttivitaFisica_Test.cpp
        Partecipante_Test.cpp
        TrackerAttivita_Test.cpp
)

include_directories(
        ${gtest_SOURCE_DIR}/include
        ${gtest_SOURCE_DIR}
)

add_executable(runAllTests ${TEST_SOURCE_FILES})

target_link_libraries(runAllTests gtest gtest_main core)


