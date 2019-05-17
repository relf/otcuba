
add_subdirectory ( include )
add_subdirectory ( src )
add_subdirectory ( test )

install ( FILES ${HEADERFILES}
  DESTINATION ${OTCUBA_INCLUDE_PATH}/${PACKAGE_NAME}
        )

