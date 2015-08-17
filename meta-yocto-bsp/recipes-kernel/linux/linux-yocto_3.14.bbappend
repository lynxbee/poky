KBRANCH_genericx86  = "standard/common-pc/base"
KBRANCH_genericx86-64  = "standard/common-pc-64/base"
KBRANCH_edgerouter = "standard/edgerouter"
KBRANCH_beaglebone = "standard/beaglebone"
KBRANCH_mpc8315e-rdb = "standard/fsl-mpc8315e-rdb"

KMACHINE_genericx86 ?= "common-pc"
KMACHINE_genericx86-64 ?= "common-pc-64"

SRCREV_machine_genericx86 ?= "48833301518748d82cbc2412fea3617eeee6d01b"
SRCREV_machine_genericx86-64 ?= "7534aeb01883b48cc42eb4900d0a8c64e8160e14"
SRCREV_machine_edgerouter ?= "7534aeb01883b48cc42eb4900d0a8c64e8160e14"
SRCREV_machine_beaglebone ?= "7534aeb01883b48cc42eb4900d0a8c64e8160e14"
SRCREV_machine_mpc8315e-rdb ?= "1ff749c0f0ac559efc4c388bfee3a1b098bbaead"

COMPATIBLE_MACHINE_genericx86 = "genericx86"
COMPATIBLE_MACHINE_genericx86-64 = "genericx86-64"
COMPATIBLE_MACHINE_edgerouter = "edgerouter"
COMPATIBLE_MACHINE_beaglebone = "beaglebone"
COMPATIBLE_MACHINE_mpc8315e-rdb = "mpc8315e-rdb"

FIXES = "file://76ae03828756bac2c1fa2c7eff7485e5f815dbdb.patch \
         file://bd447b61c49fc26f0299587db3e6d66da49dc529.patch \
         file://aeea3592a13bf12861943e44fc48f1f270941f8d.patch \
         file://bde304575f3ecaa9570a9329196dffaadf3adafa.patch"

SRC_URI_append = " ${FIXES}"

FILESEXTRAPATHS_prepend := "${THISDIR}/${BPN}:"
