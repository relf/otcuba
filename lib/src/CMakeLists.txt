

ot_add_current_dir_to_include_dirs ()

ot_add_source_file ( VegasAlgorithm.cxx )
ot_add_source_file ( VegasAlgorithmImplementation.cxx )

ot_install_header_file ( VegasAlgorithm.hxx )
ot_install_header_file ( VegasAlgorithmImplementation.hxx )


include_directories (${INTERNAL_INCLUDE_DIRS})

add_library (otcuba ${SOURCEFILES})
set_target_properties (otcuba PROPERTIES POSITION_INDEPENDENT_CODE ON)
if (BUILD_SHARED_LIBS)
  set_target_properties (otcuba PROPERTIES COMPILE_DEFINITIONS "OTCUBA_DLL_EXPORTS")
endif ()

if ( NOT DEFINED LIB_VERSION ) 
  set ( LIB_VERSION 0.0.0 )
endif ()
if ( NOT DEFINED LIB_SOVERSION ) 
  set ( LIB_SOVERSION 0 )
endif ()
set_target_properties ( otcuba PROPERTIES VERSION ${LIB_VERSION} )
set_target_properties ( otcuba PROPERTIES SOVERSION ${LIB_SOVERSION} )
target_link_libraries (otcuba ${OPENTURNS_LIBRARY})

# Add targets to the build-tree export set
export (TARGETS otcuba FILE ${PROJECT_BINARY_DIR}/OTCuba-Targets.cmake)

# Install the export set for use with the install-tree
install(EXPORT OTCuba-Targets
        DESTINATION "${OTCUBA_CONFIG_CMAKE_PATH}"
        COMPONENT Development)

install(TARGETS otcuba
        EXPORT  OTCuba-Targets 
        RUNTIME DESTINATION bin
        LIBRARY DESTINATION ${OTCUBA_LIBRARY_PATH}
        ARCHIVE DESTINATION ${OTCUBA_LIBRARY_PATH}
)

