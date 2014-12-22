"""verb import test"""

from mod import log

#-------------------------------------------------------------------------------
def run(proj_dir, fips_dir, args) :
    log.info("fips-hello-world test verb executed")

#-------------------------------------------------------------------------------
def help() :
    log.info(log.YELLOW +
            "fips fips-hello-test\n"
            + log.DEF +
            "    test an imported project verb")
