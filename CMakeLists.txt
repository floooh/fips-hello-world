#
# project: fips-hello-world
#
cmake_minimum_required(VERSION 3.21)
project(fips-hello-world)

# include the fips main cmake file
get_filename_component(FIPS_ROOT_DIR "../fips" ABSOLUTE)
include("${FIPS_ROOT_DIR}/cmake/fips.cmake")

fips_setup()
add_subdirectory(src)
