DEFAULTTUNE ?="octeon2"

require conf/machine/include/tune-mips64.inc

AVAILTUNES += "octeon2 octeon2_64 octeon3 octeon3_64"

TUNEVALID[octeon2] = "Enable optimization related to octeon2 support"
TUNE_CCARGS .= "${@bb.utils.contains("TUNE_FEATURES", "octeon2", " -march=octeon2 ", "",d)}"
TUNE_FEATURES_tune-octeon2 = "${TUNE_FEATURES_tune-mips64-n32} octeon2"
MIPSPKGSFX_VARIANT_tune-octeon2 = "${TUNE_ARCH}"
PACKAGE_EXTRA_ARCHS_tune-octeon2 = "mips64-n32 octeon2 octeon2_64-n32"

TUNE_FEATURES_tune-octeon2_64 = "${TUNE_FEATURES_tune-mips64} octeon2"
MIPSPKGSFX_VARIANT_tune-octeon2_64 = "${TUNE_ARCH}"
PACKAGE_EXTRA_ARCHS_tune-octeon2_64 = "mips64 octeon2_64"


TUNEVALID[octeon3] = "Enable optimization related to octeon3 support"
TUNE_CCARGS .= "${@bb.utils.contains("TUNE_FEATURES", "octeon3", " -march=octeon3 ", "",d)}"

TUNE_FEATURES_tune-octeon3 = "${TUNE_FEATURES_tune-mips64-n32} octeon3"
MIPSPKGSFX_VARIANT_tune-octeon3 = "${TUNE_ARCH}"
PACKAGE_EXTRA_ARCHS_tune-octeon3 = "mips64-n32 octeon3 octeon3_64-n32"

TUNE_FEATURES_tune-octeon3_64 = "${TUNE_FEATURES_tune-mips64} octeon3"
MIPSPKGSFX_VARIANT_tune-octeon3_64 = "${TUNE_ARCH}"
PACKAGE_EXTRA_ARCHS_tune-octeon3_64 = "mips64 octeon3_64"
